import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int n=a+b,c=0;
            for(int i=1;i<=n;i++)
            {
                if(n%i==0)
                c++;
            }
            if(c==2)
            System.out.println("Alice");
            else
            System.out.println("Bob");
        }
    }
}