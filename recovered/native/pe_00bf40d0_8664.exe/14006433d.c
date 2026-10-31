/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006433d */

int FUN_14006433d(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    iVar1 = FUN_1400643ba(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_14006437d(param_1,param_2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}

