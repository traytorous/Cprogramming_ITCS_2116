#include <stdlib.h>
#include <stdio.h>

void dump_array(char* filename, float array[], int size);
float* load_array(char* filename, int* size);

int main() {
  float myarray[] = {1.2, 5.2, 20.6, 50.1, 69., 30.5};
  dump_array("myar.dat", myarray, 6);
  int ar2_size;
  float *ar2 = load_array("myar.dat", &ar2_size);
  int i;
  for (i = 0; i < ar2_size; i++) {
    printf("%0.2f ", ar2[i]);
  }
  printf("\n");
  free(ar2);
  return 0;
}


void dump_array(char* filename, float array[], int size){

        FILE * dump = NULL;
        dump = fopen(filename,"wb");

        if(dump==NULL){
                exit(1);
        }

        fwrite(&size,sizeof(int),1,dump);

        fwrite(array,sizeof(float),size,dump);

        fflush(dump);

}
float* load_array(char* filename, int* size){
          FILE* load = NULL;

          load = fopen(filename,"rb");

          if(load == NULL){
                  exit(1);
          }
          int free;

          fread(&free, sizeof(int), 1, load);

          *size=free;

          float count;
          float* array = (float*)malloc(sizeof(float) * free);
          int i;
          for(i = 0; i < free; i++)   {
        fread(&count, sizeof(float), 1, load);
        array[i] = count;
     }

     return array;

}
