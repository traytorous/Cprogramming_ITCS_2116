

int line_count(const char * file_name){
        FILE *file = NULL;
        int line_num;
        char characterz;
        file = fopen(file_name, "r");
        if (file == NULL) || (!file) {
          //checks if pointer is assigned to null or if it even existss
                return 1;
	}
   characterz = getc(file);
	 for (; characterz != EOF; characterz = getc(file)){

   if (characterz == '\n'){
   line_num++;
    }
    fclose(file);
      }
        return line_num;
}
