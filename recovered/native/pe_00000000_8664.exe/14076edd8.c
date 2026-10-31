/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076edd8 */

/* WARNING: Instruction at (ram,0x00014076ee28) overlaps instruction at (ram,0x00014076ee27)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14076edd8(uint param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)_DAT_150b0c52c;
  if ((((*(int *)(uVar2 + 0x1528) == 0) || (*(char *)(uVar2 + 0x153a) != '\x01')) ||
      ((param_1 >> 0x1a & 1) == 0)) ||
     (bVar1 = 2, *(int *)(uVar2 + 0x1528) != *(int *)(uVar2 + 0x1e80))) {
    if (*(char *)(uVar2 + 0x2040) == '\x01') {
      bVar1 = *(int *)(uVar2 + 0x2048) != 0 & *(byte *)(uVar2 + 0x2041);
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}

