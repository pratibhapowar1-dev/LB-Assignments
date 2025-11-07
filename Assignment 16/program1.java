class program1
{
    void checkPrime(int num)
    {
        if (num <= 1)
        {
            System.out.println(num + " is not a prime number.");
            return;
        }

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                System.out.println(num + " is not a prime number.");
                return;
            }
        }

        System.out.println(num + " is a prime number.");
    }
}

class program
{
    public static void main(String args[])
    {
        program1 obj = new program1();
        obj.checkPrime(11);
    }
}