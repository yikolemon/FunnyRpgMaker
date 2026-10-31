/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003e300 */

undefined8 FUN_14003e300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != param_1) {
    puVar1 = param_1 + 2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_140017200(param_2,param_1,*puVar1);
  }
  return 1;
}

