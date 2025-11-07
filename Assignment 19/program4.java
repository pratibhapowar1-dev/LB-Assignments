class program4
{
    void CountFacter(int num)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                count++;
        }
        System.out.println("Total factors of " + num + " = " + count);
       
    }
}

class program
{
    public static void main(String args[])
    {
        program4 obj = new program4();
        obj.CountFacter(20);
    }
}