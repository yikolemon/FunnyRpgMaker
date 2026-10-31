/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140010a8e */

longlong * FUN_140010a8e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    local_30 = 0;
    local_38 = lVar1;
  }
  else {
    uVar3 = (*param_3 - lVar1) * 8 + param_3[1];
    local_38 = lVar1 + (uVar3 >> 5) * 4;
    if ((longlong)uVar3 < 0) {
      local_38 = local_38 + -0x2000000000000000;
    }
    local_30 = (ulonglong)((uint)uVar3 & 0x1f);
  }
  local_48 = ((longlong)uVar2 >> 0x3f & 0xe000000000000000U) + lVar1 + (uVar2 >> 5) * 4;
  local_40 = (ulonglong)((uint)uVar2 & 0x1f);
  lVar1 = local_30 + (local_38 - lVar1) * 8;
  local_58 = local_38 + (ulonglong)(local_30 == 0x1f) * 4;
  local_50 = 0;
  if (local_30 != 0x1f) {
    local_50 = local_30 + 1;
  }
  FUN_140010c21(local_68);
  FUN_140010bb2(param_1,param_1[3] + -1);
  *param_2 = *param_1;
  param_2[1] = 0;
  FUN_14000c1f8(param_2,lVar1);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_88)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_88);
}

