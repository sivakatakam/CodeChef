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
            if((a/2.0)<=b)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}