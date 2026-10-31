/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027ec5f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027ec5f(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  FUN_14027ecbb(local_28);
  FUN_140215e03(param_1,local_28);
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

