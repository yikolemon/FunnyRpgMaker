/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14041425e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14041425e(void)

{
  undefined4 unaff_R13D;
  ulonglong in_stack_000008c0;
  
  if (ram0x000140613b10 == (in_stack_000008c0 ^ (ulonglong)&stack0x00000000)) {
    return unaff_R13D;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(in_stack_000008c0 ^ (ulonglong)&stack0x00000000);
}

