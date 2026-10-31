/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a0bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a0bbc(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
  FUN_1403a0a74();
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

