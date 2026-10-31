/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112c39 */

void FUN_140112c39(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  uVar3 = *(undefined4 *)(lVar1 + 700);
  uVar4 = *(undefined4 *)(lVar1 + 0x2c0);
  uVar5 = *(undefined4 *)(lVar1 + 0x2c4);
  *(undefined4 *)(lVar2 + 0x170) = *(undefined4 *)(lVar1 + 0x2b8);
  *(undefined4 *)(lVar2 + 0x174) = uVar3;
  *(undefined4 *)(lVar2 + 0x178) = uVar4;
  *(undefined4 *)(lVar2 + 0x17c) = uVar5;
  FUN_1401128df(lVar1,lVar2 + 0x150);
  FUN_1400e0ab6(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)(lVar2 + 0x234));
  return;
}

