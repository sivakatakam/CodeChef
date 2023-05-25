import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        float y=sc.nextFloat();
        float a;
        if(x%5==0)
        {
            if(x+0.5<=y)
            a=(float)(y-x-0.5);
            else
            a=y;
        }
        else
        a=y;
        System.out.printf("%.2f",a);
    }
}