/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10189c26 */

void __thiscall FUN_10189c26(int param_1,undefined8 *param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_102b70e0 <= param_3) {
    FUN_101896ac(param_2,param_3,param_4 << 2,param_5 << 2,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(param_1 + 0x3c)) {
      if (iVar1 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar1 / 2 + iVar1;
      }
      iVar3 = iVar1 + 1;
      if (iVar1 + 1 < iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = FUN_100fa1fa(iVar3 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar2;
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar1 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(undefined8 *)(iVar2 + iVar1 * 8) = *param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

