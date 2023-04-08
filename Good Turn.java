import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            int x,y,z;
            x=sc.nextInt();
            y=sc.nextInt();
            z=x+y;
            if(z>6)
            System.out.println("YES");
            else
            System.out.println("NO");
            t--;
        }
    }
}