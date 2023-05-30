import java.util.*;
class Codechef
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=4,c=0;
        while(t-- >0)
        {
            int n=sc.nextInt();
            if(n>=10)
            c++;
        }
        System.out.println(c);
    }
}