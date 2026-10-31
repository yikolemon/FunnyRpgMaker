/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006bb00 */

undefined8 *
FUN_18006bb00(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_18006bb6c(param_1,param_2,0,param_4,param_1,0xfffffffffffffffe);
  uVar2 = FUN_180002218();
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 2) = uVar2;
  return param_1;
}

