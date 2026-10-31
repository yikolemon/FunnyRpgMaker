/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc7b8 */

void FUN_1400cc7b8(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 == -1) {
    iVar8 = *(int *)(DAT_140f2a910 + 4) + -1;
  }
  cVar1 = *(char *)(param_3 + 0x114);
  uVar2 = *(undefined4 *)(param_3 + 200);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0xc)) {
    if (iVar3 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar3 / 2 + iVar3;
    }
    iVar9 = iVar3 + 1;
    if (iVar3 + 1 < iVar6) {
      iVar9 = iVar6;
    }
    lVar4 = FUN_140077ab4((longlong)iVar9 * 0x38);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1401c5180(lVar4,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) * 0x38);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x10));
    }
    *(longlong *)(param_1 + 0x10) = lVar4;
    *(int *)(param_1 + 0xc) = iVar9;
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  uVar7 = param_2 | 0x100000;
  if (cVar1 != '\0') {
    uVar7 = param_2;
  }
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined4 *)(lVar4 + lVar5) = uVar2;
  *(uint *)(lVar4 + 4 + lVar5) = uVar7;
  *(longlong *)(lVar4 + 8 + lVar5) = param_3;
  *(int *)(lVar4 + 0x10 + lVar5) = iVar8;
  *(undefined4 *)(lVar4 + 0x14 + lVar5) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar5) = 0xbf80000000000000;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x30 + lVar5) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

