import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a,b,x;
            a=sc.nextInt();
            b=sc.nextInt();
            if(a<b)
            x=a+2*(b-a);
            else
            x=b;
            System.out.println(x);
        }
    }
}