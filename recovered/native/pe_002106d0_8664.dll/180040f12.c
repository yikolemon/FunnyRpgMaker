/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180040f12 */

void FUN_180040f12(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_2 + 0x40)) {
    _Str = *(char **)(param_2 + 0x38);
    sVar3 = strlen(_Str);
    FUN_180018bde(param_4,_Str,_Str + sVar3);
    lVar4 = param_4[1];
    uVar5 = lVar4 + 1;
    if ((ulonglong)param_4[2] < uVar5) {
      (*(code *)param_4[3])(param_4);
      lVar4 = param_4[1];
      uVar5 = lVar4 + 1;
    }
    param_4[1] = uVar5;
    *(undefined1 *)(*param_4 + lVar4) = 0x3a;
    iVar1 = *(int *)(param_2 + 0x40);
    iVar2 = -iVar1;
    if (-iVar1 < 0) {
      iVar2 = iVar1;
    }
    local_28 = FUN_180024c02(local_40,iVar2,0x15);
    if (iVar1 < 0) {
      *(undefined1 *)(local_28 + -1) = 0x2d;
      local_28 = local_28 + -1;
    }
    FUN_180018bde(param_4,local_28);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

