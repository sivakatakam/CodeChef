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
            int s,i;
            s=(int)Math.pow(2,x);
            for(i=1;i<=n;i++)
            s=s/2;
            System.out.println(s);
        }
    }
}