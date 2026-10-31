/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ccff */

longlong *
FUN_14000ccff(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],uint param_4,
             int param_5)

{
  undefined1 auStackY_58 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  FUN_14000cd67(&local_28,param_2,param_3,param_4,param_5);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStackY_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_58);
}

