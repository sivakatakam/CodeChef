import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,a,b,s1,s2;
        n=sc.nextInt();
        a=sc.nextInt();
        b=sc.nextInt();
        s1=n-a;
        s2=n-a-b;
        System.out.printf("%d %d",s1,s2);
    }
}