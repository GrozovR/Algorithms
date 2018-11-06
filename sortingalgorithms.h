#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <QVector>
#include <QDebug>

int x[] = {4, 3, 2, 58, 12, 48, 2, 3, 6, 18, 47, 0, 1, 83, 9};
int n = 15; // size of x

void swap(size_t i, size_t j){
    int tmp = x[i];
    x[i] = x[j];
    x[j] = tmp;
}

void printX(){
    for(size_t i{0}; i < n; i++)
        qDebug() << x[i] << ' ';

    qDebug() << '\t';
}

void insertionSort()
{
    //TODO: добавить бинарный поиск

    for(size_t i{ 1 }; i < n; i++)
        for(size_t j{ i }; j > 0 && x[j-1] > x[j] ; j--)
            swap(j, j - 1);
}

void selectionSort()
{
    for(size_t i{ 0 }; i < n - 1; i++){
        int min_key = i;

        for(size_t j{ i + 1 }; j < n; j++){

            if(x[j] < x[min_key])
                min_key = j;
        }

        if(i != min_key)
            swap(i, min_key);
    }
}

template<class T>
void quickSort(T* a, int xSize){

    int i{ 0 };
    int j{ xSize };

    T p = a[ xSize / 2 ];		// центральный элемент

    // процедура разделения
    do {
        while ( a[i] < p )
            i++;
        while ( a[j] > p )
            j--;

        if (i <= j) {
            T tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while ( i<=j );

    printX();

    // рекурсивные вызовы, если есть, что сортировать
    if ( j > 0 )
        quickSort(a, j);
    if ( xSize > i )
        quickSort(a + i, xSize - i);
}

void bubbleSort(){

    for(size_t i{ 0}; i < n - 1; i++)
        for(size_t j{ 1 }; j < n - i; j++)
            if(x[j] < x[j-1])
                swap(j, j-1);
}

template<class T>
void fastSort(T* mass, int massSize){
    ;
}

template<class T>
class BinaryHeap
{
public:
    BinaryHeap(){}
    ~BinaryHeap() = default;

    void insertElement();

    size_t leftLeafIndex(const size_t parentIndex) const{
        return 2*parentIndex + 1;
    }
    size_t rightLeafIndex(const size_t parentIndex) const{
        return 2*parentIndex + 2;
    }

    QVector<T> m_mass;
};

template<class T>
void binaryHeapSort(T* mass, int massSize){
    ;
}

#endif // SORTINGALGORITHMS_H
