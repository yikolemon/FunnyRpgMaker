/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d7e1 */

void FUN_14076d7e1(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)unaff_retaddr;
  *(undefined4 *)(uVar1 + 0xd4) = local_res8;
  *(undefined4 *)(uVar1 + 0xdc) = 0;
  *(undefined4 *)(uVar1 + 0xe4) = 0;
  return;
}

