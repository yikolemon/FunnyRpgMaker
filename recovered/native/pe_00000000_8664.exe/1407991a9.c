/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407991a9 */

void FUN_1407991a9(void)

{
  undefined4 uVar1;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  uVar1 = *(undefined4 *)(ulonglong)unaff_retaddr;
  *(undefined4 *)(ulonglong)unaff_retaddr = *(undefined4 *)(ulonglong)unaff_retaddr_00;
  *(undefined4 *)(ulonglong)unaff_retaddr_00 = uVar1;
  return;
}

