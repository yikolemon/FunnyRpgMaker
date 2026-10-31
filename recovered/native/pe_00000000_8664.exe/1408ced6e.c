/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ced6e */

void FUN_1408ced6e(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *(undefined8 *)(uVar2 - 8) = 3;
  uVar1 = *(undefined8 *)(uVar2 - 8);
  *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 8) = (int)uVar1;
  *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 0xc) = (int)uVar1;
  *(ulonglong *)(uVar2 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 8);
  *(ulonglong *)(uVar2 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 1);
  *(ulonglong *)(uVar2 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *(undefined8 *)(uVar2 - 0x20) = 0x1408ced93;
  FUN_1408ceff1((int)&stack0xfffffffffffffff8 + -1);
  return;
}

