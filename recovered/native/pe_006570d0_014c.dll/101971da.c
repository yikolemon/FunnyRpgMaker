/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101971da */

int __fastcall FUN_101971da(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_101c196f(*param_1,param_2);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_101c11b9(*param_1,iVar1,param_1[2]);
    if (iVar1 == 0) {
      uVar2 = param_1[1];
      iVar3 = *(int *)(*param_1 + 0x54);
      if ((uVar2 & 0x20) != 0) {
        FUN_101c7040(iVar3);
        uVar2 = param_1[1];
      }
      if ((uVar2 & 0x40) != 0) {
        FUN_101c6fc0(iVar3);
      }
      iVar3 = iVar3 + 0x18;
    }
  }
  return iVar3;
}

