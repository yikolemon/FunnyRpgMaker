/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180150c40 */

float FUN_180150c40(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_180150cc9(*(undefined2 *)((longlong)param_1 + 0x12),(int)param_2);
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar1;
  uVar1 = FUN_180150cc9(*(undefined2 *)(param_1 + 5),(int)param_3);
  *(undefined2 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_180150cc9(*(undefined2 *)((longlong)param_1 + 0x16),(int)param_4);
  *(undefined2 *)((longlong)param_1 + 0x16) = uVar1;
  uVar1 = FUN_180150cc9(*(undefined2 *)(param_1 + 6),(int)param_5);
  *(undefined2 *)(param_1 + 6) = uVar1;
  FUN_180150bcc(param_1,0);
  uVar2 = FUN_180150cd2(*param_1,param_1[1]);
  return (float)uVar2;
}

