import java.io.*;
import java.util.*;

class program1
{
    public staticvoid main(String A[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
         
        String src = sobj.nextLine();

        System.out.peintln("Enter destination file name :");

        String dest = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(src);
        FileOutputStream foobj = new FileOutputStream(dest);

        int ch = 0;
        while ((ch = fiobj.read())!= -1)
        {
            foobj.write(ch);
            
        }
        System.out.println("File copied successfully");

        fiobj.close();
        foobj.close();


    }
    

}
