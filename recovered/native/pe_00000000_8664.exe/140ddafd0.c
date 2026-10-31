/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140ddafd0 */

/* WARNING: Instruction at (ram,0x000140ddafee) overlaps instruction at (ram,0x000140ddafe7)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ddafd0(void)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  uint uVar2;
  undefined4 unaff_EBP;
  ulonglong uVar4;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_FS_OFFSET;
  undefined8 uStack_10;
  int local_4;
  ulonglong uVar3;
  
  uStack_10 = *(undefined8 *)(in_FS_OFFSET + 0x140ddafd8);
  local_4 = (int)((ulonglong)in_RAX >> 0x20);
  uVar2 = (int)&uStack_10 - local_4;
  uVar3 = (ulonglong)uVar2;
  *(undefined8 *)(uVar3 - 8) = unaff_RBX;
  *(undefined8 *)(uVar3 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar3 - 0x18) = unaff_RDI;
  *(undefined4 *)((ulonglong)&local_4 & 0xffffffff) = unaff_EBP;
  uVar4 = (ulonglong)&local_4 & 0xffffffff;
  if (uVar2 != 0) {
    *(ulonglong *)(uVar3 - 0x20) = (ulonglong)_DAT_ff50c5330050e8c0;
    *(undefined8 *)(uVar3 - 0x28) = *(undefined8 *)(uVar4 - 4);
  }
  *(undefined4 *)(uVar4 - 4) = 0xffffffff;
  *(int *)(in_FS_OFFSET + -0x3333333d00000000) = (int)&local_4 + -0xc;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

