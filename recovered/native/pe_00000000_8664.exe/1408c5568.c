/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5568 */

undefined8 FUN_1408c5568(void)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  uVar1 = *(uint *)(uVar6 + 8);
  *(uint *)(uVar6 - 8) = uVar1;
  if (uVar1 == 0) {
    *(undefined8 *)(uVar5 - 8) = 0;
    *(undefined8 *)(uVar5 - 0x10) = 0x1408c5580;
    uVar4 = FUN_1408c56e6();
    return uVar4;
  }
  *(ulonglong *)(uVar5 - 8) = (ulonglong)*(uint *)((ulonglong)uVar1 + 0xc);
  *(undefined8 *)(uVar5 - 0x10) = 0x1408c558d;
  cVar3 = FUN_1408c5692();
  if (cVar3 == '\0') {
    return 0;
  }
  *(int *)(uVar6 - 0x10) = (int)&stack0xfffffffffffffff8 + -8;
  uVar2 = *(undefined4 *)(uVar6 - 8);
  *(undefined4 *)(uVar6 - 0xc) = uVar2;
  *(undefined4 *)(uVar6 - 0x14) = uVar2;
  *(ulonglong *)(uVar5 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *(ulonglong *)(uVar5 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(ulonglong *)(uVar5 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(undefined8 *)(uVar5 - 0x20) = 0x1408c55b9;
  uVar4 = FUN_1408c586a((int)&stack0xfffffffffffffff8 + -1);
  return uVar4;
}

