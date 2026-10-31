/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e8115 */

undefined4 * FUN_1801e8115(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1801e823b(param_2);
  *param_1 = uVar1;
  uVar2 = FUN_1801e8246(param_2);
  *(undefined8 *)(param_1 + 2) = uVar2;
  uVar2 = FUN_1801e824b(param_2);
  *(undefined8 *)(param_1 + 4) = uVar2;
  param_1[6] = 1;
  return param_1;
}

