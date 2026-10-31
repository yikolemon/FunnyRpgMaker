/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769d0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769d0a(void)

{
  ulonglong uVar1;
  undefined1 unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = (ulonglong)_DAT_150b07464;
  *(uint *)(uVar1 + 0x1ed0) = *(uint *)(uVar1 + 0x1ed0) | 8;
  *(undefined1 *)(uVar1 + 0x1f15) = unaff_retaddr;
  *(uint *)(uVar1 + 0x1edc) = local_res8 + (uint)(local_res8 == 0);
  return;
}

