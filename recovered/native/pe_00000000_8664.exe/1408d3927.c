/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3927 */

void FUN_1408d3927(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar3 = uVar2 + *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc) * 4;
  for (; uVar2 != uVar3; uVar2 = uVar2 + 4) {
    uVar1 = *(undefined8 *)(ulonglong)uVar2;
    FUN_1408cbff0(param_1);
    param_1 = uVar1;
  }
  return;
}

