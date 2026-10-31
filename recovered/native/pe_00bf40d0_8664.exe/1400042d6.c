/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400042d6 */

void FUN_1400042d6(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

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
  FUN_14000430c(param_1,1,param_3,param_2);
  return;
}

