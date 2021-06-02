#include<iostream>

using namespace std;

class upperDiagonal
{
private:
    int mat_size;
    int *mat;

public:
    upperDiagonal(int mat_size)
    {
        this->mat_size = mat_size;
        mat = new int[(mat_size*(mat_size+1))/2];
    }
    void set(int elem, int val)
    {
        mat[elem] = val;
    }

    void display()
    {
        for(int row=1;row<=mat_size;row++)
        {
            for(int col=1;col<=mat_size;col++)
            {
                if(col<row)
                    cout<<"0 ";
                else
                    cout<<mat[(row*(row-1))/2+col-1]<<" ";// Here we are trying to get to index of the last element of the last second row there we add number of columns to get to the current element
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int row,col,val,mat_size,elem = 0;
    cout<<"Enter the matrix dimensions as a single digit ";
    cin>>mat_size;
    cout<<mat_size;

    upperDiagonal diag(mat_size);

    while(elem<(mat_size*(mat_size+1))/2)
    {
        cout<<"Enter element value: ";
        cin>>val;
        diag.set(elem,val);
        elem++;
    }
    diag.display();
}

