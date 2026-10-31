/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ba6ea */

void FUN_1408ba6ea(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar4 + 8);
  uVar2 = *(uint *)(uVar4 + 0x10);
  uVar3 = *(undefined4 *)(uVar4 + 0xc);
  *(undefined4 *)(ulonglong)uVar1 = uVar3;
  ((undefined4 *)(ulonglong)uVar1)[1] = uVar2;
  if (uVar2 != 0) {
    *(undefined4 *)(ulonglong)uVar2 = uVar3;
  }
  return;
}

