
import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj  = new Scanner(System.in);

        System.out.println("Enter Directory name : ");
        String dirName = sobj.nextLine();

        File fobj = new File(dirName);

        if(fobj.exists() && fobj.isDirectory())
        {
            FileOutputStream foobj = new FileOutputStream("Marvellous.txt");
            File files[] = fobj.listFiles();

            System.out.println("Regular files are being copied...");

            for(File file : files)
            {
                if(file.isFile())
                {
                    FileInputStream fiobj = new FileInputStream(file);

                    int ch;
                    while((ch = fiobj.read()) != -1)  
                    {
                        foobj.write(ch);
                    }

                   
                    foobj.write('\n');

                    fiobj.close();
                }
            }

            foobj.close();
            System.out.println("All file data copied successfully into Marvellous.txt");
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}
