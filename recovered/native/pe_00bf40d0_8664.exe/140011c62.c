/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011c62 */

undefined8 * FUN_140011c62(undefined8 *param_1,ushort *param_2,ushort *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_2 != param_3) {
    FUN_14000fb9a(local_28,param_2,param_3,(uint *)(param_1 + 3));
    param_1[2] = local_28[0];
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

