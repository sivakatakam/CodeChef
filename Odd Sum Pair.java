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
            int c=sc.nextInt();
            if((a+b)%2==1||(b+c)%2==1||(a+c)%2==1)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}