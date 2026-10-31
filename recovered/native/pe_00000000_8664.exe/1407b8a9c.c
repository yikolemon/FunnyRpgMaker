/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b8a9c */

void FUN_1407b8a9c(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  
  uVar1 = (ulonglong)unaff_retaddr;
  *(undefined1 *)(uVar1 + 0x1ef) = 1;
  *(undefined1 *)(uVar1 + 0x1f7) = 0;
  *(undefined2 *)(uVar1 + 500) = 0x100;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  return;
}

