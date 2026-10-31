/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093a0c */

void FUN_140093a0c(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_140142c30 == DAT_14012ea80) {
    bVar1 = 0x40 - ((byte)DAT_14012ea80 & 0x3f) & 0x3f;
    DAT_140142c30 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14012ea80;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14009ca6c();
}

