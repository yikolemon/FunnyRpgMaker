/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007efae */

void FUN_14007efae(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  lVar1 = DAT_140f2a910;
  iVar2 = *(int *)(DAT_140f2a910 + 0x2988);
  if (iVar2 == *(int *)(DAT_140f2a910 + 0x298c)) {
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    iVar6 = iVar2 + 1;
    if (iVar2 + 1 < iVar4) {
      iVar6 = iVar4;
    }
    lVar3 = FUN_140077ab4((longlong)iVar6 * 0x48);
    if (*(longlong *)(lVar1 + 0x2990) != 0) {
      FUN_1401c5180(lVar3,*(longlong *)(lVar1 + 0x2990),(longlong)*(int *)(lVar1 + 0x2988) * 0x48);
      FUN_140077b90(*(undefined8 *)(lVar1 + 0x2990));
    }
    *(longlong *)(lVar1 + 0x2990) = lVar3;
    *(int *)(lVar1 + 0x298c) = iVar6;
    iVar2 = *(int *)(lVar1 + 0x2988);
  }
  else {
    lVar3 = *(longlong *)(DAT_140f2a910 + 0x2990);
  }
  puVar7 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x48);
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + 1;
    puVar7 = puVar7 + 1;
  }
  *(int *)(lVar1 + 0x2988) = *(int *)(lVar1 + 0x2988) + 1;
  return;
}

