import socket
import threading

def receive_messages(client_socket):
    while True:
        try:
            message = client_socket.recv(4096).decode('utf-8')
            if not message:
                break
            print(message)
        except:
            break

def start_client():
    client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client.connect(('127.0.0.1', 9999))

    receive_thread = threading.Thread(target=receive_messages, args=(client,))
    receive_thread.start()

    while True:
        command = input()
        client.sendall(command.encode('utf-8'))

if __name__ == '__main__':
    start_client()
