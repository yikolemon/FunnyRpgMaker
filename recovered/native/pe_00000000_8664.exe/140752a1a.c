/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752a1a */

uint FUN_140752a1a(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  undefined4 local_res8;
  
  do {
    uVar1 = (ulonglong)local_res8;
    if (local_res8 <= unaff_retaddr) {
      return unaff_retaddr;
    }
    local_res8 = local_res8 - 1;
  } while (*(char *)(uVar1 - 1) < -0x40);
  return local_res8;
}

