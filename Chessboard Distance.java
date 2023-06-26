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
            int c=sc.nextInt();
            int d=sc.nextInt();
            int s1=Math.abs(a-c);
            int s2=Math.abs(b-d);
            int x=Math.max(s1,s2);
            System.out.println(x);
        }
    }
}