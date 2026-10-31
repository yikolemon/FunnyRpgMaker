/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b2b0 */

void FUN_14003b2b0(longlong param_1,int *param_2)

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

