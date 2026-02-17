import java.io.*;
import java.util.*;

class Program3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String dirName = sobj.nextLine();

        File dobj = new File(dirName);

        if(dobj.exists())
        {
            System.out.println("Directory already exists");
        }
        else
        {
            dobj.mkdir();
            System.out.println("Directory created successfully");
        }
    }
}