/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006142d */

int FUN_14006142d(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x58) != 3) {
    *(undefined4 *)(param_1 + 0x58) = 3;
    iVar1 = FUN_1400613c1(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_140061384(param_1,param_2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}

