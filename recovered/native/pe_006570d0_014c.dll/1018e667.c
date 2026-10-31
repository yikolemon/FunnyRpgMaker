/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e667 */

void FUN_1018e667(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_101909d8();
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x20);
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar5);
      iVar4 = *(int *)(iVar3 + 0x74);
      if (((iVar4 != 0) || (iVar4 = *(int *)(param_1 + 0x294), iVar4 != 0)) &&
         (*(code **)(iVar4 + 0x10) != (code *)0x0)) {
        (**(code **)(iVar4 + 0x10))(param_1,iVar3);
      }
      iVar5 = iVar5 + 4;
    } while (iVar1 << 2 != iVar5);
  }
  return;
}

