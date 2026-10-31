/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bf295 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402bf295(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  FUN_1402bf3f0(local_30);
  FUN_1402bf2f9(param_1,local_30,param_3);
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
}

