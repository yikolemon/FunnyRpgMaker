/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101165cb */

void FUN_101165cb(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if (((*(byte *)(iVar1 + 0xf) & 4) == 0) || (*(int *)(DAT_1039d74c + 0x1fc8) < 1)) {
    FUN_100fcef5("Calling EndPopup() in wrong window!");
  }
  else {
    if (*(int *)(DAT_1039d74c + 0x2048) == iVar1) {
      FUN_10116891(iVar1,2);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x1458);
    uVar5 = *(undefined4 *)(iVar3 + 0x145c);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar3 + 0x145c) = uVar2;
    if ((*(byte *)(iVar1 + 0xf) & 1) != 0) {
      *(undefined4 *)(iVar3 + 0x1458) = uVar2;
    }
    FUN_1010ad44(uVar4,uVar5,0,0);
    *(ulonglong *)(iVar3 + 0x1458) = CONCAT44(uVar5,uVar4);
  }
  return;
}

