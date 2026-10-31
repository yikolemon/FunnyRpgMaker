/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b2bb4 */

undefined8 FUN_1800b2bb4(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = FUN_180001f7f(param_1,(longlong)param_1 + *plVar1 * 2);
  local_20 = lVar2 - (longlong)param_1 >> 1;
  local_28 = param_1;
  FUN_180001f38(param_2,&local_28,0);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

