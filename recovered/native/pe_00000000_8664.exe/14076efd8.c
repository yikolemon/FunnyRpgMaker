/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076efd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076efd8(void)

{
  ulonglong uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = (ulonglong)_DAT_150b0c72e;
  *(undefined4 *)(uVar1 + 0x2074) = unaff_retaddr;
  *(undefined4 *)(uVar1 + 0x2078) = 0x3dcccccd;
  return;
}

