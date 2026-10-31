/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007a557 */

void FUN_14007a557(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  puVar1 = (undefined4 *)(DAT_140f2a910 + 0xee8 + (longlong)param_1 * 0x10);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fStack_c = param_2 * *(float *)(DAT_140f2a910 + 0xdb4) * (float)puVar1[3];
  FUN_140078692();
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

