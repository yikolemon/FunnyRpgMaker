/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078840e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078840e(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = (uint)(unaff_RBP >> 0x20);
  iVar9 = (int)((ulonglong)unaff_RBX >> 0x20);
  uVar4 = (ulonglong)_DAT_150b25b70;
  uVar7 = (ulonglong)*(uint *)(uVar4 + 0x2414);
  bVar5 = *(byte *)(unaff_RBP & 0xffffffff);
  if (*(char *)(uVar7 + 0x4e) != '\x01') goto LAB_1407884be;
  bVar2 = *(char *)(uVar7 + 0x4c) == '\x01';
  if (*(char *)(uVar7 + 0x4c) == -1) {
    bVar2 = bVar5;
  }
  bVar5 = bVar2;
  if (*(char *)(uVar7 + 0x4f) == '\x01') {
    uVar6 = (ulonglong)*(uint *)(uVar7 + 0x28);
    iVar3 = *(int *)(uVar4 + 0x1e58);
    iVar1 = *(int *)(uVar4 + 0x1e5c);
    if ((*(char *)(uVar7 + 0x52) == '\0') && (*(int *)(uVar4 + 0x2204) == iVar9)) {
      *(undefined1 *)(uVar7 + 0x52) = 1;
      if ((*(uint *)(uVar6 + 0x18) & *(uint *)(uVar6 + 0x1c)) == 0xffffffff) {
        *(int *)(uVar6 + 0x18) = iVar3;
        *(int *)(uVar6 + 0x1c) = iVar1;
        *(byte *)(uVar6 + 0x10) = bVar2;
      }
    }
    else if ((iVar1 != *(int *)(uVar6 + 0x1c) || iVar3 != *(int *)(uVar6 + 0x18)) &&
            (*(char *)(uVar7 + 0x51) == *(char *)(uVar7 + 0x52))) {
      if ((*(byte *)(uVar7 + 0x49) & 0x10) == 0) {
        bVar5 = bVar2 & *(byte *)(uVar7 + 0x30) >> 4;
      }
      goto LAB_1407884b8;
    }
    bVar5 = *(char *)(uVar6 + 0x10) != '\0';
  }
LAB_1407884b8:
  *(byte *)(unaff_RBP & 0xffffffff) = bVar5;
LAB_1407884be:
  if (uVar10 != 0) {
    uVar8 = *(uint *)(ulonglong)uVar10 & 0xfff7ffcf;
    if ((*(uint *)(uVar7 + 0x30) >> 0xe & 1) == 0) {
      if ((short)*(uint *)(uVar7 + 0x30) < 0) {
        uVar8 = uVar8 | 0x80020;
      }
      else {
        iVar3 = 0x10;
        if ((bVar5 != 0) && (iVar3 = 0x20, *(int *)(uVar4 + 0x1528) == iVar9)) {
          iVar3 = (*(byte *)(uVar4 + 0x1537) ^ 1) * 0x10 + 0x10;
        }
        uVar8 = uVar8 + iVar3 + 0x80000;
      }
    }
    else {
      uVar8 = uVar8 | 0x80010;
    }
    *(uint *)(ulonglong)uVar10 = uVar8;
  }
  return;
}

