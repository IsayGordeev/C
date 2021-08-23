#include <iostream>
using namespace std;
 
class Matrix
{
    private:
        int **Matr;
        int N_m,M_m;


        int ** Create1(size_t N, size_t M)
        {
            int **Matr = (int **)malloc(N*sizeof(int *));
            for(int i = 0; i < N; i++) {
                Matr[i] = (int *)malloc(M*sizeof(int));
            }
            N_m=N;
            M_m=M;

            return Matr;
        }
 
    public:
        // constructors and destructor
        Matrix(int n, int m) { Matr = Create1(n, m); }
        ~Matrix()
        {

                for(int i = 0; i < N_m; i++) {
                    free(Matr[i]);
                }
                free(Matr);

        }


	int& Getnum(int i, int j) {
			{
            if (i<N_m && j<M_m)
                return Matr[i][j];
            else
                cout << "Error: 1";
            }
	}

	void Setnum(int i, int j, int N){
			Matr[i][j] = N;
	}

	void Setsize(int n){
        N_m = n;
			int Matr[n][n];
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					Matr[i][j] = 0;
				}
			}
		}

    int Getsize() {
        return N_m;
    }

	void operator+(Matrix& b){

		if (N_m == b.Getsize()){
		    for (int i = 0; i < N_m; i++){
				for (int j = 0; j < M_m; j++){
					Matr[i][j] += b.Getnum(i, j);
				}
		    }
		}
	}

void operator-(Matrix& b){

		if (N_m == b.Getsize()){
		    for (int i = 0; i < N_m; i++){
				for (int j = 0; j < M_m; j++){
					Matr[i][j] -= b.Getnum(i, j);
				}
		    }
		}
	}


	Matrix operator*(Matrix& b){
        Matrix c(N_m,N_m);
		if (N_m == b.Getsize()){

		    for (int i = 0; i < N_m; i++){
				for (int j = 0; j < M_m; j++){
					int sum = 0;
					for (int k = 0; k < N_m; k++){
						sum +=  Matr[i][k] * b.Getnum(i, j);
					}
					c.Setnum(i, j, sum);
				}
		    }

		}
        return c;
	}
 
 

    	void print(){

		for (int i = 0; i < N_m; i++){
			for (int j = 0; j < M_m; j++){
			cout << Matr[i][j]  << " ";
			}
			cout << "\n";
		}

	}
    void scan(){

        for (int i = 0; i < N_m; i++){
            for (int j = 0; j < M_m; j++){
                Matr[i][j] = i ;
            }
        }

    }
};
 
 
int main()
{
    Matrix M(5,5);
    Matrix B(5,5);
    M.scan();
    B.scan();
    Matrix C = (M * B);
    C.print();
 
    return 0;
}

		
		
		
		
		
		
		
		
