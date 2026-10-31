/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ddf3f */

int __fastcall FUN_101ddf3f(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  if (*(int *)(param_1 + 0x24) < 1) {
    local_18 = 0;
  }
  else {
    iVar3 = -0x80000000;
    iVar5 = 0x7fffffff;
    local_18 = 0;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 4);
      iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
      if ((iVar1 < iVar5) || ((iVar1 == iVar5 && (iVar2 < iVar3)))) {
        iVar3 = iVar2;
        iVar5 = iVar1;
        local_18 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (*(int *)(param_1 + 0x24) != iVar4);
  }
  return local_18;
}

