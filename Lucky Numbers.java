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
            int x=0,r;
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                if(r==7)
                {
                    x=1;
                    break;
                }
            }
            if(x==1)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}