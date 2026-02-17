import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[])throws Exception
    {
        String FileName = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name :");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File already exists");

        }
        else
        {
            fobj.createNewFile();
            System.out.println("File gets created succesfully");
        }
    }
}
