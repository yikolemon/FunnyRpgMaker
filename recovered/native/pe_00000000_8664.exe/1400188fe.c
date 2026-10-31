/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400188fe */

longlong * FUN_1400188fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 local_a0 [8];
  undefined8 local_98 [2];
  undefined1 local_88 [40];
  longlong local_60 [2];
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_14001863a(local_a0);
  plVar1 = *(longlong **)(param_1 + 0xa0);
  plVar5 = plVar1;
  while (plVar5 = (longlong *)*plVar5, plVar5 != plVar1) {
    (**(code **)(*(longlong *)plVar5[3] + 0x10))((longlong *)plVar5[3],&local_50);
    FUN_14002a460(local_a0,local_60,plVar5 + 2);
    puVar4 = local_50;
    local_50 = (undefined8 *)0x0;
    puVar2 = *(undefined8 **)(local_60[0] + 0x18);
    *(undefined8 **)(local_60[0] + 0x18) = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  FUN_14002a295(local_60,param_1 + 8,param_1 + 0x48,param_1 + 0x28,local_a0);
  lVar3 = local_60[0];
  *(undefined1 *)(local_60[0] + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  local_60[0] = 0;
  *param_2 = lVar3;
  FUN_1400022f6(local_88);
  FUN_140018c4e(local_98,local_98[0]);
  thunk_FUN_14018e090(local_98[0],0x20);
  return param_2;
}

