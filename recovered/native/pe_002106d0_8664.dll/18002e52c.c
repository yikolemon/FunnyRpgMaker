/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002e52c */

uint * FUN_18002e52c(uint *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = param_2;
  FUN_1800262ec(&local_50,&local_48);
  plVar2 = (longlong *)FUN_18000b3c1(&local_48);
  if ((longlong *)CONCAT44(uStack_3c,uStack_40) != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)CONCAT44(uStack_3c,uStack_40) + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
  if (local_38 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  param_1[4] = (uint)local_38;
  param_1[5] = local_38._4_4_;
  param_1[6] = (uint)uStack_30;
  param_1[7] = uStack_30._4_4_;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  local_38 = 0;
  uStack_30 = 0xf;
  local_48 = local_48 & 0xffffff00;
  *(undefined1 *)(param_1 + 8) = uVar1;
  local_28 = param_1;
  FUN_180001ef2(&local_48);
  return param_1;
}

