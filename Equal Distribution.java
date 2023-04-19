import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a,b,s;
            a=sc.nextInt();
            b=sc.nextInt();
            s=a+b;
            if(s%2==0)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}