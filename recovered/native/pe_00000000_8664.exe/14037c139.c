/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c139 */

void FUN_14037c139(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  lVar2 = *(longlong *)(DAT_14062a630 + 0x24f8);
  uVar3 = *(undefined4 *)(lVar1 + 700);
  uVar4 = *(undefined4 *)(lVar1 + 0x2c0);
  uVar5 = *(undefined4 *)(lVar1 + 0x2c4);
  *(undefined4 *)(lVar2 + 0x170) = *(undefined4 *)(lVar1 + 0x2b8);
  *(undefined4 *)(lVar2 + 0x174) = uVar3;
  *(undefined4 *)(lVar2 + 0x178) = uVar4;
  *(undefined4 *)(lVar2 + 0x17c) = uVar5;
  FUN_14037bddf(lVar1,lVar2 + 0x150);
  FUN_1403a6a12(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)(lVar2 + 0x234));
  return;
}

