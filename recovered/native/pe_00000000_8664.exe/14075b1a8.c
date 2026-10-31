/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b1a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075b1a8(void)

{
  undefined8 uVar1;
  
  if (*(uint *)((ulonglong)_DAT_150af88fa + 0xc00) != 0) {
    uVar1 = (*(code *)(ulonglong)*(uint *)((ulonglong)_DAT_150af88fa + 0xc00))();
    return uVar1;
  }
  return 0;
}

