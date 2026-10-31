/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ecd0f */

void FUN_1800ecd0f(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [72];
  undefined8 *local_78;
  undefined8 local_70;
  byte *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  FUN_18002266a(local_c0);
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
  FUN_1800ecf0e(&local_d8,uVar2);
  local_70 = uStack_d0;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  local_50 = 0x8000000000000000;
  bVar1 = *param_1;
  if (bVar1 == 2) {
    uStack_58 = (*(undefined8 **)(param_1 + 8))[1];
    local_40 = 0;
    local_30 = 0x8000000000000000;
    uStack_38 = **(undefined8 **)(param_1 + 8);
  }
  else if (bVar1 == 1) {
    local_60 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    uStack_38 = 0;
    local_30 = 0x8000000000000000;
    local_40 = *local_60;
  }
  else {
    local_50 = 1;
    local_40 = 0;
    uStack_38 = 0;
    if (bVar1 == 0) {
      local_30 = 1;
    }
    else {
      local_30 = 0;
    }
  }
  local_78 = &local_d8;
  local_68 = param_1;
  local_48 = param_1;
  FUN_1800ecf89(local_e8,&local_48,&local_68,&local_78);
  if (param_2 != &local_d8) {
    FUN_1800ad53e(param_2);
    *param_2 = local_d8;
    param_2[1] = uStack_d0;
    param_2[2] = local_c8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
  }
  FUN_1800ee3b6(param_2 + 3,local_c0);
  FUN_18006ae42(&local_d8);
  return;
}

