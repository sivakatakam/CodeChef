import java.util.*;
class Codechef
{
    public static void main(String main[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int x=sc.nextInt();
            int y=sc.nextInt();
            if(x>y*10)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}