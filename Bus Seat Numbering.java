import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            if(n<=15)
            {
                if(n>=11&&n<=15)
                System.out.println("Lower Single");
                else
                System.out.println("Lower Double");
            }
            else
            {
                if(n>=26&&n<=30)
                System.out.println("Upper Single");
                else
                System.out.println("Upper Double");
            }
        }
    }
}