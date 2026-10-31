/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e409 */

void FUN_18021e409(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  FUN_18021eefb(param_1 + 0xf,uVar1);
  FUN_18021eefb(param_1 + 6,uVar1);
  FUN_1801c9b65(uVar1,param_1[1]);
  param_1[1] = 0;
  FUN_1801c9b65(uVar1,param_1[2]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

