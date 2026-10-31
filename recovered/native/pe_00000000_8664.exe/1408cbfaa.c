/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cbfaa */

void FUN_1408cbfaa(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar1 - 8) = 0;
  *(undefined8 *)(uVar1 - 0x10) = 0x1408cbfbc;
  FUN_1408b6a20((int)&stack0xfffffffffffffff8 + -0x28);
  *(ulonglong *)(uVar1 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar1 - 0x18) = *(undefined8 *)(uVar2 + 0x18);
  *(undefined8 *)(uVar1 - 0x20) = *(undefined8 *)(uVar2 + 0x14);
  *(undefined8 *)(uVar1 - 0x28) = *(undefined8 *)(uVar2 + 0x10);
  *(undefined8 *)(uVar1 - 0x30) = *(undefined8 *)(uVar2 + 0xc);
  *(undefined8 *)(uVar1 - 0x38) = *(undefined8 *)(uVar2 + 8);
  *(undefined8 *)(uVar1 - 0x40) = 0x1408cbfd4;
  FUN_1408cbf04();
  *(undefined8 *)((ulonglong)((int)(uVar1 - 0x38) + 0x18) - 8) = 0x1408cbfdf;
  FUN_1408b6a80((int)&stack0xfffffffffffffff8 + -0x28);
  return;
}

