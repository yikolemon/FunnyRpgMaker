/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003812d */

int FUN_14003812d(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = param_3;
  lVar1 = *(longlong *)(param_3 + 0xb8);
  param_1[1] = lVar1;
  iVar2 = 0;
  if (lVar1 == 0) {
    iVar2 = FUN_1400384ff(param_3,param_1 + 1,param_2);
    if (iVar2 == 0) {
      *(longlong *)(param_3 + 0xb8) = param_1[1];
      *(code **)(param_3 + 0xc0) = FUN_140038628;
      iVar2 = 0;
    }
  }
  return iVar2;
}

