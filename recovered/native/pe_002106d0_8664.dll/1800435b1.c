/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800435b1 */

undefined8 * FUN_1800435b1(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = param_2[1];
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  FUN_180001ef2(&local_48);
  uVar2 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_180002428(param_1,uVar2,uVar1);
  return param_1;
}

