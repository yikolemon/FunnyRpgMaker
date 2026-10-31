/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053d1d */

void FUN_140053d1d(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140053d4e(param_1,param_2,(uint *)0x0,(uint *)0x0,(uint *)0x0);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = param_2;
  }
  *param_3 = iVar2;
  return;
}

