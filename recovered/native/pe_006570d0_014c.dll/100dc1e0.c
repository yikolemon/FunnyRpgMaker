/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc1e0 */

undefined4 * __fastcall FUN_100dc1e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)*param_1 != '\x01') {
    if (*(char *)*param_1 == '\x02') {
      if (param_1[4] != param_1[5]) {
        FUN_100dc221(param_1 + 6,param_1[4]);
        param_1[5] = param_1[4];
      }
      param_1 = param_1 + 6;
    }
    else {
      param_1 = param_1 + 0xc;
    }
    return param_1;
  }
  puVar1 = (undefined4 *)FUN_100dc2ca();
  return puVar1;
}

