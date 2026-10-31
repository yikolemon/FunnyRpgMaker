/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403127da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403127da(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  fStack_c = (float)((ulonglong)param_1[1] >> 0x20);
  _uStack_10 = CONCAT44(*(float *)(DAT_14062a630 + 0xdb4) * fStack_c,(int)param_1[1]);
  FUN_1403108a6();
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

