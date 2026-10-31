/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c225a */

undefined4 FUN_101c225a(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar3 = 0x24;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar3 = 0x23;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x60);
      if (iVar5 == 0) {
        uVar3 = 0x22;
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + 8);
        iVar2 = FUN_101c1fae(iVar1 + 0x6c,param_1,uVar4,iVar5);
        if (iVar2 != 0) {
          FUN_101c1fd2(iVar1 + 0x6c,iVar2);
          FUN_101c0017(uVar4,iVar2);
          if (*(int **)(iVar1 + 0x58) == param_1) {
            *(undefined4 *)(iVar1 + 0x58) = 0;
            if (*(int *)(iVar1 + 0x6c) != 0) {
              *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(*(int *)(iVar1 + 0x6c) + 8);
            }
          }
          FUN_101c22f6(uVar4,param_1,iVar5);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}

