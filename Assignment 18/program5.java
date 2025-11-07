class program5
{
    void findSmallestDigit(int num)
    {
        int smallest = 9;
        int digit;

        while (num > 0)
        {
            digit = num % 10;
            if (digit < smallest)
                smallest = digit;
            num = num / 10;
        }

        System.out.println("Smallest digit = " + smallest);
    }
}

class program
{
    public static void main(String args[])
    {
        program5 obj = new program5();
        obj.findSmallestDigit(45872);
    }
}