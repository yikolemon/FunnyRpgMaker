/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6e7e */

void FUN_1800e6e7e(void)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = FUN_18010f8ee();
  FUN_1800c929b(&local_20,*(undefined8 *)(lVar1 + 0x60));
  local_28 = 0;
  local_30 = 0;
  FUN_180116a8b(&local_30,4,&local_28);
  local_28 = CONCAT44((float)((local_1c * 2) / 3),(float)(local_20 / 2));
  FUN_18010ca41(&local_28,4);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

