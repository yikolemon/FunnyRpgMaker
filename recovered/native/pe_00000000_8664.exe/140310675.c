/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140310675 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140310675(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  FUN_14030eb69(local_c,param_1,param_2);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

