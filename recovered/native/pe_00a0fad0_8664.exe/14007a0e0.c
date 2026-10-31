/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007a0e0 */

undefined8 * FUN_14007a0e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)*param_1 != '\x01') {
    if (*(char *)*param_1 == '\x02') {
      if (param_1[4] != param_1[5]) {
        FUN_14007a133(param_1 + 6);
        param_1[5] = param_1[4];
      }
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + 10;
    }
    return param_1;
  }
  puVar1 = (undefined8 *)FUN_14007a1bc(param_1);
  return puVar1;
}

