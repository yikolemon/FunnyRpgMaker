/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400601f0 */

longlong * FUN_1400601f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    uVar8 = 0;
    uVar4 = 0;
    lVar5 = lVar1;
    lVar6 = lVar1;
  }
  else {
    uVar7 = (*param_3 - lVar1) * 8 + param_3[1];
    uVar8 = (ulonglong)((uint)uVar7 & 0x1f);
    uVar4 = (*param_4 - lVar1) * 8 + param_4[1];
    lVar5 = lVar1 + (uVar4 >> 5) * 4;
    if ((longlong)uVar4 < 0) {
      lVar5 = lVar5 + -0x2000000000000000;
    }
    uVar4 = (ulonglong)((uint)uVar4 & 0x1f);
    lVar6 = ((longlong)uVar7 >> 0x3f & 0xe000000000000000U) + lVar1 + (uVar7 >> 5) * 4;
  }
  if ((lVar6 != lVar5) || (lVar3 = lVar1, (int)uVar8 != (int)uVar4)) {
    local_58 = ((longlong)uVar2 >> 0x3f & 0xe000000000000000U) + lVar1 + (uVar2 >> 5) * 4;
    local_50 = (ulonglong)((uint)uVar2 & 0x1f);
    local_68 = lVar5;
    local_60 = uVar4;
    local_48 = lVar6;
    local_40 = uVar8;
    FUN_140010c21(&local_78);
    FUN_140010bb2(param_1,local_70 + (local_78 - *param_1) * 8);
    lVar3 = *param_1;
  }
  *param_2 = lVar3;
  param_2[1] = 0;
  FUN_14000c1f8(param_2,uVar8 + (lVar6 - lVar1) * 8);
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_98)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_98);
}

