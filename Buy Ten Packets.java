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
            int a=(2*y)+x;
            int b=5*x;
            if(a<b)
            System.out.println(a);
            else
            System.out.println(b);
        }
    }
}