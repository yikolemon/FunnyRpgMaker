/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d14e7 */

void FUN_1408d14e7(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  *(undefined4 *)(ulonglong)*(uint *)(uVar1 + 8) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 4) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 8) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 0x10) = 0xffffffff;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 0x14) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 0x18) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar1 + 8) + 0x1c) = 0;
  LOCK();
  *(undefined4 *)(ulonglong)(*(int *)(uVar1 + 8) + 0xc) = 0;
  UNLOCK();
  return;
}

