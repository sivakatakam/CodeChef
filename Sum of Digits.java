import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n,r,s=0;
            n=sc.nextInt();
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                s=s+r;
            }
            System.out.println(s);
        }
    }
}