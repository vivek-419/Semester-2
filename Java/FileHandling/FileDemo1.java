import java.io.*;
public class FileDemo1 {
    public static void main(String[] args) {
        FileInputStream fin = null;
        try {
            fin = new FileInputStream("/Users/vivi.addagatla/Documents/Semester-2/Java/FileHandling/abc.txt");
            int b = 0;
            while ((b = fin.read()) != -1) {
                System.out.print((char) b);
            }
        } catch (FileNotFoundException e) {
            System.out.println("FileNotFound: " + e);
        } catch (IOException e) {
            System.out.println("IO error" + e);
        } finally {
            try {
                if (fin != null)
                fin.close();
            } catch (IOException e) {
                System.out.println("Error closing file" + e);
            }
        }
    }
}