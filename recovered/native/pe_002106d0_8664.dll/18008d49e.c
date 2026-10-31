/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d49e */

undefined8 * FUN_18008d49e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1[2] == 0) {
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_180087b9a(param_2);
  }
  return param_2;
}

