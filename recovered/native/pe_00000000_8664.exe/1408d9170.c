/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d9170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d9170(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar2 + 8);
  if ((uVar1 & 1) != 0) {
    *(int *)(uVar2 - 4) = (int)ROUND(_DAT_150bff0be);
  }
  if ((uVar1 & 8) != 0) {
    *(double *)(uVar2 - 0xc) = (double)_DAT_150bff0d0;
  }
  if ((uVar1 & 0x10) != 0) {
    *(double *)(uVar2 - 0xc) = (double)_DAT_150bff0ee;
  }
  if ((uVar1 & 0x20) != 0) {
    *(undefined8 *)(uVar2 - 0xc) = 0x400921fb54442d18;
  }
  return;
}

