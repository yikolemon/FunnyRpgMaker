/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c215 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007c215(void)

{
  undefined1 auStack_48 [40];
  undefined4 *local_20;
  ulonglong *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_18 = &local_8;
  local_c = 0xfffffffe;
  _DAT_1401cc7f8 = 0;
  uRam00000001401cc800 = 0;
  _DAT_1401cc808 = 0;
  local_20 = &local_c;
  FUN_14005872a(&DAT_1401cc7f8,4);
  FUN_1400d3740(&LAB_14007c2a2);
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_48);
}

