/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140022f40 */

longlong * FUN_140022f40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte local_70 [16];
  undefined1 local_60 [8];
  char local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_1;
  FUN_14000cd6c(local_60);
  if (local_58 == '\x01') {
    local_48 = *(longlong **)
                (*(longlong *)((longlong)local_40 + (longlong)*(int *)(*local_40 + 4) + 0x40) + 8);
    (**(code **)(*local_48 + 8))();
    plVar1 = (longlong *)FUN_140023146(local_50);
    if (local_48 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = (longlong)*(int *)(*local_40 + 4);
    local_48 = *(longlong **)((longlong)local_40 + lVar3 + 0x48);
    local_50[0] = 0;
    (**(code **)(*plVar1 + 0x28))
              (plVar1,local_70,local_50,(longlong)local_40 + lVar3,
               *(undefined1 *)((longlong)local_40 + lVar3 + 0x58),param_2);
    local_34 = (uint)local_70[0] << 2;
  }
  else {
    local_34 = 0;
  }
  lVar3 = (longlong)*(int *)(*local_40 + 4);
  FUN_14000a9f0((longlong)local_40 + lVar3,
                (uint)(*(longlong *)((longlong)local_40 + lVar3 + 0x48) == 0) << 2 |
                local_34 | *(uint *)((longlong)local_40 + lVar3 + 0x10),0);
  FUN_14000ce2e(local_60);
  return local_40;
}

