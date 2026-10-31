/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003d3fe */

longlong * FUN_14003d3fe(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_60;
  longlong local_58;
  longlong *local_48 [2];
  longlong *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = (longlong)*(int *)(*param_1 + 4);
  FUN_140013624((longlong)param_1 + lVar2,
                (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                *(uint *)((longlong)param_1 + lVar2 + 0x10) & 0xfffffffe,0);
  local_38 = param_1;
  FUN_14003d894(local_48,param_1,1);
  if ((*(byte *)((longlong)local_38 + (longlong)*(int *)(*local_38 + 4) + 0x10) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)local_38 + (longlong)*(int *)(*local_38 + 4) + 0x48);
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_60,param_2,param_3,1);
    local_2c = (uint)(local_58 + local_60 == -1) * 2;
  }
  else {
    local_2c = 0;
  }
  lVar2 = (longlong)*(int *)(*local_38 + 4);
  FUN_140013624((longlong)local_38 + lVar2,
                (uint)(*(longlong *)((longlong)local_38 + lVar2 + 0x48) == 0) << 2 |
                local_2c | *(uint *)((longlong)local_38 + lVar2 + 0x10),0);
  plVar1 = *(longlong **)((longlong)local_48[0] + (longlong)*(int *)(*local_48[0] + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return local_38;
}

