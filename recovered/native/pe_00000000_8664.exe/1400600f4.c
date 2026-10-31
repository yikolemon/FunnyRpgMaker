/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400600f4 */

void FUN_1400600f4(longlong *param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = param_1[3];
  local_9 = param_3;
  if (uVar1 < param_2) {
    local_20 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) + (uVar1 >> 5) * 4 + *param_1;
    local_18 = (ulonglong)((uint)uVar1 & 0x1f);
    local_58 = &local_9;
    FUN_14000bc34(param_1,local_30);
  }
  else if (param_2 < uVar1) {
    local_40 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) + *param_1 + (uVar1 >> 5) * 4;
    local_38 = (ulonglong)((uint)uVar1 & 0x1f);
    local_50 = ((longlong)param_2 >> 0x3f & 0xe000000000000000U) + *param_1 + (param_2 >> 5) * 4;
    local_48 = (ulonglong)((uint)param_2 & 0x1f);
    FUN_1400601f0(param_1,local_30);
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_78);
}

