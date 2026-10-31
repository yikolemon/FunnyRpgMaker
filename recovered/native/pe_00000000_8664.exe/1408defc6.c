/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408defc6 */

undefined2 FUN_1408defc6(void)

{
  int iVar1;
  
  iVar1 = FUN_1408dfada();
  if (iVar1 != 0) {
    iVar1 = FUN_1408dfaf9();
    if (iVar1 != 0) {
      return *(undefined2 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    }
  }
  return 0xffff;
}

