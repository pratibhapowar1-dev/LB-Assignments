import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[])throws Exception
    {
        String DirName = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Directory name :");
        DirName = sobj.nextLine();

        File dobj = new File(DirName);

        if(dobj.exists()&& dobj.isDirectory())
        {
            String files[] = dobj.list();
            System.out.println("File in directry are : ");

            for(String name : files)
        {
            System.out.println(name);

        }

        }
        else
        {
            
            System.out.println("Directory not found");
        }
    }
}
