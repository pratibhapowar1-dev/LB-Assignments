import java.io.*;
import java.util.*;

class Program5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String dirName = sobj.nextLine();

        File dobj = new File(dirName);

        if(dobj.exists() && dobj.isDirectory())
        {
            File files[] = dobj.listFiles();

            System.out.println("Files and their sizes : ");
            for(File f : files)
            {
                System.out.println(f.getName() + " : " + f.length() + " bytes");
            }
        }
        else
        {
            System.out.println("Directory not found");
        }
    }
}