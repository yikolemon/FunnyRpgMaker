/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140091fd4 */

void FUN_140091fd4(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_38;
  if (param_2 < param_3) {
    uVar3 = ((param_3 >> 6) + 1) - (ulonglong)((param_3 & 0x3f) == 0);
    puVar1 = (ulonglong *)(*param_1 + (param_2 >> 6) * 8);
    *puVar1 = *puVar1 & ~(-1L << ((byte)param_2 & 0x3f));
    uVar2 = (param_2 >> 6) + 1;
    if (uVar2 < uVar3) {
      local_10 = 0;
      FUN_140092d8b(*param_1 + uVar2 * 8,*param_1 + uVar3 * 8);
    }
  }
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_38);
}

