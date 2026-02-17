import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String name = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(name);

        int ch = 0;
        long checksum = 0;

        while((ch = fiobj.read()) != -1)
        {
            checksum = checksum + ch;
        }

        System.out.println("Checksum of file is : " + checksum);

        fiobj.close();
    }
}