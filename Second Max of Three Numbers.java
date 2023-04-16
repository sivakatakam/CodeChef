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
            if(a>b&&b>c)
            System.out.println(b);
            else if(a>c&&c>b)
            System.out.println(c);
            else if(c>a&&a>b)
            System.out.println(a);
            else if(b>c&&c>a)
            System.out.println(c);
            else if(b>a&&a>c)
            System.out.println(a);
            else if(c>b&&b>a)
            System.out.println(b);
        }
    }
}