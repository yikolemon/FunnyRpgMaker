/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000f37f */

undefined8 * FUN_14000f37f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  FUN_14000b5d8(&local_28,(undefined2 *)*param_3,(undefined2 *)*param_3 + param_3[1],param_2);
  *param_1 = local_20;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

