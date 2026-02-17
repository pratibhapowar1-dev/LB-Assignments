import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            System.out.println("File name with absolute path:");
            for(File f : files)
            {
                if(f.isFile())
                {
                    System.out.println(f.getName() + " -> " + f.getAbsolutePath());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}