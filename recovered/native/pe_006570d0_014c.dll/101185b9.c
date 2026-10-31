/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101185b9 */

void FUN_101185b9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x26d8);
  if (iVar3 != 0) {
    *(undefined4 *)(DAT_1039d74c + 0x26d4) = 0;
    *(undefined4 *)(iVar1 + 0x26d0) = 0;
    FUN_100fa2cb(iVar3);
    *(undefined4 *)(iVar1 + 0x26d8) = 0;
  }
  if (*(int *)(iVar1 + 0x26dc) != 0) {
    iVar3 = *(int *)(iVar1 + 0x26e4);
    iVar2 = *(int *)(iVar1 + 0x26dc) * 0x24;
    do {
      if (*(code **)(iVar3 + 8) != (code *)0x0) {
        (**(code **)(iVar3 + 8))(iVar1,iVar3);
      }
      iVar3 = iVar3 + 0x24;
      iVar2 = iVar2 + -0x24;
    } while (iVar2 != 0);
  }
  return;
}

