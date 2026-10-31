/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cbf81 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408cbf81(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1;
  if (*(char *)(uVar1 + 8) == '\0') {
    (*_DAT_150c29f22)();
    *(undefined4 *)(uVar1 + 4) = 0;
    *(undefined1 *)(uVar1 + 8) = 1;
    (*_DAT_150c2a04d)();
    return 0;
  }
  return *(undefined4 *)(uVar1 + 4);
}

