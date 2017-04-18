#include<stdio.h>
#include<math.h>
#include<stdlib.h>

class Poly
{
private:
    unsigned int length;
    float* coef = new float[100];
public:

    Poly(unsigned int length, float coef[]){
        this->length = length;
        for (int i = 0; i <= length; i++){
            this->coef[i] = coef[i];
        }
    }

    Poly operator +(Poly another){
        if (this->length > another.length){
            float* resultCoef = new float[length];
            for (int i = 0; i <= length; i++){
                resultCoef[i] = 0;
            }
            int i = 0;
            while (i != another.length + 1){
                resultCoef[i] += coef[i] + another.coef[i];
                i++;
            }
            while (i != length + 1){
                resultCoef[i] += coef[i];
                i++;
            }
            Poly result = Poly(length, resultCoef);

            return result;
        }
        else{
            float* resultCoef = new float[another.length];
            for (int i = 0; i <= another.length; i++){
                resultCoef[i] = 0;
            }

            int i = 0;
            while (i != length + 1)
            {
                resultCoef[i] += coef[i] + another.coef[i];
                i++;
            }

            while (i != another.length + 1){
                resultCoef[i] += another.coef[i];
                i++;
            }

            Poly result = Poly(another.length, resultCoef);

            return result;
        }
    }

    Poly operator -(Poly another)
    {
        if (this->length > another.length){
            float* resultCoef = new float[length];
            for (int i = 0; i <= length; i++){
                resultCoef[i] = 0;
            }
            int i = 0;
            while (i != another.length + 1){
                resultCoef[i] += coef[i] - another.coef[i];
                i++;
            }
            while (i != length + 1){
                resultCoef[i] += coef[i];
                i++;
            }
            Poly result = Poly(length, resultCoef);
            return result;
        }
        else{
            float* resultCoef = new float[another.length];
            for (int i = 0; i <= another.length; i++){
                resultCoef[i] = 0;
            }
            int i = 0;
            while (i != length + 1){
                resultCoef[i] += coef[i] - another.coef[i];
                i++;
            }
            while (i != another.length + 1){
                resultCoef[i] += -another.coef[i];
                i++;
            }
            Poly result = Poly(another.length, resultCoef);
            return result;
        }
    }

    Poly operator *(Poly another)
    {
        float* resultCoef = new float[this->length + another.length];
        for (int i = 0; i <= this->length + another.length; i++){
            resultCoef[i] = 0;
        }
        for (int i = 0; i <= length; i++){
            for (int j = 0; j <= another.length; j++){
                resultCoef[i + j] += coef[i] * another.coef[j];
            }
        }
        Poly result = Poly(length + another.length, resultCoef);
        return result;
    }

    float operator ()(float number){
        float result = 0;
        for (int i = 0; i <= length; i++){
            result += pow(number, i) * coef[i];
        }
        return result;
    }

    float operator[](unsigned int position){
        return coef[position];
    }

    int getLength(){
        return length;
    }

    void print(){
        if (length == 0)
            printf("%.1f", coef[0]);
        else{
            printf("%.1f", coef[0]);
            for (unsigned int i = 1; i <= length; i++){
                if (i == 1){
                    if (coef[i] < 0){
                        printf(" - %.1f * x", fabs(coef[i]));
                    }
                    else{
                        if (coef[i] > 0){
                            printf(" + %.1f * x", coef[i]);
                        }
                    }
                }
                else{
                    if (coef[i] < 0){
                        printf(" - %.1f * x^%d", fabs(coef[i]), i);
                    }
                    else{
                        if (coef[i] > 0){
                            printf(" + %.1f * x^%d", coef[i], i);
                        }
                    }
                }
            }
        }

        printf("\n");
    }
};

int main() {

	unsigned int lengthForP1, lengthForP2, lengthForP3;
	float coefsForP1[100], coefsForP2[100], coefsForP3[100];

	printf("Input the bigest power of the first polynom.\n");
	scanf("%d",&lengthForP1);

	printf("The coefficients of the first polynom.\n");
	for (int i = 0; i <= lengthForP1; i++) {
		scanf("%f", &coefsForP1[i]);
	}

	printf("Input the bigest power of the second polynom\n");
	scanf("%d", &lengthForP2);

	printf("The coefficients of the second polynom.\n");
	for (int i = 0; i <= lengthForP2; i++) {
		scanf("%f", &coefsForP2[i]);
	}

	printf("Input the bigest power of the third polynom\n");
	scanf("%d", &lengthForP3);

	printf("The coefficients of the first polynom.\n");
	for (int i = 0; i <= lengthForP3; i++) {
		scanf("%f", &coefsForP3[i]);
	}

	Poly P1 = Poly(lengthForP1, coefsForP1);
	Poly P2 = Poly(lengthForP2, coefsForP2);
	Poly P3 = Poly(lengthForP3, coefsForP3);

	P1.print();
	P2.print();
	P3.print();

	printf("Input the x.\n");

	float x;

	scanf("%f", &x);

	float v1 = P1(x) * P1(x) - P2(x) * P3(x);
	Poly v2 = P1 * P1 - P2 * P3;


	printf("v1(x) = %f \nv2(x) = %f\n", v1, v2(x));

	v2.print();

	system("PAUSE");
}
