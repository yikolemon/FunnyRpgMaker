/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046593e */

void __cdecl FUN_0046593e(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 200)) || (param_4 != *(int *)(param_1 + 0xcc))) {
    *(int *)(param_1 + 200) = param_2;
    *(int *)(param_1 + 0xcc) = param_4;
    FUN_00466cb5(param_1,0);
  }
  if ((param_3 != *(uint *)(param_1 + 0x194)) || (param_5 != *(int *)(param_1 + 0x198))) {
    *(uint *)(param_1 + 0x194) = param_3;
    *(int *)(param_1 + 0x198) = param_5;
    FUN_00466cb5(param_1,1);
    FUN_00466d4c((int *)(param_1 + 0x19c),param_3,param_5);
  }
  return;
}

