```c
#ifndef CORE_H
#define CORE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include "spaced_repetition_engine.h"
#include "leitner_system.h"
#include "forgetting_curve_analyzer.h"
#include "flashcard_exporter.h"

// Core data structures and function prototypes
struct Core;

typedef struct Core Core;

Core* core_create(void);
void core_destroy(Core* core);
void core_process_input(Core* core, const char* input);
void core_export(Core* core);

#endif // CORE_H
```