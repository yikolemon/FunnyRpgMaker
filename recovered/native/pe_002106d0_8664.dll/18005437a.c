/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005437a */

undefined8 * FUN_18005437a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_1800163b4(param_1 + 1,0);
  *(undefined1 *)param_1 = 7;
  param_1[1] = uVar1;
  return param_1;
}

