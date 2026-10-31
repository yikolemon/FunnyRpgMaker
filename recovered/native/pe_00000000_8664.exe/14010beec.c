/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010beec */

undefined8 *
FUN_14010beec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_140119316(param_2,param_3,param_4);
  FUN_14010bf20(param_1,uVar1);
  return param_1;
}

