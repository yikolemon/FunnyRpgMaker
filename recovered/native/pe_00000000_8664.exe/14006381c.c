/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006381c */

void FUN_14006381c(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  if (param_2 < param_3) {
    uVar3 = ((param_3 >> 6) + 1) - (ulonglong)((param_3 & 0x3f) == 0);
    puVar1 = (ulonglong *)(*param_1 + (param_2 >> 6) * 8);
    *puVar1 = *puVar1 & ~(-1L << ((byte)param_2 & 0x3f));
    uVar2 = (param_2 >> 6) + 1;
    if (uVar2 < uVar3) {
      local_10 = 0;
      FUN_14006450a(*param_1 + uVar2 * 8,*param_1 + uVar3 * 8);
    }
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

