/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000cf50 */

void FUN_14000cf50(undefined8 *param_1,undefined1 param_2)

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
  FUN_14000cf86(param_1,1);
  return;
}

