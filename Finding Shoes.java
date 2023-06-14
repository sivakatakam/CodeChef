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
            int m=sc.nextInt();
            int a;
            if(m>=n)
            a=n;
            else
            a=2*n-m;
            System.out.println(a);
        }
    }
}