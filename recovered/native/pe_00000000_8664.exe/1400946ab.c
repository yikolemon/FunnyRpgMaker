/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400946ab */

void FUN_1400946ab(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (((*(byte *)(lVar3 + 0x17) & 4) != 0) && (0 < *(int *)(DAT_140f2a910 + 0x2158))) {
    if (*(longlong *)(DAT_140f2a910 + 0x2200) == lVar3) {
      FUN_14009499f(lVar3,2);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x1570);
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined4 *)(lVar4 + 0x1574) = uVar2;
    if ((*(byte *)(lVar3 + 0x17) & 1) != 0) {
      *(undefined4 *)(lVar4 + 0x1570) = uVar2;
    }
    FUN_140088c18();
    *(undefined8 *)(lVar4 + 0x1570) = uVar1;
    return;
  }
  FUN_14007a954("Calling EndPopup() in wrong window!");
  return;
}

