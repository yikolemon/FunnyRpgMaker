/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba7ea */

void FUN_101ba7ea(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar5);
      if (*(int *)(*(int *)(iVar3 + 0x20) + 0x20) == 0) {
        cVar4 = FUN_100fb858(iVar3,0);
        if (cVar4 != '\0') goto LAB_101ba824;
      }
      else {
LAB_101ba824:
        cVar4 = FUN_101ba8f8(iVar3);
        if (cVar4 != '\0') {
          FUN_101ba7ea(iVar3);
          FUN_10149387();
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar1 << 2 != iVar5);
  }
  return;
}

