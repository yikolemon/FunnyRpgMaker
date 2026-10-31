/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018b2de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1018b2de(int param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (0xffffff < param_4) {
    fVar4 = (float)*param_2 + (float)DAT_102b89c0;
    fVar5 = (float)((ulonglong)*param_2 >> 0x20) + DAT_102b89c0._4_4_;
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
      iVar2 = FUN_100fa1fa(iVar1 * 8,fVar4,fVar5,_UNK_102b89c8 + 0.0,_UNK_102b89cc + 0.0);
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
    *(ulonglong *)(iVar2 + iVar3 * 8) = CONCAT44(fVar5,fVar4);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    fVar4 = (float)*param_3 + (float)DAT_102b89c0;
    fVar5 = (float)((ulonglong)*param_3 >> 0x20) + DAT_102b89c0._4_4_;
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
      iVar1 = FUN_100fa1fa(iVar2 * 8,fVar4,fVar5,_UNK_102b89c8 + 0.0,_UNK_102b89cc + 0.0);
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
    *(ulonglong *)(iVar1 + iVar3 * 8) = CONCAT44(fVar5,fVar4);
    iVar3 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),iVar3,param_4,param_5,0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

