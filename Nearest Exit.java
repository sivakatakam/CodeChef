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
            if(n>50)
            System.out.println("RIGHT");
            else
            System.out.println("LEFT");
        }
    }
}