/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ed8ab */

void FUN_1800ed8ab(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined8 local_90;
  byte *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  bVar1 = *param_1;
  uVar2 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 8);
    }
    else if (bVar1 == 2) {
      uVar2 = (*(longlong **)(param_1 + 8))[1] - **(longlong **)(param_1 + 8) >> 4;
    }
    else {
      uVar2 = 1;
    }
  }
  FUN_1800eda40(&local_48,uVar2);
  local_90 = uStack_40;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_70 = 0x8000000000000000;
  bVar1 = *param_1;
  if (bVar1 == 2) {
    uStack_78 = (*(undefined8 **)(param_1 + 8))[1];
    local_60 = 0;
    local_50 = 0x8000000000000000;
    uStack_58 = **(undefined8 **)(param_1 + 8);
  }
  else if (bVar1 == 1) {
    local_80 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    uStack_58 = 0;
    local_50 = 0x8000000000000000;
    local_60 = *local_80;
  }
  else {
    local_70 = 1;
    local_60 = 0;
    uStack_58 = 0;
    if (bVar1 == 0) {
      local_50 = 1;
    }
    else {
      local_50 = 0;
    }
  }
  local_98 = &local_48;
  local_88 = param_1;
  local_68 = param_1;
  FUN_1800edaa4(local_a8,&local_68,&local_88,&local_98);
  if (param_2 != &local_48) {
    FUN_180060538(param_2);
    *param_2 = local_48;
    param_2[1] = uStack_40;
    param_2[2] = local_38;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
  }
  FUN_180060538(&local_48);
  return;
}

