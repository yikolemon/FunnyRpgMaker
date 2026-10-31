/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017f890 */

void FUN_14017f890(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  *(int *)(param_3 + 4) = -*(int *)(param_3 + 4);
  *(int *)(param_3 + 0xc) = -*(int *)(param_3 + 0xc);
  *(int *)(param_3 + 0x14) = -*(int *)(param_3 + 0x14);
  if (param_2 != 2) {
    *(int *)(param_3 + 0x1c) = -*(int *)(param_3 + 0x1c);
  }
  FUN_14017f773(param_1,param_2,param_3,param_4,-param_6,-param_5);
  *(int *)(param_3 + 4) = -*(int *)(param_3 + 4);
  return;
}

