/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc091 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cc091(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
  FUN_1408cc0bb();
  (*_DAT_150c2a111)(uVar1);
  return;
}

