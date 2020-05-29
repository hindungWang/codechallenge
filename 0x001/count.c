#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dirent.h>

long long EP = 0;
long long count(char *path) {
    DIR *dir_ptr = NULL;
    struct dirent *dirp;
    char *nextpath;
    if (!path) return 0;
    if( (dir_ptr = opendir(path)) == NULL ) return 0;

    long long c = 0;
    while((dirp = readdir(dir_ptr)))
    {
        if (strcmp(dirp->d_name, ".") == 0 || strcmp(dirp->d_name, "..") == 0) continue;
        if (dirp->d_type == DT_DIR) 
        {
            nextpath = (char *)malloc(strlen(path) + strlen(dirp->d_name) + 2);
            sprintf(nextpath,"%s/%s", path, dirp->d_name);
            long long cx = count(nextpath);
            if (cx == 0) EP++;
            c += cx;
            free(nextpath);
        } else {
            ++c;
        }
    }
    closedir(dir_ptr);
    return c;
}
int main(int argc, char *argv[])
{
    if (argc <= 1) 
    {
        printf("Bad Input! \n");
        return 0;
    }
    clock_t start, end;
    start = clock();
    long long res = count(argv[1]);
    end = clock();
    printf("ALL Files : %ld\n", res);
    printf("ALL Empty Dir: %ld\n", EP);
    printf("totile time= %f ms\n" , (float)(end-start)*1000/CLOCKS_PER_SEC );
}
