import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[])throws Exception
    {
        String FileName = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name :");
        FileName = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(FileName,true);

        System.out.println("Enter data to write :");

        String data = sobj.nextLine();

        foobj.write(data.getBytes());

        System.out.println("Data written successfuly");

        foobj.close();
    
    }
}