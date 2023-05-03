import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int x=sc.nextInt();
            int s;
            if(x%10<5)
            s=x-(x%10);
            else
            s=x+10-(x%10);
            System.out.println(100-s);
        }
    }
}