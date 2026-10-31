/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000705d */

undefined8 * FUN_14000705d(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  thunk_FUN_14001761a(local_38,param_3);
  local_48 = 1;
  local_58 = *param_2;
  lStack_50 = param_2[1];
  local_40 = local_38;
  FUN_14000acb6(param_1,&local_58,&local_48);
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_78);
}

