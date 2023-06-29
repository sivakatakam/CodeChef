import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int s=sc.nextInt();
            int x=sc.nextInt();
            int y=sc.nextInt();
            int z=sc.nextInt();
            if(z<=s-(x+y))
            System.out.println(0);
            else if(z<=s-x||z<=s-y)
            System.out.println(1);
            else
            System.out.println(2);
        }
    }
}