/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c09e0 */

undefined8 *
FUN_1400c09e0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = param_2[2] - param_3;
  if (param_3 <= (ulonglong)param_2[2]) {
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_14000f84c(param_1,(longlong)param_2 + param_3 * 2,param_4,param_4,0xfffffffffffffffe);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}

