/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022adf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022adf4(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14022b22a(*(undefined8 *)(param_1 + 200),&local_9,&local_8,*(uint *)(param_1 + 0xe0) >> 8 & 1)
  ;
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

