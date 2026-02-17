import java.io.*;
import java.util.*;

class program1
{
    public static void main(String[]A)throws exception
    {
        String FileName = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");

        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File opened successfully");
        }
        else
        {
            System.out.println("File does not exist");
        }

        sobj.close();
        


    }
}