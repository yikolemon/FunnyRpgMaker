/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180187b09 */

void FUN_180187b09(void)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 local_b0 [53];
  undefined2 local_7b;
  undefined4 local_58;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_e8;
  FUN_180195a16(local_b0);
  local_7b = 0x101;
  local_58 = 0x41980000;
  lVar1 = FUN_180107ee8();
  local_c0 = 0;
  local_c8 = local_b0;
  FUN_1801971be(*(undefined8 *)(lVar1 + 0x38),&DAT_1802e16b0,0x3bb12,DAT_18031d1c4);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_e8);
}

