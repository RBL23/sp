# Explanation
## Server Code:

The server listens for incoming client connections on port 9999.
When a client connects, it starts a new thread to handle communication with that client.
The handle_client function receives commands from the client, executes them using subprocess.getoutput, and sends the output to all connected clients.

## Client Code:

The client connects to the server at 127.0.0.1 on port 9999.
It starts a thread to receive messages from the server and prints them.
The main thread reads commands from the user and sends them to the server.
This setup allows multiple clients to connect to the server and see all commands executed and their results in real time.
