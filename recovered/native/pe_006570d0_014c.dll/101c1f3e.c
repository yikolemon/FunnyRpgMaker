/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1f3e */

undefined4 FUN_101c1f3e(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x23;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piVar1 = (int *)(*(int *)(param_1 + 0x80) + 0x40);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(*(int *)(param_1 + 0x80) + 0x40) < 1) {
      iVar2 = *(int *)(param_1 + 0x60);
      iVar3 = FUN_101c1fae(iVar2 + 0x10,param_1);
      if (iVar3 == 0) {
        return 0x23;
      }
      uVar4 = *(undefined4 *)(iVar2 + 8);
      FUN_101c1fd2(iVar2 + 0x10,iVar3);
      FUN_101c0017(uVar4,iVar3);
      FUN_101c2003(uVar4,param_1,iVar2);
    }
    uVar4 = 0;
  }
  return uVar4;
}

