#include <stdio.h>
#include <stdlib.h>
#include "core.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>
", argv[0]);
        return EXIT_FAILURE;
    }

    char *input_file = argv[1];
    int result = run_adaptive_spaced_repetition(input_file);
    if (result == -1) {
        fprintf(stderr, "Error processing input file.
");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}