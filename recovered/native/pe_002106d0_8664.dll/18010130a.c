/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010130a */

void FUN_18010130a(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  fStack_c = (float)((ulonglong)param_1[1] >> 0x20);
  _uStack_10 = CONCAT44(*(float *)(DAT_180419160 + 0xdb4) * fStack_c,(int)param_1[1]);
  FUN_1800ff3d6();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

