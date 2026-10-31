/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001ff0f */

uint * FUN_14001ff0f(uint *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  puVar2 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 6)) {
    puVar2 = *(uint **)param_1;
  }
  lVar1 = FUN_14000d806(puVar2,*(undefined8 *)(param_1 + 4),0,puVar3,param_2[2]);
  if (lVar1 == -1) {
    puVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 6)) {
      puVar2 = *(uint **)param_1;
    }
    if (((char)*puVar2 != '[') ||
       (*(char *)((longlong)puVar2 + *(longlong *)(param_1 + 4) + -1) != ']')) {
      lVar1 = FUN_14000d806(puVar2,*(longlong *)(param_1 + 4),0,&DAT_1401705b0,4);
      if (lVar1 == -1) {
        return param_1;
      }
    }
  }
  lVar1 = FUN_14000e108(param_1,0x27,0);
  if (lVar1 == -1) {
    FUN_1400247b0(param_1,0,1,0x27);
    FUN_14000cf50(param_1,0x27);
  }
  else {
    puVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 6)) {
      puVar2 = *(uint **)param_1;
    }
    lVar1 = FUN_14000d806(puVar2,*(undefined8 *)(param_1 + 4),0,&DAT_140139020,7);
    if (lVar1 != -1) {
      FUN_140026112(&local_40,param_1);
      if (param_1 != &local_40) {
        FUN_1400065bc(param_1);
        *(undefined8 *)(param_1 + 4) = local_30;
        *(undefined8 *)(param_1 + 6) = uStack_28;
        *param_1 = local_40;
        param_1[1] = uStack_3c;
        param_1[2] = uStack_38;
        param_1[3] = uStack_34;
        local_30 = 0;
        uStack_28 = 0xf;
        local_40 = local_40 & 0xffffff00;
      }
      FUN_1400017de(&local_40);
    }
    FUN_1400247b0(param_1,0,1,0x22);
    FUN_14000cf50(param_1,0x22);
  }
  return param_1;
}

