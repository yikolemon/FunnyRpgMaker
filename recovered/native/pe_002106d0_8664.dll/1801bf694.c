/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf694 */

undefined8 * FUN_1801bf694(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *local_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = param_1 + 2;
  *local_40 = 0;
  param_1[3] = 0;
  lVar1 = -0x18;
  do {
    FUN_18014f566(local_40 + 2);
    local_40 = local_40 + 6;
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x78);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}

