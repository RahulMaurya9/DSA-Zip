public class ReverseArray{

    public static void main(String[] args){
        int[] arr = {1,2,3,4,5,6};
        reverseArray(arr);
        for(int x : arr){
            System.out.print(x + " ");
        }
    }

    private static void reverseArray(int[] arr) {
        int first = 0 ;
        int last = arr.length -1 ;
        while(first<= last){
            int temp = arr[first];
            arr[first] = arr[last];
            arr[last] = temp;
            ++first;
            --last;
        }
    }
}