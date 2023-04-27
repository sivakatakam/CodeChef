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
            int s;
            if(x<300)
            s=3000;
            else
            s=x*10;
            System.out.println(s);
        }
    }
}