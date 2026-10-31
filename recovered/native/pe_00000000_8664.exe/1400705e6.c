/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400705e6 */

longlong FUN_1400705e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140070a42(param_2);
  FUN_1400713c8(param_1,local_30,param_2,uVar1);
  if (local_28 == 0) {
    FUN_1401898c0("invalid unordered_map<K, T> key");
  }
  else if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_28 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

