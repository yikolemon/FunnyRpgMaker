/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7589 */

void FUN_1407e7589(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)((int)&stack0xffffffffffffffe8 - 0xc);
  uVar1 = *(uint *)(uVar4 + 0x24);
  uVar2 = *(uint *)(uVar4 + 0x20);
  uVar3 = *(uint *)(uVar4 + 0x1c);
  if (*(char *)((ulonglong)uVar1 + 0x31) == '\0') {
    *(undefined8 *)(uVar4 - 8) = 0x1407e75a8;
    FUN_1407e88a8((ulonglong)uVar2);
    *(uint *)((ulonglong)uVar2 + 4) = uVar3;
  }
  *(undefined1 *)((ulonglong)uVar3 + 0x42) = 0;
  *(uint *)(uVar4 + 8) = uVar1;
  *(uint *)(uVar4 + 4) = uVar2;
  *(undefined8 *)(uVar4 - 8) = 0x1407e75bc;
  FUN_1407e88ca();
  return;
}

