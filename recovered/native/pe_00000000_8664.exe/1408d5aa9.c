/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d5aa9 */

void FUN_1408d5aa9(void)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 in_FPUControlWord;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2d0);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = *(undefined8 *)(uVar4 + 0xc);
  *(undefined8 *)(uVar1 - 0x18) = *(undefined8 *)(uVar4 + 8);
  *(undefined8 *)(uVar1 - 0x20) = 0x1408d5abe;
  FUN_1408d5c6b();
  uVar2 = (ulonglong)((int)(uVar1 - 0x18) + 8);
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)(uVar4 + 0x14);
  *(undefined8 *)(uVar2 - 0x10) = *(undefined8 *)(uVar4 + 0x10);
  *(undefined8 *)(uVar2 - 0x18) = 0x1408d5acc;
  FUN_1408d5c6b();
  uVar3 = (ulonglong)((int)(uVar2 - 0x10) + 8);
  *(undefined2 *)(uVar4 - 0xa4) = in_FPUControlWord;
  *(byte *)(uVar4 - 0x2c8) = *(byte *)(uVar4 - 0x2c8) | 2;
  *(undefined8 *)(uVar3 - 8) = 0x1408d5ae2;
  FUN_1408dea15();
  *(undefined8 *)(uVar3 - 8) = 0x1408d5ae7;
  FUN_1408d5aea();
  return;
}

