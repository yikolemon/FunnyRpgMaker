/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021f34b */

void __fastcall
FUN_1021f34b(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  *(int *)(param_3 + 4) = -*(int *)(param_3 + 4);
  *(int *)(param_3 + 0xc) = -*(int *)(param_3 + 0xc);
  *(int *)(param_3 + 0x14) = -*(int *)(param_3 + 0x14);
  if (param_2 != 2) {
    *(int *)(param_3 + 0x1c) = -*(int *)(param_3 + 0x1c);
  }
  FUN_1021f1df(param_3,param_4,-param_6,-param_5);
  *(int *)(param_3 + 4) = -*(int *)(param_3 + 4);
  return;
}

