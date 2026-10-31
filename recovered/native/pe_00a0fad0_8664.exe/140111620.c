/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140111620 */

void FUN_140111620(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_140354b68 == DAT_1401c9640) {
    bVar1 = 0x40 - ((byte)DAT_1401c9640 & 0x3f) & 0x3f;
    DAT_140354b68 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1401c9640;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14011c8b8();
}

