/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140362110 */

float FUN_140362110(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_140362199(*(undefined2 *)((longlong)param_1 + 0x12),(int)param_2);
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar1;
  uVar1 = FUN_140362199(*(undefined2 *)(param_1 + 5),(int)param_3);
  *(undefined2 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_140362199(*(undefined2 *)((longlong)param_1 + 0x16),(int)param_4);
  *(undefined2 *)((longlong)param_1 + 0x16) = uVar1;
  uVar1 = FUN_140362199(*(undefined2 *)(param_1 + 6),(int)param_5);
  *(undefined2 *)(param_1 + 6) = uVar1;
  FUN_14036209c(param_1,0);
  uVar2 = FUN_1403621a2(*param_1,param_1[1]);
  return (float)uVar2;
}

