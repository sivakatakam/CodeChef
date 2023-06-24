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
            int x=sc.nextInt();
            int k=sc.nextInt();
            if((k/x)<=n)
            System.out.println(k/x);
            else
            System.out.println(n);
        }
    }
}