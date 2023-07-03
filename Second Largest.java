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
            int c=sc.nextInt();
            if(b>a&&c<a||c>a&&b<a)
            System.out.println(a);
            else if(a>b&&c<b||c>b&&a<b)
            System.out.println(b);
            else
            System.out.println(c);
        }
    }
}