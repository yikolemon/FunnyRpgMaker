/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011828d */

int FUN_18011828d(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2 - param_1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  iVar1 = FUN_1800fed39(param_1,lVar2);
  if (*(int *)(DAT_180419160 + 0x1660) == iVar1) {
    FUN_180117b67(iVar1,0xb,param_1,param_2);
  }
  return iVar1;
}

