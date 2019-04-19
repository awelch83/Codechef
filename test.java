import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader getInput = new BufferedReader(new InputStreamReader
        (System.in));

        while(true)
        {
                int Num = Integer.parseInt(getInput.readLine());

                if(Num == 42)
                {
                    break;
                }
                else
                {
                    System.out.println(Num);
                }
        }
    }
}

