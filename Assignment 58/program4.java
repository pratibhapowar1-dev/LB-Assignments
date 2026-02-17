import java.io.*;
import java.util.*;

class Program4
{
    public static void main(String[] args) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            FileOutputStream fo = new FileOutputStream("Marvellous.txt");

            File files[] = fobj.listFiles();
            for(File f : files)
            {
                if(f.isFile())
                {
                    String header = "\nFile Name : " + f.getName() + "\n";
                    fo.write(header.getBytes());

                    FileInputStream fi = new FileInputStream(f);
                    int ch;
                    while((ch = fi.read()) != -1)
                    {
                        fo.write(ch);
                    }
                    fi.close();
                }
            }
            fo.close();
            System.out.println("File name and data written successfully.");
        }
        else
        {
            System.out.println("Invalid directory path.");
        }
    }
}
