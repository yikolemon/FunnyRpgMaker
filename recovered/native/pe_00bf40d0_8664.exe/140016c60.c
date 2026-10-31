/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140016c60 */

longlong *
FUN_140016c60(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4,uint param_5)

{
  undefined1 auStackY_58 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  if ((int)param_5 < 0) {
    param_5 = 6;
  }
  else if (999999999 < param_5) {
    *param_1 = (longlong)param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    goto LAB_140016cb8;
  }
  FUN_14000defc(&local_28,param_2,param_3,param_4,param_5);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
LAB_140016cb8:
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStackY_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_58);
}

