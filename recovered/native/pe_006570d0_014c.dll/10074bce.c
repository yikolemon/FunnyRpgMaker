/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074bce */

int __thiscall FUN_10074bce(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_102702af(*(int *)(param_1 + 0x4c),param_2,
                         (uint)((param_4 == 0 && param_3 == 0) && param_2 == 0) << 2,param_3);
    if (iVar1 == 0) {
      FUN_10074268(*(undefined4 *)(param_1 + 0x4c),1);
      iVar2 = param_1;
    }
  }
  return iVar2;
}

