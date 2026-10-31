/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215f74 */

void FUN_140215f74(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - param_1[2];
  if ((ulonglong)param_1[2] <= param_2 && lVar1 != 0) {
    FUN_140215f9a(param_1,lVar1);
    return;
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

