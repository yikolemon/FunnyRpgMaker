/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140292222 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140292222(longlong *param_1,ulonglong param_2)

{
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((ulonglong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_140292286(param_1,&local_10);
  }
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

