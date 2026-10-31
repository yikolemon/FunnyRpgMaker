/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d1190 */

void FUN_1408d1190(void)

{
  ulonglong unaff_RBP;
  longlong in_FS_OFFSET;
  undefined8 unaff_retaddr;
  
  *(undefined4 *)(in_FS_OFFSET + 0x1408d119a) = *(undefined4 *)(unaff_RBP - 0xc);
  *(undefined8 *)(unaff_RBP & 0xffffffff) = unaff_retaddr;
  return;
}

