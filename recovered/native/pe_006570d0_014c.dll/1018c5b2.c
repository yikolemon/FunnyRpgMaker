/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018c5b2 */

void __thiscall
FUN_1018c5b2(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0xffffff < param_5) {
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
    FUN_1018aa8e(param_3,param_4,param_7);
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_5,param_6,0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

