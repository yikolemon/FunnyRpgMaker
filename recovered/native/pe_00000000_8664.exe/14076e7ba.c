/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e7ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14076e7ba(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_20 [8];
  
  uVar6 = (ulonglong)_DAT_150b0bf0f;
  uVar3 = FUN_14076e79e();
  uVar4 = (ulonglong)((int)auStack_20 + 4);
  *(undefined8 *)(uVar4 - 8) = uVar3;
  *(undefined8 *)(uVar4 - 0x10) = 0x14076e7d5;
  cVar2 = FUN_14076be03();
  puVar5 = (undefined1 *)(ulonglong)((int)(uVar4 - 8) + 4);
  if (cVar2 != '\0') {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    *(undefined8 *)(puVar5 + -8) = 0x20;
    *(undefined8 *)(puVar5 + -0x10) = 0x14076e7e5;
    cVar2 = FUN_14075a8ea();
    puVar5 = (undefined1 *)(ulonglong)((int)(puVar5 + -8) + 4);
    if (cVar2 != '\0') goto LAB_14076e813;
  }
  iVar1 = *(int *)(puVar5 + 0x14);
  if (*(int *)(uVar6 + 0x207c) == iVar1) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    *(undefined8 *)(puVar5 + -8) = 0x14076e7ff;
    cVar2 = FUN_14075ab14();
    if ((cVar2 != '\0') || (iVar1 == *(int *)((ulonglong)*(uint *)(uVar6 + 0x14cc) + 0xb4)))
    goto LAB_14076e813;
  }
  unaff_RBX = 0;
LAB_14076e813:
  return unaff_RBX & 0xffffffff;
}

