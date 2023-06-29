import java.util.*;
class Codchef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
            int s=0;
            if(n%2==0)
            s=((n/2)*a)+((n/2)*b);
            else
            s=((n/2)*a)+((n/2)*b)+b;
            System.out.println(s);
        }
    }
}