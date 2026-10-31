/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400abc28 */

void FUN_1400abc28(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (-1 < (longlong)param_2) {
    lVar4 = param_1[1] - *param_1;
    uVar2 = param_1[2] - *param_1;
    uVar3 = (uVar2 >> 1) + uVar2;
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if ((uVar2 >> 1 ^ 0x7fffffffffffffff) < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    lVar1 = FUN_140006280(uVar3);
    local_50 = lVar1 + lVar4;
    local_68 = param_1;
    local_60 = lVar1;
    local_58 = uVar3;
    local_48 = local_50;
    thunk_FUN_1401366a0(local_50,*param_3,param_2 - lVar4);
    local_48 = lVar1 + param_2;
    thunk_FUN_1400498e2(*param_1,param_1[1],lVar1);
    local_60 = 0;
    FUN_14006620a(param_1,lVar1,param_2,uVar3);
    FUN_140066272(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000a2c6();
}

