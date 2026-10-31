/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd766 */

undefined8 FUN_1800dd766(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_1800dd7d6(param_1,local_38,param_2);
  cVar1 = FUN_1800dd874(param_1,local_28,param_2);
  if (cVar1 != '\0') {
    param_1 = &local_28;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

