import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj  = new Scanner(System.in);

        System.out.println("Enter Directory name : ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            if(files != null)
            {
                System.out.println("Only files:");

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
                System.out.println("Unable to access files (Permission issue)");
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }
    }
}

