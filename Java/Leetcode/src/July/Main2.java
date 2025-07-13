package July;

import java.util.Scanner;

public class Main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        StringBuilder sb = new StringBuilder();
        for(char c : s.toCharArray()){
            if(Character.isLetter(c)){
                //是大写就-A 是小写就-'a' 来从ASCII表示转为基本量（也就是该字符在26个字母中的位置）
                char base = Character.isUpperCase(c) ? 'A' : 'a';
                //%26是为了保证移位后的结果在范围内 也就是超过后会从头开始
                //先-base是为了将ASCII值转为相对偏移量 +base是为了转回ASCII字母
                //算数运算默认返回int类型，所以要强转char
                char newc = (char)(((c - base + 5) % 26) + base);
                sb.append(newc);
            }else if(Character.isDigit(c)){
                char newc = (char)((c - '0' + 5) % 10 + '0');
                sb.append(newc);
            }else{
                sb.append(c);
            }
        }
        System.out.println(sb.toString());
    }
}
