/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007a5c6 */

void FUN_14007a5c6(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  fStack_c = (float)((ulonglong)param_1[1] >> 0x20);
  _uStack_10 = CONCAT44(*(float *)(DAT_140f2a910 + 0xdb4) * fStack_c,(int)param_1[1]);
  FUN_140078692();
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

