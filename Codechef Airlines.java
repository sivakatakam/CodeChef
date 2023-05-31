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
            if(10*x>=y)
            a=y*z;
            else
            a=10*x*z;
            System.out.println(a);
        }
    }
}