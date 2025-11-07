class program5
{
    void printDivisibleBy2and3(int n)
    {
        System.out.println("Numbers divisible by both 2 and 3 up to " + n + ":");
        for (int iCnt = 1; iCnt <= n; iCnt++)
        {
            if (iCnt % 2 == 0 && iCnt % 3 == 0)
                System.out.print(iCnt + " ");
        }
       
    }
}

class program
{
    public static void main(String args[])
    {
        program5 obj = new program5();
        obj.printDivisibleBy2and3(30);
    }
}
