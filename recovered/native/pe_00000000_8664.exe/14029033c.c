/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029033c */

longlong FUN_14029033c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x80) != 0) ||
     (lVar2 = FUN_140455f00(param_2,param_3,param_4), lVar2 == 0)) {
    return 0;
  }
  FUN_140285e22(param_1,lVar2,1);
  local_28 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
  (**(code **)(*local_28 + 8))();
  plVar3 = (longlong *)FUN_140286d15(local_30);
  cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (cVar1 == '\0') {
    *(longlong *)(param_1 + 0x18) = param_1 + 8;
    *(longlong *)(param_1 + 0x20) = param_1 + 0x10;
    *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
    *(longlong *)(param_1 + 0x40) = param_1 + 0x30;
    *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x58) = param_1 + 0x4c;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  *(longlong **)(param_1 + 0x68) = plVar3;
  if (local_28 == (longlong *)0x0) {
    return param_1;
  }
  puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x10))();
  if (puVar4 == (undefined8 *)0x0) {
    return param_1;
  }
  (**(code **)*puVar4)(puVar4,1);
  return param_1;
}

