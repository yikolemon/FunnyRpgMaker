/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba64e */

int FUN_100ba64e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar1 = param_1 + 4;
      }
      else {
        iVar1 = *(int *)(param_1 + 4);
      }
      FUN_100b9f36(iVar1,*(undefined4 *)(param_1 + 0x14));
    }
    param_3 = param_3 + 0x1c;
    param_1 = param_1 + 0x1c;
  }
  return param_3;
}

