/* This question reverse a number (123 -> 321), but if we have 10400,
   then it ignore the last extra two zeros and become (10400 -> 401)
 */

public class Reverse_of_a_Number {
    public static int ReverseNumber(int n, int reverseNum){

        while(n > 0){
            int lastDigit = n % 10;
            if(reverseNum > Integer.MAX_VALUE/10 || reverseNum < Integer.MIN_VALUE/10){
                return 0;
            }
            reverseNum = (reverseNum * 10) + lastDigit;
            if(reverseNum < 0){
                    n = n/10 * -1;
            }else{
                n = n/10;
            }
        }
        return reverseNum;
    }

    public static void main(String[] args) {
        int n = -123;
        int reverseNum = 0;

        int ans = ReverseNumber(n, reverseNum);
        System.out.println(ans);
    }
}