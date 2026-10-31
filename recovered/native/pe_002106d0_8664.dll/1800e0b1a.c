/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e0b1a */

undefined8 * FUN_1800e0b1a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1800163b4(param_1 + 1,0);
  *(undefined1 *)param_1 = 3;
  uVar1 = FUN_18008d0be(param_2);
  param_1[1] = uVar1;
  return param_1;
}

