/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/
#include<stdio.h>
int main() {
    int n ;
    int arr[100] ;
    int i = 0 ;
    printf( "Enter new element of Array :\n" ) ;
    scanf( "%d", &n ) ;

    for( i = 0 ; i < n ; i++ ) {
        printf( "Input :\n" ) ;
        scanf( "%d", &arr[i] ) ;
    }

    printf( "Array: " ) ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "%d ", arr[i] ) ;
    }
    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (arr[k] < arr[k + 1]) {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    if (n >= 3) {
        printf("\nThe large 3rd element = %d\n", arr[2]);
    } else {
        printf("\nThere are not enough elements for the 3rd largest element.\n");
    }

    
    return 0 ;
}