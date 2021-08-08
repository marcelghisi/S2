//
//  my_ls.c
//  my_ls
//
//  Created by Marcel Ghisi on 22/06/21.
//


#include "my_lslib.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    t_flag flags = read_flags(argc,argv);

    if (flags.size_path == 0){
        char cwd[PATH_MAX];
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            printf("Current working dir: %s\n", cwd);
        } else {
            perror("getcwd() error");
            return 1;
        }
        my_ls(flags,cwd);
    } else {

        for (int i = 0; i < flags.size_path; i++){
            if (flags.size_path > 1){
                printf("%c:\n", '0');
                printf("Total %d \n", flags.size_path);
            }
            my_ls(flags,flags.paths[i]);
        }
    }
    return 0;
}
