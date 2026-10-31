/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769ba7 */

void FUN_140769ba7(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  uVar1 = unaff_RDI >> 0x20;
  *(uint *)(uVar1 + 0x2ac) =
       (int)*(float *)(ulonglong)unaff_retaddr_00 & 0xffffU |
       (int)((float *)(ulonglong)unaff_retaddr_00)[1] << 0x10;
  *(uint *)(uVar1 + 0x2b0) =
       (int)(*(float *)(ulonglong)unaff_retaddr - *(float *)(uVar1 + 0x50)) & 0xffffU |
       (int)(((float *)(ulonglong)unaff_retaddr)[1] - *(float *)(uVar1 + 0x54)) << 0x10;
  return;
}

