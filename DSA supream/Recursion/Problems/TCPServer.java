import java.io.*;
import java.net.*;
import java.nio.file.*;
public class TCPServer
{
public static void main(String[] args) throws IOException
{
ServerSocket server;
DataOutputStream out = null;
DataInputStream in;
try
{
server = new ServerSocket(6000, 1); //port number and num of connections
System.out.println("Server Waiting for client");
Socket socket = server.accept();
System.out.println("Client connected ");
in = new DataInputStream(socket.getInputStream());
out = new DataOutputStream(socket.getOutputStream());
String fileName = in.readUTF();
System.out.println("File Requested is : " + fileName);
byte[] filedata = Files.readAllBytes(Paths.get(fileName));
String fileContent = new String(filedata);
out.writeUTF(fileContent.toString());
System.out.println("FILE SENT SUCCESSFULLY");
}
catch (Exception e)
{
System.out.println(e.getMessage());
out.writeUTF("FILE DOESN&#39;T EXISTS");
}
}
}