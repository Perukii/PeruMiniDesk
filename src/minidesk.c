
#include <gtk/gtk.h>
#include <stdio.h>

#include "minidesk_namespace.h"
#include "minidesk_host/host.h"

MD::host host;

int main(int _argc, char **_argv){

    gtk_init(&_argc, &_argv);



    gtk_main();
    
}