import java.util.*;
import java.lang.*;
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
            int x=sc.nextInt();
            int y=sc.nextInt();
            int s1=Math.abs(a-b);
            if(a>b&&s1<=y)
            System.out.println("YES");
            else if(a<=b&&s1<=x)
            System.out.println("YES");
            else
            System.out.println("NO");
            
        }
    }
}