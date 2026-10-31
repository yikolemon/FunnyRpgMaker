/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f8f8 */

ulonglong FUN_18001f8f8(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined4 local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar4 = (*param_2 - *param_1) * 8 + param_2[1];
  if (param_3 != 0) {
    if ((param_1[3] ^ 0x7fffffffffffffffU) < param_3) {
      FUN_18001fac2();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    local_30[0] = 0;
    FUN_18001fad4(param_1,param_3 + param_1[3] + 0x1f >> 5);
    uVar1 = param_1[3];
    if (uVar1 == 0) {
      param_1[3] = param_3;
    }
    else {
      lVar2 = *param_1;
      local_50 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) + lVar2 + (uVar1 >> 5) * 4;
      local_48 = (ulonglong)((uint)uVar1 & 0x1f);
      param_3 = param_3 + uVar1;
      param_1[3] = param_3;
      local_40 = ((longlong)param_3 >> 0x3f & 0xe000000000000000U) + lVar2 + (param_3 >> 5) * 4;
      local_38 = (ulonglong)((uint)param_3 & 0x1f);
      local_60 = ((longlong)uVar4 >> 0x3f & 0xe000000000000000U) + lVar2 + (uVar4 >> 5) * 4;
      local_58 = (ulonglong)((uint)uVar4 & 0x1f);
      FUN_18001fd9a(local_30);
    }
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_88)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
}

