/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ab958 */

void FUN_1400ab958(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = (longlong)param_1 + 0x40c;
  lVar1 = 0x8000;
  do {
    local_2c = 0;
    FUN_1400abb77(lVar2 + -0x400,lVar2,&local_2c);
    lVar2 = lVar2 + 0x400;
    lVar1 = lVar1 + -0x400;
  } while (lVar1 != 0);
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

