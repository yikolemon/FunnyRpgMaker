/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dac60 */

void FUN_1400dac60(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
  FUN_1400dab18();
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

