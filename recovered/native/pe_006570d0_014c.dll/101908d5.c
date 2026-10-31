/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101908d5 */

byte FUN_101908d5(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
    bVar4 = 1;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x20);
    bVar4 = 1;
    iVar5 = 0;
    do {
      bVar3 = FUN_1018f679(param_1,*(undefined4 *)(iVar2 + iVar5));
      bVar4 = bVar4 & bVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 << 2 != iVar5);
  }
  return bVar4;
}

