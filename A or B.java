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
            int s1,s2;
            s1=(500-(2*a))+(1000-(4*(a+b)));
            s2=(1000-(4*b))+(500-(2*(a+b)));
            if(s1>s2)
            System.out.println(s1);
            else
            System.out.println(s2);
        }
    }
}