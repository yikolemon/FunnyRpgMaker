/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c8a22 */

undefined4 FUN_1408c8a22(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2c);
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2c);
  *(undefined8 *)(uVar3 - 8) = unaff_RSI;
  *(ulonglong *)(uVar3 - 0x10) = (ulonglong)unaff_EDI;
  *(undefined8 *)(uVar3 - 0x18) = 0;
  *(undefined8 *)(uVar3 - 0x20) = 0x1408c8a36;
  FUN_1408b6a20();
  *(undefined8 *)(uVar3 - 0x20) = 0;
  *(undefined8 *)(uVar3 - 0x28) = *(undefined8 *)(uVar5 + 0x10);
  *(ulonglong *)(uVar3 - 0x30) = uVar2;
  *(ulonglong *)(uVar3 - 0x38) = uVar2;
  *(undefined8 *)(uVar3 - 0x40) = *(undefined8 *)(uVar5 + 0xc);
  *(undefined8 *)(uVar3 - 0x48) = *(undefined8 *)(uVar5 + 8);
  *(ulonglong *)(uVar3 - 0x50) = uVar3 - 0x38 & 0xffffffff;
  *(undefined8 *)(uVar3 - 0x58) = 0x1408c8a4b;
  FUN_1408ba6ea();
  uVar4 = (ulonglong)((int)(uVar3 - 0x50) + 0xc);
  *(ulonglong *)(uVar4 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2c);
  *(undefined8 *)(uVar4 - 0x10) = 0x1408c8a57;
  uVar1 = FUN_1408c8cb9();
  *(undefined8 *)((ulonglong)((int)(uVar4 - 8) + 0x14) - 8) = 0x1408c8a66;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x2c);
  return uVar1;
}

