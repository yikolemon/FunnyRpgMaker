/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031821e */

int FUN_14031821e(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_3 - param_2;
  if (param_3 == 0) {
    lVar2 = 0;
  }
  iVar1 = FUN_140310209(param_2,lVar2,
                        *(undefined4 *)(param_1[0x2a] + -4 + (longlong)(int)param_1[0x29] * 4));
  if (*(int *)(*param_1 + 0x1660) == iVar1) {
    FUN_140329037(iVar1,0xb,param_2,param_3);
  }
  return iVar1;
}

