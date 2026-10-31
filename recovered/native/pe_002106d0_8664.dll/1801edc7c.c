/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edc7c */

void FUN_1801edc7c(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((longlong)iVar1 < 1) || (*(int *)(param_1 + 0x38) < iVar1)) {
    iVar1 = 0;
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
      iVar1 = 0;
    }
  }
  else {
    iVar1 = param_2[-(longlong)iVar1];
  }
  *param_2 = iVar1;
  return;
}

