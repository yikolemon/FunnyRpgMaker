/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018bc68 */

void __thiscall
FUN_1018bc68(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0xffffff < param_5) {
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
    *(undefined8 *)(iVar2 + iVar3 * 8) = *param_2;
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x38) = iVar3;
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
    *(undefined8 *)(iVar1 + iVar3 * 8) = *param_3;
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x38) = iVar3;
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
    *(undefined8 *)(iVar1 + iVar3 * 8) = *param_4;
    iVar3 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),iVar3,param_5,param_6,0x200);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

