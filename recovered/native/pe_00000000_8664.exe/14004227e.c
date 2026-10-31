/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004227e */

longlong * FUN_14004227e(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_40 [8];
  char local_38;
  longlong *local_30;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_14003dcba(local_40);
  local_24 = 4;
  if (local_38 == '\x01') {
    if (param_3 < 1) {
      local_24 = 0;
    }
    else {
      plVar1 = *(longlong **)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48);
      lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
      local_24 = (uint)(lVar2 != param_3) << 2;
    }
  }
  lVar2 = (longlong)*(int *)(*local_30 + 4);
  FUN_140013624((longlong)local_30 + lVar2,
                (uint)(*(longlong *)((longlong)local_30 + lVar2 + 0x48) == 0) << 2 |
                local_24 | *(uint *)((longlong)local_30 + lVar2 + 0x10),0);
  FUN_14003dd7c(local_40);
  return local_30;
}

