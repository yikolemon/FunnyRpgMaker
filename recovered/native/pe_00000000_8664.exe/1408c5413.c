/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5413 */

undefined4 FUN_1408c5413(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 8) = unaff_RSI;
  *(undefined8 *)(uVar2 - 0x10) = 0;
  *(undefined8 *)(uVar2 - 0x18) = 0x1408c5426;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x28);
  *(ulonglong *)(uVar2 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar2 - 0x20) =
       *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  *(undefined8 *)(uVar2 - 0x28) = 0x1408c5432;
  uVar1 = FUN_1408c54d1();
  *(undefined8 *)(uVar2 - 0x18) = 0x1408c543e;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x28);
  return uVar1;
}

