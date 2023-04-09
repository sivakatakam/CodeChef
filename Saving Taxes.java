import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int x,y,s;
            x=sc.nextInt();
            y=sc.nextInt();
            s=x-y;
            System.out.println(s);
            t--;
        }
    }
}