using namespace std;


//Given the triangle of consecutive odd numbers :
//
//               1
//            3     5
//         7     9    11
//      13    15    17    19
//   21    23    25    27    29
//...


//Calculate the sum of the numbers in the nth row of this triangle(starting at index 1) e.g.: (Input-- > Output)
//
//1 -- > 1
//2 -- > 3 + 5 = 8


//Assert::That(rowSumOddNumbers(1), Equals(1));
//Assert::That(rowSumOddNumbers(42), Equals(74088));

long long rowSumOddNumbers(unsigned n) {
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        res += n * (n - 1) + 1 + 2 * i;
    }

    return res;
}


//  From CODEWARS

//long long rowSumOddNumbers(unsigned n) {
//    //n - элементов на уровне n
//    //1+2+3+4+5+...+n= (n+1)n/2 - элементов в пирамиде из n уровней
//    //0+1+2+3+4+...+(n-1) = (n-1)n/2 - столько раз прибавляется 2 к предыдущему числу
//    //1+(n-1)n - с этого элемента начинается уровень n
//    //[1+(n-1)n]+[1+(n-1)n+2]+[1+(n-1)n+4]+...+[1+(n-1)n+2(n-1)] - элементы последнего уровня
//    //([1+(n-1)n] + [1+(n-1)n+2(n-1)])n/2 = n^3
//
//    return (long long)n * n * n;
//}