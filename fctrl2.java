import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner getInput = new Scanner(System.in);

        int t;  //  Number of integers to calculate
        t = getInput.nextInt(); //  Read number of ints

        int UserNumber[] = new int[t];

        //  Populate array with integers
        for(int i = 0; i <= (t - 1); i++)
        {
            UserNumber[i] = getInput.nextInt();
        }

        //  Blank line between input and output, for readability
        System.out.println();
        
        //  Declare and initialize "Factorial"
        BigInteger Factorial = BigInteger.ONE;

        for(int i = 0; i <= (t - 1); i++)
        {            
            //  Convert users numbers to BigInts
            Factorial = BigInteger.valueOf(UserNumber[i]);

            //  Calculate factorial of each number
            for(int j = 1; j < (UserNumber[i]); j++)
            {
                Factorial = Factorial.multiply(BigInteger.valueOf(j));
            }
            
            System.out.println(Factorial); //   Print each factorial
        }
    }
}

