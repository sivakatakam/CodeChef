import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int a,b,s;
            a=sc.nextInt();
            b=sc.nextInt();
            s=(a*5)+(b*7);
            System.out.println(s);
            t--;
        }
    }
}