/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f6ec */

void FUN_18018f6ec(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40);
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
  FUN_18018f5a4(local_18,&local_18,&local_10,0);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

