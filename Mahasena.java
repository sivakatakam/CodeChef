import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int c=0,d=0;
        while(t-- >0)
        {
            int x=sc.nextInt();
            if(x%2==0)
            c++;
            else
            d++;
        }
        if(c>d)
        System.out.println("READY FOR BATTLE");
        else
        System.out.println("NOT READY");
    }
}