/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078fcc */

undefined8 *
FUN_140078fcc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_14004262e(param_1,param_2,0,param_4,param_1,0xfffffffffffffffe);
  uVar2 = FUN_140007025();
  *param_3 = uVar1;
  *(undefined8 *)(param_3 + 2) = uVar2;
  return param_1;
}

