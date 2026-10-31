/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018a34e */

longlong FUN_18018a34e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1800dbb7b(param_2);
  FUN_1800db986(param_1,local_30,param_2,uVar1);
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802397c0("invalid unordered_map<K, T> key");
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_28 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

