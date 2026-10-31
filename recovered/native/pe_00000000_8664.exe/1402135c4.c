/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402135c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402135c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  FUN_14021361a(param_1,param_2,&local_11);
  if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_10 ^ (ulonglong)auStack_38);
}

