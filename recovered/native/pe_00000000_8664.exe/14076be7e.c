/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076be7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14076be7e(void)

{
  uint unaff_retaddr;
  undefined4 local_res8;
  
  if (local_res8 < 0.0) {
    local_res8 = *(float *)((ulonglong)_DAT_150b095da + 0x90);
  }
  return local_res8 * local_res8 <=
         *(float *)((ulonglong)_DAT_150b095da + 0xbc4 + (ulonglong)unaff_retaddr * 4);
}

