/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003bf2 */

void FUN_180003bf2(undefined8 *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 < (ulonglong)param_1[3]) {
    param_1[2] = uVar1 + 1;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + uVar1) = param_2;
    *(undefined1 *)((longlong)param_1 + uVar1 + 1) = 0;
    return;
  }
  FUN_180003c28(param_1,1);
  return;
}

