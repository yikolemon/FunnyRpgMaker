/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b04b */

void FUN_14006b04b(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_14006c599(param_1,0);
  }
  if ((param_3 == *(int *)(param_1 + 0x198)) && (param_5 == *(int *)(param_1 + 0x19c))) {
    return;
  }
  *(int *)(param_1 + 0x198) = param_3;
  *(int *)(param_1 + 0x19c) = param_5;
  FUN_14006c599(param_1,1);
  FUN_14006c647((int *)(param_1 + 0x1a0),param_3,param_5);
  return;
}

