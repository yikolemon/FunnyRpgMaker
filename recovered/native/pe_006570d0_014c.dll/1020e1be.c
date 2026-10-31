/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e1be */

void FUN_1020e1be(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 200)) || (param_4 != *(int *)(param_1 + 0xcc))) {
    *(int *)(param_1 + 200) = param_2;
    *(int *)(param_1 + 0xcc) = param_4;
    FUN_1020f535();
  }
  if ((param_3 != *(int *)(param_1 + 0x194)) || (param_5 != *(int *)(param_1 + 0x198))) {
    *(int *)(param_1 + 0x194) = param_3;
    *(int *)(param_1 + 0x198) = param_5;
    FUN_1020f535();
    FUN_1020f5cc(param_5);
  }
  return;
}

