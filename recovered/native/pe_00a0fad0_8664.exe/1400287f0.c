/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400287f0 */

undefined8 * FUN_1400287f0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    if (uVar1 - param_2 < param_3) {
      param_3 = uVar1 - param_2;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    FUN_140135ff0((longlong)puVar2 + param_2,param_3 + (longlong)puVar2 + param_2,
                  ((uVar1 - param_3) - param_2) + 1);
    param_1[2] = uVar1 - param_3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}

