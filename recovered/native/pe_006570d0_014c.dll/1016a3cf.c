/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016a3cf */

void FUN_1016a3cf(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(*(int *)(iVar1 + 0x14cc) + 0x1e8);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x10) == param_1) && (*(uint *)(iVar1 + 4) == (uint)(param_3 ^ 1))) {
      return;
    }
    FUN_10169f56();
  }
  if (param_1 != 1) {
    FUN_101697cd(param_2,param_1,(uint)(param_3 ^ 1));
  }
  return;
}

