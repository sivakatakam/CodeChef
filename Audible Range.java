import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int x=sc.nextInt();
            if(x>=67&&x<=45000)
            System.out.println("YES");
            else
            System.out.println("NO");
            t--;
        }
    }
}