/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018b5da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1018b5da(int param_1,float param_2,float param_3,float param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0xffffff < param_5) {
    param_2 = param_2 + (float)DAT_102b89c0;
    param_3 = param_3 + DAT_102b89c0._4_4_;
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x3c)) {
      if (iVar3 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar3 / 2 + iVar3;
      }
      iVar1 = iVar3 + 1;
      if (iVar3 + 1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_100fa1fa(iVar1 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar2;
      *(int *)(param_1 + 0x3c) = iVar1;
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(ulonglong *)(iVar2 + iVar3 * 8) = CONCAT44(param_3,param_2);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    param_4 = param_4 + DAT_102b70e0;
    if (iVar3 == *(int *)(param_1 + 0x3c)) {
      iVar2 = iVar2 + 2;
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      iVar1 = FUN_100fa1fa(iVar2 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar1,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar1;
      *(int *)(param_1 + 0x3c) = iVar2;
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    *(float *)(iVar1 + iVar3 * 8) = param_2;
    *(float *)(iVar1 + 4 + iVar3 * 8) = param_4;
    iVar3 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),iVar3,param_5,param_6,0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

