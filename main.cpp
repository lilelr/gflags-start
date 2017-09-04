#include <iostream>
#include <gflags/gflags.h>
#include <tiff.h>

DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german",
              "comma-separated list of languages to offer in the 'lang' menu");

static bool ValidatePort(const char *flagname, int32 value) {
    if (value > 0 && value < 32768) {
        return true;
    }
    printf("Invalid value for -- %s %d\n", flagname, (int) value);
    return false;
}

DEFINE_int32(port, 8, "What port to listen on");
DEFINE_validator(port, &ValidatePort);


int main(int argc, char *argv[]) {
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    if (FLAGS_big_menu) {
        std::cout << FLAGS_languages << std::endl;
    }
    if(FLAGS_port){
        std::cout<<"port"<<FLAGS_port<<std::endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}