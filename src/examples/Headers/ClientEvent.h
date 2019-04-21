#ifndef CLIENTEVENT_H
#define CLIENTEVENT_H

// Generic Includes
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>

// SimConnect
#include "SimConnect.h"

// DATA TYPES
static enum CE_GROUP_ID {
    GROUP0,
};

static enum CE_EVENT_ID {
    EVENT_BRAKES,
 };

// Prototypes
void testClientEvents();

#endif