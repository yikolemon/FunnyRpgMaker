/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769c26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769c26(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  int unaff_retaddr_00;
  uint local_res8;
  
  uVar2 = (ulonglong)_DAT_150b07381;
  *(uint *)(uVar2 + 0x1ed0) = *(uint *)(uVar2 + 0x1ed0) | 1;
  *(undefined8 *)(uVar2 + 0x1ee4) = *(undefined8 *)(ulonglong)unaff_retaddr;
  uVar1 = *(undefined4 *)(ulonglong)local_res8;
  *(undefined4 *)(uVar2 + 0x1ef0) = ((undefined4 *)(ulonglong)local_res8)[1];
  *(undefined4 *)(uVar2 + 0x1eec) = uVar1;
  *(uint *)(uVar2 + 0x1ed4) = unaff_retaddr_00 + (uint)(unaff_retaddr_00 == 0);
  *(undefined1 *)(uVar2 + 0x1f14) = 1;
  return;
}

