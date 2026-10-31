/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021f800 */

void FUN_18021f800(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = FUN_1801cf464(*param_3);
  local_30 = local_30 >> 0x10;
  local_2c = FUN_1801cf464(param_3[1]);
  local_2c = local_2c >> 0x10;
  FUN_18021fd57(param_1,param_2,1,&local_30);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

