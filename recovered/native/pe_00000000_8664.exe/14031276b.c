/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031276b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14031276b(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  puVar1 = (undefined4 *)(DAT_14062a630 + 0xee8 + (longlong)param_1 * 0x10);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fStack_c = param_2 * *(float *)(DAT_14062a630 + 0xdb4) * (float)puVar1[3];
  FUN_1403108a6();
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

