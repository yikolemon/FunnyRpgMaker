/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c65d0 */

undefined8 FUN_1408c65d0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  if (iVar1 == 0) {
    if (uVar2 == 0x7ff00000) {
      return 1;
    }
    if (uVar2 == 0xfff00000) {
      return 2;
    }
  }
  if ((uVar2 & 0x7ff80000) == 0x7ff80000) {
    return 3;
  }
  if (((uVar2 & 0x7ff00000) == 0x7ff00000) && ((iVar1 != 0 || ((uVar2 & 0x7fffffff) != 0x7ff00000)))
     ) {
    return 4;
  }
  return 0;
}

