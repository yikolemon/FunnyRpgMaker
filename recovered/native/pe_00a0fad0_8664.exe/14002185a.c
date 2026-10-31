/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002185a */

uint * FUN_14002185a(longlong param_1,uint *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  uint *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0xf;
  param_2[7] = 0;
  local_20 = param_2;
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    if (*(char *)(param_1 + 0xa5) == '\x01') {
      FUN_140006874(&local_40,param_3);
      plVar1 = *(longlong **)(param_1 + 0x78);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9e50();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_60,&local_40);
      puVar2 = local_20;
      if (local_20 != &local_60) {
        FUN_1400065bc(local_20);
        *(undefined8 *)(puVar2 + 4) = local_50;
        *(undefined8 *)(puVar2 + 6) = uStack_48;
        *puVar2 = local_60;
        puVar2[1] = uStack_5c;
        puVar2[2] = uStack_58;
        puVar2[3] = uStack_54;
        local_50 = 0;
        uStack_48 = 0xf;
        local_60 = local_60 & 0xffffff00;
      }
      FUN_1400017de(&local_60);
      FUN_1400017de(&local_40);
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x78);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9e50();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
      puVar2 = local_20;
      if (local_20 != &local_40) {
        FUN_1400065bc(local_20);
        *(undefined8 *)(puVar2 + 4) = local_30;
        *(undefined8 *)(puVar2 + 6) = uStack_28;
        *puVar2 = local_40;
        puVar2[1] = uStack_3c;
        puVar2[2] = uStack_38;
        puVar2[3] = uStack_34;
        local_30 = 0;
        uStack_28 = 0xf;
        local_40 = local_40 & 0xffffff00;
      }
      FUN_1400017de(&local_40);
    }
  }
  return local_20;
}

