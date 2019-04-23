import java.util.Scanner;

public class Main
{
    public static final double ATM_FEE = .5f;    //  50-cent ATM fee
    public static final int MULT = 5;           //  Withdrawal multiple

    public static void main(String[] args)
    {
        Scanner getInput = new Scanner(System.in);

        double WithdrawalAmt = getInput.nextDouble();
        double Balance = getInput.nextDouble();
        boolean IsMultiple = (WithdrawalAmt % 5 == 0);
        boolean HasEnough = (WithdrawalAmt + ATM_FEE) <= Balance;

        if(HasEnough && IsMultiple)
        {
            System.out.printf("%.2f", Balance - WithdrawalAmt - ATM_FEE);
        }
        else
        {
            System.out.printf("%.2f", Balance);
        }

    }
}

