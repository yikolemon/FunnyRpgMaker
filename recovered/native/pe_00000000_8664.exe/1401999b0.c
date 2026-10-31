/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401999b0 */

char FUN_1401999b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_140199a12:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_140199a0a;
    }
LAB_1401999d0:
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
          goto LAB_1401999eb;
        }
        goto LAB_140199a3a;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_1401999eb:
      if (iVar2 == 0) goto LAB_140199a3a;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_1401999d0;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_140199a12;
LAB_140199a0a:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_1401999d0;
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
LAB_140199a3a:
    cVar1 = '\x04';
  }
  return cVar1;
}

