/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d401d */

uint FUN_1408d401d(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  if ((uVar3 == 0) ||
     (uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8), uVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(ulonglong)uVar1;
    if (uVar2 != uVar3) {
      *(uint *)(ulonglong)uVar1 = uVar3;
      FUN_1408d3cd3();
      if (((uVar2 != 0) && (FUN_1408d3d50(uVar3), *(int *)((ulonglong)uVar2 + 0xc) == 0)) &&
         (uVar2 != 0x1039b408)) {
        FUN_1408d3dd1((ulonglong)uVar2);
      }
    }
  }
  return uVar3;
}

