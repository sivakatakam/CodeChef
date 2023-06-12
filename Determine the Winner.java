import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int a1=sc.nextInt();
            int a2=sc.nextInt();
            int b1=sc.nextInt();
            int b2=sc.nextInt();
            int max1,max2,max;
            if(a1>a2)
            max1=a1;
            else
            max1=a2;
            if(b1>b2)
            max2=b1;
            else
            max2=b2;
            if(max1<max2)
            System.out.println("P");
            else if(max1>max2)
            System.out.println("Q");
            else
            System.out.println("TIE");
        }
    }
}