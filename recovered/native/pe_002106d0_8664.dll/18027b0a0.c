/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027b0a0 */

char FUN_18027b0a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_18027b102:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_18027b0fa;
    }
LAB_18027b0c0:
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return '\x01';
          }
          if (iVar2 == 2) {
            return '\x02';
          }
          iVar2 = iVar2 + -3;
          goto LAB_18027b0db;
        }
        goto LAB_18027b12a;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_18027b0db:
      if (iVar2 == 0) goto LAB_18027b12a;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_18027b0c0;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_18027b102;
LAB_18027b0fa:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_18027b0c0;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        return '\b';
      }
      if (iVar2 == 8) {
        return '\b';
      }
      return '\0';
    }
LAB_18027b12a:
    cVar1 = '\x04';
  }
  return cVar1;
}

