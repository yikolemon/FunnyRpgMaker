/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140770236 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140770236(void)

{
  ulonglong uVar1;
  undefined4 unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)_DAT_150b0d990;
  *(undefined4 *)(uVar1 + 0x2764) = unaff_retaddr;
  *(undefined4 *)(uVar1 + 0x2768) = local_res8;
  return;
}

