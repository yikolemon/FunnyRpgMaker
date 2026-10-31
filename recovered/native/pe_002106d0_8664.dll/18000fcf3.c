/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000fcf3 */

undefined8 *
FUN_18000fcf3(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,uint param_5)

{
  undefined1 auStack_58 [32];
  uint local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((int)param_5 < 0) {
    param_5 = 6;
  }
  else if (999999999 < param_5) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    goto LAB_18000fd4f;
  }
  local_38 = param_5;
  FUN_180008970(&local_28,param_2,param_3,(double)param_4);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
LAB_18000fd4f:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

