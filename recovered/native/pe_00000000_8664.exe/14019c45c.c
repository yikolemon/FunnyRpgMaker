/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c45c */

void FUN_14019c45c(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_140f32738 == DAT_140f17b40) {
    bVar1 = 0x40 - ((byte)DAT_140f17b40 & 0x3f) & 0x3f;
    DAT_140f32738 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140f17b40;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401aa0e4();
}

