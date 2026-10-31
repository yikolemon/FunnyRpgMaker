/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c55c4 */

undefined4 FUN_1408c55c4(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  ulonglong uVar6;
  
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar5 - 8) = unaff_RSI;
  *(ulonglong *)(uVar5 - 0x10) = (ulonglong)unaff_EDI;
  uVar2 = 0;
  *(undefined8 *)(uVar5 - 0x18) = 0;
  *(undefined8 *)(uVar5 - 0x20) = 0x1408c55d9;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x28);
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar6 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    *(undefined8 *)(uVar5 - 0x20) = 0;
    *(undefined8 *)(uVar5 - 0x28) = 0x1408c55e6;
    uVar2 = FUN_1408c56e6();
    goto LAB_1408c561b;
  }
  *(ulonglong *)(uVar5 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(ulonglong *)(uVar5 - 0x28) = uVar6;
  *(undefined8 *)(uVar5 - 0x30) = 0x1408c55f5;
  iVar3 = FUN_1408c5629();
  uVar4 = *(undefined8 *)(uVar5 - 0x20);
  if (iVar3 == 0) {
    if ((*(uint *)(uVar6 + 0xc) >> 0xb & 1) == 0) goto LAB_1408c561b;
    *(ulonglong *)(uVar5 - 0x20) = uVar6;
    *(undefined8 *)(uVar5 - 0x28) = 0x1408c560c;
    uVar4 = FUN_1408d056e(uVar4);
    *(undefined8 *)(uVar5 - 0x28) = uVar4;
    *(undefined8 *)(uVar5 - 0x30) = 0x1408c5612;
    iVar3 = FUN_1408d6804();
    if (iVar3 == 0) goto LAB_1408c561b;
  }
  uVar2 = 0xffffffff;
LAB_1408c561b:
  *(undefined8 *)(uVar5 - 0x20) = 0x1408c5623;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x28);
  return uVar2;
}

