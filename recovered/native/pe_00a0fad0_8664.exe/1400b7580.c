/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b7580 */

void FUN_1400b7580(void)

{
  ulonglong uVar1;
  
  uVar1 = DAT_1401ccd38;
  if (DAT_1401ccd38 != 0) {
    FUN_1401366a0(&DAT_1401ccd50,8,DAT_1401ccd38);
    FUN_1401366a0(&DAT_1401ccd50 + (uVar1 & 0xffffffff),0x20,uVar1);
    FUN_1401366a0(&DAT_1401ccd50 + (uint)((int)uVar1 * 2),8,uVar1);
    (&DAT_1401ccd50)[(uint)((int)uVar1 * 3)] = 0;
    FUN_1400b75dc(&DAT_1401ccd50);
  }
  return;
}

