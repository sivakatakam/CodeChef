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
            int a1,b1,c;
            if(a%10==0)
            a1=a/10;
            else
            a1=(a/10)+1;
            if(b%10==0)
            b1=b/10;
            else
            b1=(b/10)+1;
            c=Math.abs(a1-b1);
            System.out.println(c);
        }
    }
}