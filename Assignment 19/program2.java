class program2
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0, oddCount = 0;
        for (int iCnt = 1; iCnt <= n; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                evenCount++;
            }    
            else
            {
                oddCount++;
            }
        }
        System.out.println("Even numbers: " + evenCount);
        System.out.println("Odd numbers: " + oddCount);
    }
}

class program
{
    public static void main(String args[])
    {
        program2 obj = new program2();
        obj.countEvenOddRange(50);
    }
}