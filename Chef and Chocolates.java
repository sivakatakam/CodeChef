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
            int z=sc.nextInt();
            int s=(x*5+y*10)/z;
            System.out.println(s);
        }
    }
}