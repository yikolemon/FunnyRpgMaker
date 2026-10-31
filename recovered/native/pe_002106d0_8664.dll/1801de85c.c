/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801de85c */

void FUN_1801de85c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_2 + 0xa0);
  uStack_24 = *(undefined4 *)(param_2 + 0xa4);
  uStack_20 = *(undefined4 *)(param_2 + 0xa8);
  uStack_1c = *(undefined4 *)(param_2 + 0xac);
  local_18 = *(undefined4 *)(param_2 + 0xb0);
  uStack_14 = *(undefined4 *)(param_2 + 0xb4);
  uStack_10 = *(undefined4 *)(param_2 + 0xb8);
  uStack_c = *(undefined4 *)(param_2 + 0xbc);
  FUN_18019efc0();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

