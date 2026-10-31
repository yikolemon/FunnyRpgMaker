/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e2f2 */

undefined8 * FUN_14008e2f2(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14006af98(param_2);
  }
  return param_2;
}

