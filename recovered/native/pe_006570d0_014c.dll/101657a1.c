/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101657a1 */

undefined4 FUN_101657a1(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(char *)(iVar1 + 0x1ee) == '\x01') &&
       (*(int *)(iVar1 + 0x48) + 1 < *(int *)(iVar1 + 0x40))) {
      if (*(int *)(iVar1 + 0x48) == -1) {
        iVar3 = 0;
      }
      else {
        FUN_101654f7(iVar1);
        iVar3 = *(int *)(iVar1 + 0x48) + 1;
      }
    }
    else {
      iVar3 = 0;
      FUN_10165364(0,0);
    }
    FUN_10165661(iVar1,iVar3);
    uVar2 = CONCAT31((int3)((uint)*(int *)(iVar1 + 0x10) >> 8),
                     *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x6b + *(int *)(iVar1 + 0x48) * 0x74))
    ;
  }
  return uVar2;
}

