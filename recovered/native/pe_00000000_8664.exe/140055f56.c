/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140055f56 */

longlong * FUN_140055f56(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte local_60 [16];
  undefined1 local_50 [8];
  char local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *local_30;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_14003dcba(local_50);
  if (local_48 == '\x01') {
    local_38 = *(longlong **)
                (*(longlong *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x40) + 8);
    (**(code **)(*local_38 + 8))();
    plVar1 = (longlong *)FUN_14005a4fa(local_40);
    if (local_38 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*local_38 + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = (longlong)*(int *)(*local_30 + 4);
    local_38 = *(longlong **)((longlong)local_30 + lVar3 + 0x48);
    local_40[0] = 0;
    (**(code **)(*plVar1 + 0x40))
              (plVar1,local_60,local_40,(longlong)local_30 + lVar3,
               *(undefined2 *)((longlong)local_30 + lVar3 + 0x58),param_2);
    local_24 = (uint)local_60[0] << 2;
  }
  else {
    local_24 = 0;
  }
  lVar3 = (longlong)*(int *)(*local_30 + 4);
  FUN_140013624((longlong)local_30 + lVar3,
                (uint)(*(longlong *)((longlong)local_30 + lVar3 + 0x48) == 0) << 2 |
                local_24 | *(uint *)((longlong)local_30 + lVar3 + 0x10),0);
  FUN_14003dd7c(local_50);
  return local_30;
}

