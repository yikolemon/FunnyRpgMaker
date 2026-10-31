/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140230dc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140230dc8(longlong *param_1,longlong *param_2,ulonglong param_3)

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
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  uVar4 = (*param_2 - *param_1) * 8 + param_2[1];
  if (param_3 != 0) {
    if ((param_1[3] ^ 0x7fffffffffffffffU) < param_3) {
      FUN_140230f92();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    local_30[0] = 0;
    FUN_140230fa4(param_1,param_3 + param_1[3] + 0x1f >> 5);
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
      FUN_14023126a(local_30);
    }
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_88)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_88);
}

