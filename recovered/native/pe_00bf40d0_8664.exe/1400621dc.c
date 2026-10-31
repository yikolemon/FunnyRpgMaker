/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400621dc */

int FUN_1400621dc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    iVar1 = FUN_14006217c(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_14006213f(param_1,param_2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}

