/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118575 */

int FUN_10118575(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1039d74c;
  iVar1 = FUN_100fa6c3(param_1,0,0);
  iVar3 = *(int *)(iVar2 + 0x26dc);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar2 + 0x26e4);
    iVar3 = iVar3 * 0x24;
    do {
      if (*(int *)(iVar2 + 4) == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 0x24;
      iVar3 = iVar3 + -0x24;
    } while (iVar3 != 0);
  }
  return 0;
}

