/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e1510 */

undefined8 * FUN_1800e1510(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_1800163b4(param_1 + 1,0);
  *(undefined1 *)param_1 = 6;
  param_1[1] = (ulonglong)uVar1;
  return param_1;
}

