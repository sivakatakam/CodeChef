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
            int r,rev=0;
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                rev=rev*10+r;
            }
            System.out.println(rev);
        }
    }
}