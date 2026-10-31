/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073262 */

undefined8 *
FUN_180073262(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180002428(param_1,(longlong)param_2 + param_3,param_4,param_4,0xfffffffffffffffe);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800045d8();
}

