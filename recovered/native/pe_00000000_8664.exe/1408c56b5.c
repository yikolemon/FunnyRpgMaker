/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c56b5 */

undefined8 FUN_1408c56b5(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if (uVar1 != 0) {
    if ((*(uint *)((ulonglong)uVar1 + 0xc) >> 0xd & 1) != 0) {
      cVar2 = FUN_1408c5692();
      if (cVar2 != '\0') {
        return 1;
      }
      piVar3 = (int *)(ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc)
      ;
      *piVar3 = *piVar3 + 1;
    }
  }
  return 0;
}

