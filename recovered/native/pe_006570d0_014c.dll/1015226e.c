/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015226e */

void FUN_1015226e(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_101522b9(param_2,0);
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

