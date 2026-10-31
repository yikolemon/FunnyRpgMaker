/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004108 */

void FUN_140004108(undefined8 *param_1,undefined1 param_2)

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
  FUN_14000413e(param_1,1);
  return;
}

