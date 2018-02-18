#ifndef CLASSPROJECT_ARRAY_H
#define CLASSPROJECT_ARRAY_H


class Array {
    int m_nSizeArray, m_iCurrentPosition;
    int * m_pArray;
public:
    Array(int nSizeArray);

    virtual ~Array();
};


#endif //CLASSPROJECT_ARRAY_H
