/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ddd04 */

void FUN_1400ddd04(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (0xffffff < param_4) {
    fVar5 = (float)*param_2 + (float)DAT_1401c8640;
    fVar6 = (float)((ulonglong)*param_2 >> 0x20) + DAT_1401c8640._4_4_;
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == *(int *)(param_1 + 0x54)) {
      if (iVar3 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar3 / 2 + iVar3;
      }
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      lVar1 = FUN_140077ab4((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar1 + (longlong)iVar3 * 8) = CONCAT44(fVar6,fVar5);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x50) = iVar3;
    fVar5 = (float)*param_3 + (float)DAT_1401c8640;
    fVar6 = (float)((ulonglong)*param_3 >> 0x20) + DAT_1401c8640._4_4_;
    if (iVar3 == *(int *)(param_1 + 0x54)) {
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
      lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar2;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar1 + (longlong)iVar3 * 8) = CONCAT44(fVar6,fVar5);
    iVar3 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_1400db1c8(param_1,*(undefined8 *)(param_1 + 0x58),iVar3,param_4,param_5,0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

