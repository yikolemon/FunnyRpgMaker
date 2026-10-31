/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400089b8 */

void FUN_1400089b8(undefined8 *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[2];
  if (uVar1 < (ulonglong)param_1[3]) {
    param_1[2] = uVar1 + 1;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + uVar1 * 2) = param_2;
    *(undefined2 *)((longlong)param_1 + uVar1 * 2 + 2) = 0;
    return;
  }
  FUN_140009072(param_1,1);
  return;
}

