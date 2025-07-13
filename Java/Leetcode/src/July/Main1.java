package July;

import java.util.Scanner;

public class Main1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double biketime = 50;
        double walktime = 0;
        walktime += n / 1.2;
        biketime += n / 3.0;
        if(biketime > walktime){
            System.out.println("骑车快");
        }else if(biketime < walktime){
            System.out.println("走路快");
        }
    }
}
