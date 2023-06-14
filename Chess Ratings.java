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
            if((y-x)%8==0)
            System.out.println((y-x)/8);
            else
            System.out.println(((y-x)/8)+1);
        }
    }
}