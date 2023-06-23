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
            if(x<=3)
            System.out.println("BRONZE");
            else if(x<=6)
            System.out.println("SILVER");
            else
            System.out.println("GOLD");
        }
    }
}