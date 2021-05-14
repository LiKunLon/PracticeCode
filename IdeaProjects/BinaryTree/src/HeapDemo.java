

public class HeapDemo {
    public static void main(String[] args){
        Object o=new Object(){
            public boolean equals(Object obj){
                return true;
            }
        };
        System.out.println(o.equals("Fred"));
    }
    //希尔排序
    public static void main1(String[] args) {
        int[] drr={5,3,1};
        for (int i = 0; i <drr.length ; i++) {
            
        }
    }
    public static void sort(int[] arr,int gap){
        for (int i = 1; i <arr.length ; i++) {
            int tmp=arr[i];
            int j=i-gap;
            for(;j>=0;j=j-gap){
                if(arr[j]>tmp){
                    arr[j+gap]=arr[j];
                }else{
                    break;
                }
            }
            arr[j+gap]=tmp;
        }
    }
    public static void selectSort(int[] array) {
        int len=array.length;
        for(int i=0;i<len-1;i++){
            int max=0;
            for(int j=1;j<len-1;j++){
                if(array[j]>array[max]){
                    max=j;
                }
            }
            int tmp=array[max];
            array[max]=array[len-1-i];
            array[len-1-i]=tmp;
        }
    }
}
