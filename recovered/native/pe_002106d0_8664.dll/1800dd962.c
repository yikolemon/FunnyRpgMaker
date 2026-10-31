/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd962 */

void FUN_1800dd962(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar2 = param_1[2] - *param_1 >> 4;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0xfffffffffffffff;
  }
  if (uVar3 >> 0x3c == 0) {
    lVar4 = param_1[1] - *param_1;
    lVar1 = FUN_1800013e0(uVar3 << 4);
    lVar5 = lVar1 + lVar4;
    uVar2 = lVar4 >> 4;
    local_68 = param_1;
    local_60 = lVar1;
    local_58 = uVar3;
    local_50 = lVar5;
    if (param_2 != uVar2) {
      lVar4 = uVar2 - param_2;
      local_48 = lVar5;
      do {
        FUN_18004c358(lVar5,0);
        lVar5 = lVar5 + 0x10;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    local_48 = lVar5;
    FUN_180016852(*param_1,param_1[1],lVar1,param_1);
    local_60 = 0;
    FUN_1800168c0(param_1,lVar1,param_2,uVar3);
    FUN_180016bd8(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

