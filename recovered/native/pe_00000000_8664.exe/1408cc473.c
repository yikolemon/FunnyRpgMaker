/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc473 */

void FUN_1408cc473(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  uVar1 = *(uint *)(uVar4 + 8);
  *(undefined8 *)(uVar3 - 8) = 0x43;
  *(undefined4 *)((ulonglong)uVar1 + 0x18) = 0;
  *(undefined4 *)(ulonglong)*(uint *)(uVar4 + 8) = 0x10324d20;
  *(undefined4 *)((ulonglong)*(uint *)(uVar4 + 8) + 0x350) = 0;
  uVar1 = *(uint *)(uVar4 + 8);
  uVar2 = *(undefined8 *)(uVar3 - 8);
  *(undefined8 *)(uVar3 - 8) = 5;
  *(undefined4 *)((ulonglong)uVar1 + 0x48) = 0x1039b6b0;
  *(short *)((ulonglong)*(uint *)(uVar4 + 8) + 0x6c) = (short)uVar2;
  *(short *)((ulonglong)*(uint *)(uVar4 + 8) + 0x172) = (short)uVar2;
  *(undefined4 *)((ulonglong)*(uint *)(uVar4 + 8) + 0x34c) = 0;
  *(int *)(uVar4 - 0x10) = (int)&stack0xfffffffffffffff8 + 8;
  uVar2 = *(undefined8 *)(uVar3 - 8);
  *(int *)(uVar4 - 8) = (int)uVar2;
  *(int *)(uVar4 - 0x14) = (int)uVar2;
  *(ulonglong *)(uVar3 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 8);
  *(ulonglong *)(uVar3 - 0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(ulonglong *)(uVar3 - 0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(undefined8 *)(uVar3 - 0x20) = 0x1408cc4e1;
  FUN_1408cc681((int)&stack0xfffffffffffffff8 + -1);
  *(int *)(uVar4 - 0xc) = (int)&stack0xfffffffffffffff8 + 8;
  *(undefined8 *)(uVar3 - 0x20) = 4;
  *(int *)(uVar4 - 8) = (int)&stack0xfffffffffffffff8 + 0xc;
  uVar2 = *(undefined8 *)(uVar3 - 0x20);
  *(int *)(uVar4 - 0x14) = (int)uVar2;
  *(int *)(uVar4 - 0x10) = (int)uVar2;
  *(ulonglong *)(uVar3 - 0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(ulonglong *)(uVar3 - 0x28) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  *(ulonglong *)(uVar3 - 0x30) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(undefined8 *)(uVar3 - 0x38) = 0x1408cc50a;
  FUN_1408cc6d3((int)&stack0xfffffffffffffff8 + -1);
  return;
}

