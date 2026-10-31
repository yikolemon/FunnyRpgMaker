/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d802 */

void FUN_14076d802(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)unaff_retaddr;
  *(undefined4 *)(uVar1 + 0xd8) = local_res8;
  *(undefined4 *)(uVar1 + 0xe0) = 0;
  *(undefined4 *)(uVar1 + 0xe8) = 0;
  return;
}

