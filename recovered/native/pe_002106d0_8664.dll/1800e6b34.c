/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6b34 */

undefined8 * FUN_1800e6b34(undefined8 *param_1,float *param_2)

{
  float fVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  fVar1 = *param_2;
  FUN_1800163b4(param_1 + 1,0);
  *(undefined1 *)param_1 = 7;
  param_1[1] = (double)fVar1;
  return param_1;
}

