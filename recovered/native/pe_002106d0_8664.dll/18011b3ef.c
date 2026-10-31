/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b3ef */

void FUN_18011b3ef(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180419160;
  lVar3 = *(longlong *)(DAT_180419160 + 0x1608);
  if (((*(byte *)(lVar3 + 0x17) & 4) != 0) && (0 < *(int *)(DAT_180419160 + 0x2158))) {
    if (*(longlong *)(DAT_180419160 + 0x2200) == lVar3) {
      FUN_18011b6e3(lVar3,2);
    }
    uVar1 = *(undefined8 *)(lVar4 + 0x1570);
    uVar2 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined4 *)(lVar4 + 0x1574) = uVar2;
    if ((*(byte *)(lVar3 + 0x17) & 1) != 0) {
      *(undefined4 *)(lVar4 + 0x1570) = uVar2;
    }
    FUN_18010f900();
    *(undefined8 *)(lVar4 + 0x1570) = uVar1;
    return;
  }
  FUN_180101698("Calling EndPopup() in wrong window!");
  return;
}

