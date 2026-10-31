/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019eef8 */

undefined8 *
FUN_18019eef8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1801d25e2(param_2,param_3,param_4);
  FUN_18019ef2c(param_1,uVar1);
  return param_1;
}

