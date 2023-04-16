import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            int s=y-x;
            if(s>0)
            System.out.println("PROFIT");
            else if(s<0)
            System.out.println("LOSS");
            else
            System.out.println("NEUTRAL");
        }
    }
}