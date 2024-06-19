public class Maxmin {
    public static void max_min(int[] arr){
        long total_sum = 0;
        int min_element = Integer.MAX_VALUE;
        int max_element = Integer.MIN_VALUE;

        for (int i : arr) {
            total_sum += i;
            if(i > max_element){
                max_element = i;
            }
            if(i < min_element){
                min_element = i;
            }
        }

        long min_sum = total_sum - max_element;
        long max_sum = total_sum - min_element;

        System.out.println(min_sum + " " + max_sum);
    }
    public static void main(String[] args) {
        int []arr = {1,2,3,4,5};
        max_min(arr);
    }
}
