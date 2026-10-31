/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003cc0e */

void __thiscall FUN_1003cc0e(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char *_Str;
  int iVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 local_54 [20];
  undefined1 local_40 [21];
  undefined1 local_2b [3];
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a030;
  local_1c = ExceptionList;
  uVar3 = *(uint *)(param_2 + 0x28);
  ExceptionList = &local_1c;
  if ((int)uVar3 < 1) {
    FUN_1003a106(0,param_1 + 4,param_4);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  else {
    iVar1 = 0;
    local_20 = local_54;
    if (*(char *)(param_1 + 0xd) == '\x01') {
      local_20 = local_54;
      sVar2 = _strlen(*(char **)(param_2 + 0x24));
      iVar1 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = sVar2 + *(int *)(&DAT_102902d4 + iVar1 * 8) +
              (uint)CARRY4(uVar3,*(uint *)(&DAT_102902d0 + iVar1 * 8)) + 1;
    }
    FUN_1003a106(iVar1,param_1 + 4,param_4);
    local_14 = 1;
    _Str = *(char **)(param_2 + 0x24);
    sVar2 = _strlen(_Str);
    FUN_1001909c(_Str,_Str + sVar2);
    iVar1 = param_4[1];
    uVar3 = iVar1 + 1;
    if ((uint)param_4[2] < uVar3) {
      (*(code *)param_4[3])(param_4,uVar3);
      iVar1 = param_4[1];
      uVar3 = iVar1 + 1;
    }
    param_4[1] = uVar3;
    *(undefined1 *)(*param_4 + iVar1) = 0x3a;
    local_24 = *(int *)(param_2 + 0x28);
    iVar1 = -local_24;
    if (-local_24 < 0) {
      iVar1 = local_24;
    }
    iVar1 = FUN_1002472e(local_40,iVar1,0x15);
    local_28 = iVar1;
    if (local_24 < 0) {
      local_28 = iVar1 + -1;
      *(undefined1 *)(iVar1 + -1) = 0x2d;
    }
    FUN_1001909c(local_28,local_2b);
    local_14 = 0xffffffff;
    FUN_1003a17a();
  }
  ExceptionList = local_1c;
  return;
}

