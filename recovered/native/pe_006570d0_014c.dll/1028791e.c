/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028791e */

undefined4 FUN_1028791e(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar5;
  uint uVar4;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = (int)param_1 >> 6;
  iVar6 = (param_1 & 0x3f) * 0x38;
  iVar3 = (&DAT_103a5230)[iVar7];
  uVar8 = 0x10000;
  bVar1 = *(byte *)(iVar3 + 0x28 + iVar6);
  bVar2 = *(byte *)(iVar3 + 0x29 + iVar6);
  uVar4 = (uint)CONCAT11(bVar2,bVar1);
  if (param_2 == 0x4000) {
    uVar4 = CONCAT11(bVar2,bVar1) | 0x80;
    *(char *)(iVar3 + 0x28 + iVar6) = (char)uVar4;
    *(undefined1 *)((&DAT_103a5230)[iVar7] + 0x29 + iVar6) = 0;
  }
  else if (param_2 == 0x8000) {
    uVar4 = CONCAT11(bVar2,bVar1) & 0xffffff7f;
    *(char *)(iVar3 + 0x28 + iVar6) = (char)uVar4;
  }
  else {
    if ((param_2 == 0x10000) || (param_2 == 0x20000)) {
      *(byte *)(iVar3 + 0x28 + iVar6) = bVar1 | 0x80;
      *(undefined1 *)((&DAT_103a5230)[iVar7] + 0x29 + iVar6) = 2;
    }
    else {
      if (param_2 != 0x40000) goto LAB_102879c5;
      *(byte *)(iVar3 + 0x28 + iVar6) = bVar1 | 0x80;
      *(undefined1 *)((&DAT_103a5230)[iVar7] + 0x29 + iVar6) = 1;
    }
    uVar4 = (uint)bVar2 << 8;
  }
LAB_102879c5:
  if ((bVar1 & 0x80) == 0) {
    uVar8 = 0x8000;
  }
  else {
    cVar5 = (char)(uVar4 >> 8);
    if (cVar5 == '\0') {
      uVar8 = 0x4000;
    }
    else if (cVar5 == '\x01') {
      uVar8 = 0x40000;
    }
  }
  return uVar8;
}

