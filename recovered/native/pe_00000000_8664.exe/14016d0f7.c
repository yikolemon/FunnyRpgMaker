/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016d0f7 */

void FUN_14016d0f7(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 0xcc)) || (param_4 != *(int *)(param_1 + 0xd0))) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0xd0) = param_4;
    FUN_14016e645(param_1,0);
  }
  if ((param_3 == *(int *)(param_1 + 0x198)) && (param_5 == *(int *)(param_1 + 0x19c))) {
    return;
  }
  *(int *)(param_1 + 0x198) = param_3;
  *(int *)(param_1 + 0x19c) = param_5;
  FUN_14016e645(param_1,1);
  FUN_14016e6f3(param_1 + 0x1a0,param_3,param_5);
  return;
}

