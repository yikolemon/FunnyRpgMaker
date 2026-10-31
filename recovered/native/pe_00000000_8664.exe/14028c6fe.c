/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028c6fe */

longlong * FUN_14028c6fe(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_38 [8];
  char local_30;
  longlong *local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    local_28 = param_1;
    FUN_14028c56e(local_38);
    if (local_30 == '\x01') {
      iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
      local_1c = (uint)(iVar2 == -1) << 2;
      lVar3 = (longlong)*(int *)(*local_28 + 4);
      FUN_1402856fa((longlong)local_28 + lVar3,
                    (uint)(*(longlong *)((longlong)local_28 + lVar3 + 0x48) == 0) << 2 |
                    local_1c | *(uint *)((longlong)local_28 + lVar3 + 0x10),0);
    }
    FUN_14028c66e(local_38);
    param_1 = local_28;
  }
  return param_1;
}

