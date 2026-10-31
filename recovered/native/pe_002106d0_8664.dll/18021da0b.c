/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021da0b */

void FUN_18021da0b(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_18021ef59(param_1,0);
  }
  if ((param_3 == *(int *)(param_1 + 0x198)) && (param_5 == *(int *)(param_1 + 0x19c))) {
    return;
  }
  *(int *)(param_1 + 0x198) = param_3;
  *(int *)(param_1 + 0x19c) = param_5;
  FUN_18021ef59(param_1,1);
  FUN_18021f007(param_1 + 0x1a0,param_3,param_5);
  return;
}

