/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007bfe2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007bfe2(void)

{
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong *local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  local_18 = &local_8;
  local_a = 1;
  _DAT_1401cc7a0 = 0;
  uRam00000001401cc7a8 = 0;
  _DAT_1401cc7b0 = 0;
  local_20 = &local_a;
  FUN_14005872a(&DAT_1401cc7a0,2);
  FUN_1400d3740(&LAB_14007c06e);
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_48);
}

