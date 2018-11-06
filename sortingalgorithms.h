#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <QVector>

template<class T>
void fastSort(T* mass, int massSize){
    ;
}

template<class T>
class BinaryHeap
{
public:
    BinaryHeap(){};
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
