import java.io.*;
public class FileOutputStreamEx1 {
    public static void main(String[] args) {
        try (FileOutputStream fout = new FileOutputStream("/Users/vivi.addagatla/Documents/Semester-2/Java/FileHandling/abc.txt")) {
            String s = "Hello World";
            byte b[] = s.getBytes();
            fout.write(b);
        } catch (IOException e) {
            System.out.println("File not found exception");
        }
    }
}