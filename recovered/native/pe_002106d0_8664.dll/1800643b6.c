/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800643b6 */

void FUN_1800643b6(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 < (ulonglong)param_1[3]) {
    param_1[2] = uVar1 + 1;
    if (3 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined4 *)((longlong)param_1 + uVar1 * 4) = param_2;
    *(undefined4 *)((longlong)param_1 + uVar1 * 4 + 4) = 0;
    return;
  }
  FUN_1800643ee(param_1,1);
  return;
}

