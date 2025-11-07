class program4
{
    void findLargestDigit(int num)
    {
        int largest = 0;
        int digit;

        while (num > 0)
        {
            digit = num % 10;
            if (digit > largest)
                largest = digit;
            num = num / 10;
        }

        System.out.println("Largest digit = " + largest);
    }
}

class program
{
    public static void main(String args[])
    {
        program4 obj = new program4();
        obj.findLargestDigit(83429);
    }
}