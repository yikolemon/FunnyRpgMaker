/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180256ad0 */

void FUN_180256ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180256900(param_1,local_38,param_2,param_3);
  uVar1 = 0;
  if (local_28 * 2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(local_28 * 2));
  }
  FUN_180248010(local_38);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

