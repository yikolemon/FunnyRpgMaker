/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e02f */

int FUN_14001e02f(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    iVar1 = FUN_14001f677(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          param_1,param_2);
    return iVar1;
  }
  return 6;
}

