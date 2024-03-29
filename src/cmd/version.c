#include "../headers/cmd/version.h"
#include <stdio.h>

const char* getWhaleCVersion(void) {
  static char versionString[30];

  sprintf(versionString, "WhaleC version: %d.%d.%d", 
            WHALEC_MAJOR_VERSION, WHALEC_MINOR_VERSION, WHALEC_PATCH_VERSION);

  return versionString;
}
