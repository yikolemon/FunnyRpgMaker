/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078bd6 */

longlong * FUN_140078bd6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  param_1[1] = 0;
  local_30 = param_1;
  FUN_14000c914(&local_40,param_1,1);
  if ((param_3 < 1) || (local_38 == '\0')) {
    local_24 = 0;
  }
  else {
    plVar1 = *(longlong **)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    local_30[1] = lVar2;
    local_24 = (uint)(lVar2 != param_3) * 3;
  }
  lVar2 = (longlong)*(int *)(*local_30 + 4);
  FUN_14000a9f0((longlong)local_30 + lVar2,
                (uint)(*(longlong *)((longlong)local_30 + lVar2 + 0x48) == 0) << 2 |
                local_24 | *(uint *)((longlong)local_30 + lVar2 + 0x10),0);
  plVar1 = *(longlong **)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return local_30;
}

