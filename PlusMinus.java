/**
 * PlusMinus
 */
public class PlusMinus {

    public static void plus_minus(int[] arr) {
        int arr_count = arr.length;
        double pos = 0;
        double neg = 0;
        double zero = 0;
        for (int idx = 0; idx < arr.length; idx++) {
            if (arr[idx] > 0) {
                pos++;
            }
            if (arr[idx] == 0) {
                zero++;
            }
            if (arr[idx] < 0) {
                neg++;
            }
            
        }
        double pos_ratio = pos/arr_count;
        double neg_ratio = neg/arr_count;
        double zero_ratio = zero/arr_count;

        System.out.printf("%.6f", pos_ratio);
        System.out.printf("%.6f", neg_ratio);
        System.out.printf("%.6f", zero_ratio);
    }

    public static void main(String[] args) {
        int arr[] = {-2,-1,0,1,2};
        plus_minus(arr);
    }
}