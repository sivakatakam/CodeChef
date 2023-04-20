import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int n=sc.nextInt();
            int x=sc.nextInt();
            int y=sc.nextInt();
            if(x*y>=n)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}