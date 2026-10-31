/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c56e6 */

undefined4 FUN_1408c56e6(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  *(undefined4 *)(uVar4 - 0xc) = 0;
  *(undefined4 *)(uVar4 - 8) = 0;
  *(int *)(uVar4 - 0x20) = (int)&stack0xfffffffffffffff8 + -0xc;
  *(int *)(uVar4 - 0x1c) = (int)&stack0xfffffffffffffff8 + 8;
  *(undefined8 *)(uVar3 - 8) = 8;
  *(int *)(uVar4 - 0x18) = (int)&stack0xfffffffffffffff8 + -8;
  uVar1 = *(undefined8 *)(uVar3 - 8);
  *(int *)(uVar4 - 0x10) = (int)uVar1;
  *(int *)(uVar4 - 0x14) = (int)uVar1;
  *(ulonglong *)(uVar3 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(ulonglong *)(uVar3 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  *(ulonglong *)(uVar3 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(undefined8 *)(uVar3 - 0x20) = 0x1408c5725;
  FUN_1408c57be((int)&stack0xfffffffffffffff8 + -1);
  uVar2 = *(undefined4 *)(uVar4 - 8);
  if (*(char *)(uVar4 + 8) != '\0') {
    uVar2 = *(undefined4 *)(uVar4 - 0xc);
  }
  return uVar2;
}

