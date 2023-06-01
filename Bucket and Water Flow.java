import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int w=sc.nextInt();
            int x=sc.nextInt();
            int y=sc.nextInt();
            int z=sc.nextInt();
            if(x-w>y*z)
            System.out.println("Unfilled");
            else if(x-w==y*z)
            System.out.println("filled");
            else
            System.out.println("overFlow");
        }
    }
}