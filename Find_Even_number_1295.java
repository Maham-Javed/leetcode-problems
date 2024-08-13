// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

public class Find_Even_number_1295 {
    public static void main(String[] args) {

        int[] nums = {902, 12, 14, 7840, 3};

        System.out.println(evenNumber(nums));

    }
    public static int evenNumber(int[] nums){
        int count = 0;
        //for-each loop go through every iteration's
        for(int num : nums){
            // math.log10 give us the digits in the number i.e(902 => 3 digit)
            if((int)(Math.log10(num) + 1) % 2 == 0){
                count ++;
            }
        }
        return count;
    }
}