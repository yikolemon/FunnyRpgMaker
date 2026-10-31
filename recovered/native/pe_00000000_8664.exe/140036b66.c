/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036b66 */

void FUN_140036b66(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

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
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_2 + 0x40)) {
    _Str = *(char **)(param_2 + 0x38);
    sVar3 = strlen(_Str);
    FUN_140019fc2(param_4,_Str,_Str + sVar3);
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
    local_28 = FUN_14001a250(local_40,iVar2,0x15);
    if (iVar1 < 0) {
      *(undefined1 *)(local_28 + -1) = 0x2d;
      local_28 = local_28 + -1;
    }
    FUN_140019fc2(param_4,local_28);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
}

