import java.util.Scanner;
public class time{
	public static void main(String[]args){
	Scanner sc=new Scanner(System.in);
  // System.out.println(h+":"+m+":"+s);
	int h = sc.nextInt();
	int m = sc.nextInt();
	int s = sc.nextInt();  
		if(h>12){
		h=h+12;
		}
	System.out.println(h+":"+m+":"+s);
	sc.close();
	}
}
