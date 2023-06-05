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
            int y=sc.nextInt();
            if((x*y)%4==0)
            System.out.println((x*y)/4);
            else
            System.out.println(((x*y)/4)+1);
        }
    }
}