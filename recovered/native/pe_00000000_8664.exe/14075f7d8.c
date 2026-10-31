/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075f7d8 */

/* WARNING: Instruction at (ram,0x00014075f82a) overlaps instruction at (ram,0x00014075f829)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075f7d8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  int iVar6;
  
  uVar3 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar4 = (ulonglong)uVar3;
  uVar5 = (ulonglong)_DAT_150afcf32;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(uVar5 + 0x1490);
  }
  else {
    bVar1 = *(byte *)(uVar4 + 0xf);
    while ((bVar1 & 1) != 0) {
      uVar4 = (ulonglong)*(uint *)(uVar4 + 0x3a0);
      bVar1 = *(byte *)(uVar4 + 0xf);
    }
    uVar3 = FUN_14076ef83();
  }
  if (-1 < (int)uVar3) {
    do {
      iVar6 = (int)((ulonglong)unaff_RBP >> 0x20);
      uVar5 = (ulonglong)*(uint *)(uVar5 + 0x1498);
      uVar2 = *(uint *)((uVar5 - 4) + (ulonglong)uVar3 * 4);
      uVar4 = (ulonglong)uVar2;
      if ((((uVar2 != (uint)unaff_RBP) && (*(char *)(uVar4 + 0xfa) == '\x01')) &&
          ((iVar6 == 0 || (*(int *)(uVar4 + 0x3c) == iVar6)))) &&
         ((~*(uint *)(uVar4 + 0xc) & 0x10200) != 0)) break;
    } while ((ulonglong)uVar3 != 0);
  }
  FUN_14075b3b2();
  return;
}

