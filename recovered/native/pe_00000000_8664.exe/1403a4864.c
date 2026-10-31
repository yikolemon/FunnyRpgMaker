/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a4864 */

void FUN_1403a4864(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0xffffff < param_5) {
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
      lVar1 = FUN_14030fcc8((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 8) = *param_2;
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x50) = iVar3;
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
      lVar1 = FUN_14030fcc8((longlong)iVar2 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar2;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 8) = *param_3;
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = iVar2 + 1;
    *(int *)(param_1 + 0x50) = iVar3;
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
      lVar1 = FUN_14030fcc8((longlong)iVar2 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar1;
      *(int *)(param_1 + 0x54) = iVar2;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 8) = *param_4;
    iVar3 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar3;
    FUN_1403a1cb0(param_1,*(undefined8 *)(param_1 + 0x58),iVar3,param_5);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

