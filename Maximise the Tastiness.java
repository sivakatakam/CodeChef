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
            int d=sc.nextInt();
            int max1,max2;
            if(a>b)
            max1=a;
            else
            max1=b;
            if(c>d)
            max2=c;
            else
            max2=d;
            System.out.println(max1+max2);
        }
    }
}