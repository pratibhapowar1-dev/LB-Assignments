
import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name:");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        int fileCount = 0;
        int folderCount = 0;

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File f : files)
            {
                if(f.isFile())
                    fileCount++;
                else if(f.isDirectory())
                    folderCount++;
            }

            System.out.println("Total Files   : " + fileCount);
            System.out.println("Total Folders : " + folderCount);
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}