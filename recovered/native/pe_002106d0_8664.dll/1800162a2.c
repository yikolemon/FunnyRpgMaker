/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800162a2 */

undefined4 * FUN_1800162a2(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined1 *)param_3 = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  FUN_180016ef2(param_1 + 4,param_3 + 4);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}

