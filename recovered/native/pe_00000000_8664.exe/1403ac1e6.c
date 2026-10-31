/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac1e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ac1e6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  FUN_1403101d8(&local_14,0xc,0);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

