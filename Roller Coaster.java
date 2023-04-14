import java.util.*;
class Codedhef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0)
        {
            int x=sc.nextInt();
            int h=sc.nextInt();
            if(x>=h)
            System.out.println("YES");
            else
            System.out.println("NO");
        }
    }
}