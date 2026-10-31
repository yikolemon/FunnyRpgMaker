/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8464 */

undefined1 FUN_100f8464(char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x0f') {
    if (param_1[1] == '\x1f') {
      if (param_1[2] == '\0') {
        return 3;
      }
      if ((param_1[2] == '@') && (param_1[3] == '\0')) {
        return 4;
      }
      if (((param_1[2] == 'D') && (param_1[3] == '\0')) && (param_1[4] == '\0')) {
        return 5;
      }
      if (((SBORROW1('\0',param_1[2])) && (param_1[3] == '\0')) &&
         ((param_1[4] == '\0' && ((param_1[5] == '\0' && (param_1[6] == '\0')))))) {
        return 7;
      }
      if (((((param_1[2] == -0x7c) && (param_1[3] == '\0')) && (param_1[4] == '\0')) &&
          ((param_1[5] == '\0' && (param_1[6] == '\0')))) && (param_1[7] == '\0')) {
        return 8;
      }
    }
  }
  else {
    if (cVar1 == -0x70) {
      return true;
    }
    if (cVar1 == 'f') {
      cVar2 = param_1[1];
      if (cVar2 == '\x0f') {
        if (((param_1[2] == '\x1f') && (param_1[3] == 'D')) &&
           ((param_1[4] == '\0' && (param_1[5] == '\0')))) {
          return 6;
        }
        if ((((param_1[2] == '\x1f') && (param_1[3] == -0x7c)) && (param_1[4] == '\0')) &&
           (((param_1[5] == '\0' && (param_1[6] == '\0')) &&
            ((param_1[7] == '\0' && (param_1[8] == '\0')))))) {
          return 9;
        }
      }
      else if (cVar2 == 'f') {
        if (((param_1[2] == '\x0f') && (param_1[3] == '\x1f')) &&
           (((param_1[4] == -0x7c &&
             (((param_1[5] == '\0' && (param_1[6] == '\0')) && (param_1[7] == '\0')))) &&
            ((param_1[8] == '\0' && (param_1[9] == '\0')))))) {
          return 10;
        }
        if ((((param_1[2] == 'f') && (param_1[3] == '\x0f')) &&
            ((param_1[4] == '\x1f' &&
             ((((param_1[5] == -0x7c && (param_1[6] == '\0')) && (param_1[7] == '\0')) &&
              ((param_1[8] == '\0' && (param_1[9] == '\0')))))))) && (param_1[10] == '\0')) {
          return 0xb;
        }
      }
      else if (cVar2 == -0x70) {
        return 2;
      }
    }
  }
  return cVar1 == -0x34;
}

