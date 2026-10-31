/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032c8bf */

void FUN_14032c8bf(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_14062a630;
  lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
  if (((*(byte *)(lVar3 + 0x17) & 4) != 0) && (0 < *(int *)(DAT_14062a630 + 0x2158))) {
    if (*(longlong *)(DAT_14062a630 + 0x2200) == lVar3) {
      FUN_14032cbb3(lVar3,2);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x1570);
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined4 *)(lVar4 + 0x1574) = uVar2;
    if ((*(byte *)(lVar3 + 0x17) & 1) != 0) {
      *(undefined4 *)(lVar4 + 0x1570) = uVar2;
    }
    FUN_140320dd0();
    *(undefined8 *)(lVar4 + 0x1570) = uVar1;
    return;
  }
  FUN_140312b68("ts won\'t work if the window is docked!");
  return;
}

