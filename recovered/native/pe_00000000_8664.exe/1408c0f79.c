/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c0f79 */

void FUN_1408c0f79(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  *(undefined1 *)(uVar2 + 0x24) = 1;
  *(undefined4 *)(uVar2 + 0x20) = uVar1;
  uVar1 = FUN_1408c0f1a();
  *(undefined1 *)(uVar2 + 0x1c) = 1;
  *(undefined4 *)(uVar2 + 0x18) = uVar1;
  return;
}

