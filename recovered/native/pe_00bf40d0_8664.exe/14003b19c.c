/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b19c */

void FUN_14003b19c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    uVar1 = FUN_14004616f(param_1);
    if ((char)uVar1 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x1f0) == 'Y') {
      iVar2 = iVar2 + -1;
    }
    else if (*(char *)(param_1 + 0x1f0) == 'X') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return;
}

