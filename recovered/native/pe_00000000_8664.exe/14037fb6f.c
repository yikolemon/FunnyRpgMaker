/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037fb6f */

void FUN_14037fb6f(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  lVar2 = *(longlong *)(lVar1 + 0x208);
  if (*(int *)(lVar2 + 0x10) == 1) {
    return;
  }
  uVar3 = *(undefined4 *)(lVar1 + 700);
  uVar4 = *(undefined4 *)(lVar1 + 0x2c0);
  uVar5 = *(undefined4 *)(lVar1 + 0x2c4);
  *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar1 + 0x2b8);
  *(undefined4 *)(lVar2 + 0x40) = uVar3;
  *(undefined4 *)(lVar2 + 0x44) = uVar4;
  *(undefined4 *)(lVar2 + 0x48) = uVar5;
  FUN_14037bddf(lVar1,lVar2 + 0x2c);
  FUN_1403a6a12(lVar2 + 0x70,*(undefined8 *)(lVar1 + 800),0);
  return;
}

