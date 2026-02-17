
import java.io.*;
import java.util.*;

class Program2
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String fileName = sobj.nextLine();

        File fobj = new File(fileName);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            int ch = 0;
            while((ch = fiobj.read()) != -1)
            {
                System.out.print((char)ch);
            }

            fiobj.close();
        }
        else
        {
            System.out.println("File not found");
        }
    }
}