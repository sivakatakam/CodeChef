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
            if((100-a)<(200-(2*b)))
            System.out.println("FIRST");
            else if((100-a)>(200-(2*b)))
            System.out.println("SECOND");
            else
            System.out.println("BOTH");
        }
    }
}