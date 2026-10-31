/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d121a */

undefined4 FUN_1408d121a(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(ulonglong *)(uVar2 - 0x10) = (ulonglong)unaff_EDI;
  *(undefined8 *)(uVar2 - 0x18) = 0;
  *(undefined8 *)(uVar2 - 0x20) = 0x1408d122e;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x28);
  *(ulonglong *)(uVar2 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 0x28) = *(undefined8 *)(uVar3 + 0x14);
  *(undefined8 *)(uVar2 - 0x30) = *(undefined8 *)(uVar3 + 0x10);
  *(undefined8 *)(uVar2 - 0x38) = *(undefined8 *)(uVar3 + 0xc);
  *(undefined8 *)(uVar2 - 0x40) = *(undefined8 *)(uVar3 + 8);
  *(undefined8 *)(uVar2 - 0x48) = 0x1408d1243;
  uVar1 = FUN_1408d12d6();
  *(undefined8 *)((ulonglong)((int)(uVar2 - 0x40) + 0x14) - 8) = 0x1408d1252;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x28);
  return uVar1;
}

