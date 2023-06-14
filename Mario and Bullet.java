import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            int z=sc.nextInt();
            int a;
            int n=y/x;
            if(n>z)
            a=0;
            else
            a=z-n;
            System.out.println(a);
        }
    }
}