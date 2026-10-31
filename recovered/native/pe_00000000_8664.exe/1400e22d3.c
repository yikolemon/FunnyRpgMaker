/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e22d3 */

void FUN_1400e22d3(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      if (*(int *)(lVar3 + 0x24) < 0) {
        uVar5 = FUN_140077ab4(0);
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_1401c5180(uVar5,*(longlong *)(lVar3 + 0x28),(longlong)*(int *)(lVar3 + 0x20) << 3);
          FUN_140077b90();
        }
        *(undefined8 *)(lVar3 + 0x28) = uVar5;
        *(undefined4 *)(lVar3 + 0x24) = 0;
      }
      *(undefined4 *)(lVar3 + 0x20) = 0;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x80 + lVar9);
      iVar8 = *(int *)(lVar3 + 0x20);
      if (iVar8 == *(int *)(lVar3 + 0x24)) {
        if (iVar8 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar8 / 2 + iVar8;
        }
        iVar7 = iVar8 + 1;
        if (iVar8 + 1 < iVar4) {
          iVar7 = iVar4;
        }
        lVar6 = FUN_140077ab4((longlong)iVar7 << 3);
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_1401c5180(lVar6,*(longlong *)(lVar3 + 0x28),(longlong)*(int *)(lVar3 + 0x20) << 3);
          FUN_140077b90(*(undefined8 *)(lVar3 + 0x28));
        }
        *(longlong *)(lVar3 + 0x28) = lVar6;
        *(int *)(lVar3 + 0x24) = iVar7;
        iVar8 = *(int *)(lVar3 + 0x20);
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x28);
      }
      *(longlong *)(lVar6 + (longlong)iVar8 * 8) = lVar2 + lVar9;
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
      lVar9 = lVar9 + 0xa0;
    } while ((longlong)iVar1 * 0xa0 != lVar9);
  }
  return;
}

