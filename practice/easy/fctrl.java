import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException
    {
        BufferedReader getInput = new BufferedReader(new InputStreamReader(System.in));

        int NumCases = Integer.parseInt(getInput.readLine());      //  Number of test cases
        int[] Numbers = new int[NumCases];    //  To hold the numbers
        long Zeros = 0;

//        Populate array with <= 100000 numbers from input

        for(int i = 0; i <= (NumCases - 1); i++)
        {
            Numbers[i] = Integer.parseInt(getInput.readLine());

            for(int j = 1; j <= HighestExp(Numbers[i]); j++)
            {
                Zeros += Numbers[i] / (int)Math.pow(5, j);
            }

            System.out.println(Zeros);
            Zeros = 0;
        }
    }

    //  Determine lowest value of 'k', such that 5^(k+1) > Numbers[i]
    public static int HighestExp(int Number)
    {
        int Exp = 0;

        if((Number >= 0) && (Number <= 24))
        {
            Exp = 1;
        }
        else if((Number > 24) && (Number <= 124))
        {
            Exp = 2;
        }
        else if((Number > 124) && (Number <= 624))
        {
            Exp = 3;
        }
        else if((Number > 624) && (Number <= 3124))
        {
            Exp = 4;
        }
        else if((Number > 3124) && (Number <= 15624))
        {
            Exp = 5;
        }
        else if((Number > 15624) && (Number <= 78124))
        {
            Exp = 6;
        }
        else if((Number > 78124) && (Number <= 390624))
        {
            Exp = 7;
        }
        else if((Number > 390624) && (Number <= 1953124))
        {
            Exp = 8;
        }
        else if((Number > 1953124) && (Number <= 9765624))
        {
            Exp = 9;
        }
        else if((Number > 9765624) && (Number <= 48828124))
        {
            Exp = 10;
        }
        else if((Number > 48828124) && (Number <= 244140624))
        {
            Exp = 11;
        }
        else if((Number > 244140624) && (Number <= 1220703124))
        {
            Exp = 12;
        }
        return Exp;
    }

    }

