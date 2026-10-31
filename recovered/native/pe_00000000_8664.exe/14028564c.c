/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028564c */

ulonglong FUN_14028564c(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  local_20 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  (**(code **)(*local_20 + 8))();
  plVar2 = (longlong *)FUN_14022d5bc(local_28);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,CONCAT71(uVar4,param_2) & 0xffffffff);
  if (local_20 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*local_20 + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return CONCAT71(uVar4,uVar1) & 0xffffffff;
}

