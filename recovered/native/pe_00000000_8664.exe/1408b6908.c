/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b6908 */

undefined4 FUN_1408b6908(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar3 + 0x1c);
  *(undefined8 *)(uVar2 - 0x18) = 0x1408b691c;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x28);
  *(undefined8 *)(uVar2 - 0x18) = *(undefined8 *)(uVar3 + 0x20);
  *(ulonglong *)(uVar2 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 0x28) = *(undefined8 *)(uVar3 + 0x18);
  *(undefined8 *)(uVar2 - 0x30) = *(undefined8 *)(uVar3 + 0x14);
  *(undefined8 *)(uVar2 - 0x38) = *(undefined8 *)(uVar3 + 0x10);
  *(undefined8 *)(uVar2 - 0x40) = *(undefined8 *)(uVar3 + 0xc);
  *(undefined8 *)(uVar2 - 0x48) = *(undefined8 *)(uVar3 + 8);
  *(undefined8 *)(uVar2 - 0x50) = 0x1408b6937;
  uVar1 = FUN_1408b6d2b();
  *(undefined8 *)((ulonglong)((int)(uVar2 - 0x48) + 0x1c) - 8) = 0x1408b6944;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x28);
  return uVar1;
}

