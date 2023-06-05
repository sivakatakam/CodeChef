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
            int d;
            if(x<=100)
            d=0;
            else if(x>100&&x<=1000)
            d=25;
            else if(x>1000&&x<=5000)
            d=100;
            else
            d=500;
            System.out.println(x-d);
        }
    }
}