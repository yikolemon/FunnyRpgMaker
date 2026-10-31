/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042e52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10042e52(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  undefined4 *local_98;
  int local_94;
  undefined8 local_90;
  undefined1 local_4c [36];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_a8;
  local_18 = 0xffffffff;
  local_1c = &LAB_1005a4f0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if (*(int **)(param_1 + 0x5c) == (int *)0x0) {
    local_a8 = param_1;
    FUN_100446d6();
    local_18 = 0;
    lVar3 = FUN_1022c7e0();
    DAT_1039c938 = DAT_1039c938 + 1;
    if ((int)(uint)((uint)(lVar3 - _DAT_1039c930) < 10000000) <=
        (int)((ulonglong)(lVar3 - _DAT_1039c930) >> 0x20)) {
      _DAT_1039c930 = lVar3;
      local_90 = __alldiv(lVar3,10000000,0);
      FUN_10269d22(local_4c,&local_90);
      FUN_1025bf2e(&local_90,0x40,"%Y-%m-%d %H:%M:%S",local_4c);
      local_98 = (undefined4 *)*param_2;
      local_9c = param_2[5];
      local_a0 = *(int *)(local_a8 + 8);
      local_a4 = *(uint *)(local_a8 + 0x1c);
      local_94 = DAT_1039c938;
      uVar1 = FUN_1025e77b(2);
      iVar2 = local_a8 + 8;
      if (0xf < local_a4) {
        iVar2 = local_a0;
      }
      if (0xf < local_9c) {
        param_2 = local_98;
      }
      FUN_10042fe5(uVar1,"[*** LOG ERROR #%04zu ***] [%s] [%s] %s\n",local_94,&local_90,iVar2,
                   param_2);
    }
    local_18 = 0xffffffff;
    FUN_1022c200(&DAT_103867ec);
    ExceptionList = local_20;
    lVar3 = _DAT_1039c930;
  }
  else {
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)&local_a8;
    (**(code **)(**(int **)(param_1 + 0x5c) + 8))(param_2);
    ExceptionList = local_20;
    lVar3 = CONCAT44(_DAT_1039c934,_DAT_1039c930);
  }
  _DAT_1039c934 = (undefined4)((ulonglong)lVar3 >> 0x20);
  _DAT_1039c930 = (undefined4)lVar3;
  return;
}

