/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f1d4 */

void FUN_18003f1d4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [21];
  undefined1 local_23 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_20 = FUN_180025acd(local_38,*(undefined8 *)(param_2 + 0x20),0x15);
  FUN_180018bde(param_4,local_20,local_23);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

