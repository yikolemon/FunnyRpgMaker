/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028958a */

void FUN_14028958a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = param_2 - (lVar2 - lVar1);
  if (param_2 < (ulonglong)(lVar2 - lVar1)) {
    param_1[1] = lVar1 + param_2;
  }
  else if (lVar5 != 0) {
    if ((ulonglong)(param_1[2] - lVar1) < param_2) {
      local_40 = 0xfffffffffffffffe;
      if (-1 < (longlong)param_2) {
        lVar1 = *param_1;
        lVar2 = param_1[1];
        uVar3 = param_1[2] - lVar1;
        uVar4 = (uVar3 >> 1) + uVar3;
        if (uVar4 <= param_2) {
          uVar4 = param_2;
        }
        if ((uVar3 >> 1 ^ 0x7fffffffffffffff) < uVar3) {
          uVar4 = 0x7fffffffffffffff;
        }
        lVar5 = FUN_1402128b0(uVar4);
        local_50 = (lVar2 - lVar1) + lVar5;
        local_68 = param_1;
        local_60 = lVar5;
        local_58 = uVar4;
        local_48 = local_50;
        FUN_1402276eb(local_50,lVar5 + param_2);
        local_48 = lVar5 + param_2;
        thunk_FUN_14021bb5c(*param_1,param_1[1],lVar5);
        local_60 = 0;
        FUN_14025f296(param_1,lVar5,param_2,uVar4);
        FUN_14025f2fe(&local_68);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    lVar5 = lVar5 + lVar2;
    local_40 = 0x1402895d8;
    FUN_1402276eb(lVar2,lVar5);
    param_1[1] = lVar5;
  }
  return;
}

