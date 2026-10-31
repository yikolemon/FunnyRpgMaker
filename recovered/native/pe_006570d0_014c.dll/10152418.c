/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152418 */

void FUN_10152418(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_101522b9(param_2,param_3);
  if (0 < param_2 && iVar2 != 0) {
    iVar3 = 0;
    do {
      uVar1 = FUN_10142d40();
      *(undefined1 *)(iVar2 + iVar3) = uVar1;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
  }
  return;
}

