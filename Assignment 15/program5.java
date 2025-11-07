class program5
{
    void printTable(int num)
    {
        int iTable = 0;
        for(int iCnt = 1; iCnt <= 10; iCnt++)
        {
            iTable = num * iCnt;
            System.out.println(num + " x " + iCnt + " = " + iTable);
        }
    }
}

class program
{
    public static void main(String A[])
    {
        program5 obj = new program5();
        obj.printTable(5);
    }
}