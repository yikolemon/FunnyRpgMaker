/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003317e */

void FUN_14003317e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  char *_Str;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_78 [24];
  longlong local_60;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_2 + 0x40);
  if ((longlong)(int)uVar1 < 1) {
    FUN_140030a1c(local_58,0,param_1 + 8,param_4);
    FUN_140030a90(local_58);
  }
  else {
    if (*(char *)(param_1 + 0x15) == '\x01') {
      sVar5 = strlen(*(char **)(param_2 + 0x38));
      uVar3 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> uVar3 == 0; uVar3 = uVar3 - 1) {
        }
      }
      lVar6 = sVar5 + ((ulonglong)
                       ((longlong)(int)uVar1 + *(longlong *)(&DAT_1401c9bf0 + (ulonglong)uVar3 * 8))
                      >> 0x20) + 1;
    }
    else {
      lVar6 = 0;
    }
    FUN_140030a1c(local_58,lVar6,param_1 + 8,param_4);
    _Str = *(char **)(param_2 + 0x38);
    sVar5 = strlen(_Str);
    FUN_140019fc2(param_4,_Str,_Str + sVar5);
    lVar6 = param_4[1];
    uVar7 = lVar6 + 1;
    if ((ulonglong)param_4[2] < uVar7) {
      (*(code *)param_4[3])(param_4);
      lVar6 = param_4[1];
      uVar7 = lVar6 + 1;
    }
    param_4[1] = uVar7;
    *(undefined1 *)(*param_4 + lVar6) = 0x3a;
    iVar2 = *(int *)(param_2 + 0x40);
    iVar4 = -iVar2;
    if (-iVar2 < 0) {
      iVar4 = iVar2;
    }
    lVar6 = FUN_14001a250(local_78,iVar4,0x15);
    local_60 = lVar6;
    if (iVar2 < 0) {
      local_60 = lVar6 + -1;
      *(undefined1 *)(lVar6 + -1) = 0x2d;
    }
    FUN_140019fc2(param_4,local_60);
    FUN_140030a90(local_58);
  }
  return;
}

