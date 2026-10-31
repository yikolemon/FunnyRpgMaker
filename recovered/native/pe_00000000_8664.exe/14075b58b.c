/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b58b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b58b(void)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar5 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)(unaff_RBX >> 0x20)) ^ 1;
  uVar6 = unaff_RBX & 0xffffffff;
  uVar8 = (ulonglong)_DAT_150af8cef;
  if (((((int)unaff_RBX != 0 && (char)uVar5 == '\0') &&
       (uVar5 = (ulonglong)*(uint *)(uVar6 + 0x7c), *(uint *)(uVar6 + 0x7c) != 0)) &&
      ((*(byte *)(uVar5 + 0xc) & 4) == 0)) && (uVar1 = uVar6, (*(byte *)(uVar6 + 0x10) & 0x80) == 0)
     ) {
    do {
      uVar5 = uVar1;
      uVar1 = (ulonglong)*(uint *)(uVar5 + 0x18);
    } while (*(uint *)(uVar5 + 0x18) != 0);
    if ((*(int *)(uVar5 + 0x84) != (int)unaff_RBX) || (*(int *)(uVar5 + 0x80) != 0)) {
      uStack_28 = 0xffffffffbf800000;
      uStack_30 = 0;
      local_20 = in_RAX;
      cVar2 = FUN_14075b65f();
      puVar7 = (undefined4 *)(ulonglong)((int)&uStack_30 + 8);
      if (cVar2 != '\0') {
        *(ulonglong *)(puVar7 + -2) = uVar6;
        *(ulonglong *)(puVar7 + -4) = uVar8;
        *(undefined8 *)(puVar7 + -6) = 0x14075b5f5;
        FUN_14075b67a();
        return;
      }
      bVar3 = 0;
      *puVar7 = 0;
      goto LAB_14075b610;
    }
  }
  local_20 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)CONCAT71((int7)(uVar5 >> 8),1));
  uStack_28 = 0xffffffffbf800000;
  uStack_30 = 0;
  bVar3 = FUN_14075b65f();
  puVar7 = (undefined4 *)(ulonglong)((int)&uStack_30 + 8);
LAB_14075b610:
  *(undefined8 *)((longlong)puVar7 + -8) = 0;
  *(undefined8 *)((longlong)puVar7 + -0x10) = 0;
  *(undefined8 *)((longlong)puVar7 + -0x18) = 0x14075b619;
  bVar4 = FUN_14075b64a();
  if ((((bVar4 | bVar3) & *(byte *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x10) + 8))
       == 1) && (*(int *)(uVar8 + 0x14dc) != (int)((ulonglong)unaff_RDI >> 0x20))) {
    FUN_14075b315();
    return;
  }
  return;
}

