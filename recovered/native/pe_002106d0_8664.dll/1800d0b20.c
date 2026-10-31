/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d0b20 */

longlong FUN_1800d0b20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  local_30 = param_2;
  if ((*plVar1 == param_2) && (*(char *)(param_3 + 0x19) != '\0')) {
    FUN_1800d07d0(param_1,param_1,plVar1[1]);
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    plVar1[2] = (longlong)plVar1;
    param_1[1] = 0;
  }
  else if (param_2 != param_3) {
    do {
      lVar2 = local_30;
      FUN_180016c4c(&local_30);
      FUN_1800d0bce(param_1,lVar2);
    } while (local_30 != param_3);
  }
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return param_3;
}

