import java.io.*;
import java.util.*;

import javax.swing.Box.Filler;

class program1
{
    public static void main(String A[])throws Exception
    {
        Scanner sobj  = new Scanner(System.in);

        System.out.println("Enter Directory name : ");

        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            System.out.println("Reguler files are : ");

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName());
                }
            }

        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}