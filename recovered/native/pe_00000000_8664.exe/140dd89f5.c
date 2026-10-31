/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd89f5 */

void FUN_140dd89f5(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar3 = uVar2 + *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc) * 4;
  for (; uVar2 != uVar3; uVar2 = uVar2 + 4) {
    uVar1 = *(undefined8 *)(ulonglong)uVar2;
    FUN_140dd41d0(param_1);
    param_1 = uVar1;
  }
  return;
}

