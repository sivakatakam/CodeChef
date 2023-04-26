import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int x1=sc.nextInt();
            int y1=sc.nextInt();
            int x2=sc.nextInt();
            int y2=sc.nextInt();
            int s;
            if(x1+y1<x2+y2)
            s=x1+y1;
            else
            s=x2+y2;
            System.out.println(s);
        }
    }
}