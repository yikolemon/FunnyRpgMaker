/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783c2f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140783c2f(uint param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 *puVar9;
  int unaff_EBP;
  ulonglong uVar10;
  uint unaff_EDI;
  
  puVar9 = &stack0xffffffffffffffe0;
  uVar10 = (ulonglong)param_1;
  uVar1 = *(uint *)(param_2 + 0x434);
  if (((uVar1 == 0) || ((*(byte *)((ulonglong)uVar1 + 0x11) & 4) == 0)) ||
     (*(short *)(param_2 + 0x10e) <= *(short *)(uVar10 + 0x10e))) {
    uVar4 = (int)param_2 + 0x18;
    if (uVar1 != 0) {
      uVar4 = uVar1 + 0x54;
    }
    iVar2 = *(int *)(ulonglong)uVar4;
    iVar3 = *(int *)(uVar10 + 0x18);
    if (iVar2 != iVar3) {
      if (iVar2 == 0) {
        bVar6 = 1;
        bVar7 = 0;
      }
      else {
        bVar6 = iVar3 == 0 & *(byte *)((longlong)(ulonglong)uVar4 + 0x1d);
        bVar7 = bVar6;
      }
      if ((iVar3 != 0) && (*(char *)(uVar10 + 0x35) == '\x01')) {
        bVar7 = bVar6;
      }
      if (bVar7 == 0) goto LAB_140783cd2;
    }
    *(char *)(ulonglong)_DAT_1fbcb88b1039d74c =
         *(char *)(ulonglong)_DAT_1fbcb88b1039d74c + (char)_DAT_1fbcb88b1039d74c;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (0 < (int)unaff_EDI) {
      do {
        if (*(uint *)(ulonglong)(unaff_EBP - 0x24) != 0) {
          *(ulonglong *)(puVar9 + -8) = (ulonglong)*(uint *)(ulonglong)(unaff_EBP - 0x24);
          *(ulonglong *)(puVar9 + -0x10) = uVar10;
          *(undefined8 *)(puVar9 + -0x18) = 0x140783cc0;
          cVar5 = FUN_14075a8c7();
          puVar9 = (undefined1 *)(ulonglong)((int)(puVar9 + -0x10) + 8);
          if (cVar5 != '\0') goto LAB_140783cd2;
        }
      } while (1 < unaff_EDI);
    }
  }
  else {
LAB_140783cd2:
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}

