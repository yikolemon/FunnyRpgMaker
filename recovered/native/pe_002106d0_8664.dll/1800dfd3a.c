/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dfd3a */

undefined8 * thunk_FUN_1800e033c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)*param_1 != '\x01') {
    if (*(char *)*param_1 == '\x02') {
      if (param_1[4] != param_1[5]) {
        FUN_1800e038f(param_1 + 6);
        param_1[5] = param_1[4];
      }
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + 10;
    }
    return param_1;
  }
  puVar1 = (undefined8 *)FUN_1800e0418(param_1);
  return puVar1;
}

