/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a6c2 */

void FUN_14008a6c2(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (-1 < (longlong)param_2) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    uVar4 = param_1[2] - lVar1;
    uVar5 = (uVar4 >> 1) + uVar4;
    if (uVar5 <= param_2) {
      uVar5 = param_2;
    }
    if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    lVar3 = FUN_140006280(uVar5);
    local_50 = (lVar2 - lVar1) + lVar3;
    local_68 = param_1;
    local_60 = lVar3;
    local_58 = uVar5;
    local_48 = local_50;
    FUN_140016e3e(local_50,lVar3 + param_2);
    local_48 = lVar3 + param_2;
    thunk_FUN_1400498e2(*param_1,param_1[1],lVar3);
    local_60 = 0;
    FUN_14006620a(param_1,lVar3,param_2,uVar5);
    FUN_140066272(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000a2c6();
}

