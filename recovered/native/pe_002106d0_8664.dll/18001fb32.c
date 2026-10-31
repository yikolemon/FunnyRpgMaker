/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001fb32 */

void FUN_18001fb32(longlong *param_1,ulonglong param_2,undefined8 param_3)

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
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  uVar2 = param_1[2] - *param_1 >> 2;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0x3fffffffffffffff;
  }
  if (uVar3 >> 0x3e == 0) {
    lVar4 = param_1[1] - *param_1;
    lVar1 = FUN_1800013e0(uVar3 * 4);
    local_50 = lVar1 + lVar4;
    local_68 = param_1;
    local_60 = lVar1;
    local_58 = uVar3;
    local_48 = local_50;
    local_48 = FUN_18001fc70(local_50,param_2 - (lVar4 >> 2),param_3,param_1);
    thunk_FUN_18001fd6c(*param_1,param_1[1],lVar1);
    local_60 = 0;
    FUN_18001fcbc(param_1,lVar1,param_2,uVar3);
    FUN_18001fd26(&local_68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

