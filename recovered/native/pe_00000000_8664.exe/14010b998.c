/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010b998 */

void FUN_14010b998(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18) + param_2;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    uVar3 = FUN_140077ab4((longlong)iVar5 << 3);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1401c5180(uVar3,*(longlong *)(param_1 + 0x20),(longlong)*(int *)(param_1 + 0x18) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  if (0 < param_2) {
    iVar5 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x58);
    do {
      uVar7 = ((ulonglong)(0x11 < uVar2 % 0x14) << 0x20) + 0x100000000;
      if (uVar2 % 0x14 < 0xf) {
        uVar7 = 0;
      }
      if (iVar5 == *(int *)(param_1 + 0x1c)) {
        if (iVar5 == 0) {
          iVar1 = 8;
        }
        else {
          iVar1 = iVar5 / 2 + iVar5;
        }
        iVar6 = iVar5 + 1;
        if (iVar5 + 1 < iVar1) {
          iVar6 = iVar1;
        }
        lVar4 = FUN_140077ab4((longlong)iVar6 << 3);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1401c5180(lVar4,*(longlong *)(param_1 + 0x20),(longlong)*(int *)(param_1 + 0x18) << 3)
          ;
          FUN_140077b90(*(undefined8 *)(param_1 + 0x20));
        }
        *(longlong *)(param_1 + 0x20) = lVar4;
        *(int *)(param_1 + 0x1c) = iVar6;
        iVar5 = *(int *)(param_1 + 0x18);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x20);
      }
      *(ulonglong *)(lVar4 + (longlong)iVar5 * 8) = uVar7 | uVar2;
      iVar5 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar5;
      uVar2 = *(int *)(param_1 + 0x58) + 1;
      *(uint *)(param_1 + 0x58) = uVar2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(undefined1 *)(param_1 + 0x5d) = 1;
  return;
}

