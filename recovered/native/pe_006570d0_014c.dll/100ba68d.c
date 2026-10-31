/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba68d */

uint * __fastcall FUN_100ba68d(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  short *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined8 *local_50;
  undefined8 *local_4c;
  undefined4 local_48;
  undefined8 *local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  short **local_2c;
  undefined1 local_28 [4];
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_80;
  local_18 = &LAB_100c1d30;
  local_1c = ExceptionList;
  local_24 = (uint *)0x1;
  if (DAT_1039cae4 == 0) {
    local_60 = 0;
    local_58 = 0;
    local_24 = param_1;
    ExceptionList = &local_1c;
    if (DAT_1039ca4c < 0x30000) {
      local_14 = 9;
      local_28 = (undefined1  [4])(param_1[1] + *param_1);
      FUN_100b1566(param_1,local_28,"B8 01 00 00 00 85 C0 0F 84 ???? 83 7D 10 00 7E");
      local_14 = 0xb;
      local_44 = &local_60;
      local_50 = (undefined8 *)0x0;
      local_4c = (undefined8 *)0x0;
      local_48 = 0;
      local_2c = &local_80;
      FUN_100b1f98(1,&local_2c,&local_44);
      local_14 = 0xc;
      FUN_100b1127();
      local_14 = 0xd;
      FUN_10004eae();
      local_60 = CONCAT44(uStack_40,local_44);
      local_58 = local_3c;
      local_44 = (undefined8 *)0x0;
      uStack_40 = 0;
      local_3c = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    else {
      local_14 = 0xe;
      local_28 = (undefined1  [4])(param_1[1] + *param_1);
      local_20 = (undefined1 *)&local_80;
      FUN_100b1566(param_1,local_28,"7E ?? AB AA AA AA");
      local_14 = 0x10;
      local_44 = &local_60;
      local_50 = (undefined8 *)0x0;
      local_4c = (undefined8 *)0x0;
      local_48 = 0;
      local_2c = &local_80;
      FUN_100b1f98(1,&local_2c,&local_44);
      local_14 = 0x11;
      FUN_100b1127();
      local_14 = 0x12;
      FUN_10004eae();
      local_60 = CONCAT44(uStack_40,local_44);
      local_58 = local_3c;
      local_44 = (undefined8 *)0x0;
      uStack_40 = 0;
      local_3c = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    if (local_60._4_4_ - (int)(int *)local_60 == 4) {
      local_14 = 5;
      local_28 = (undefined1  [4])(*(int *)local_60 - 0x50);
      puVar3 = local_24;
      if ((short *)*local_24 < (uint)local_28) {
        puVar3 = (uint *)local_28;
      }
      FUN_100b1566(puVar3,(int *)local_60,"83 EC");
      local_14 = 7;
      local_50 = &local_60;
      local_44 = (undefined8 *)0x0;
      uStack_40 = 0;
      local_3c = 0;
      local_2c = &local_80;
      FUN_100b1f98(1,&local_2c,&local_50);
      local_14 = 8;
      FUN_100b1127();
      local_14 = 0xffffffff;
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
      local_14 = 0x13;
      if (local_50 == local_4c) {
        if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
             DAT_1039c928) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
          local_14 = 0x14;
          FUN_10021a06();
          FUN_1022c3a0(&LAB_1002210b);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_1039c928);
        }
        local_14 = 0x13;
        FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                     ,0x381,&DAT_1032f04a,4,"Failed to refind passThroughSteady: {:x}",0x28,
                     (int *)local_60);
        local_24 = (uint *)0x0;
      }
      else {
        local_54 = *(int *)((int)local_4c + -4);
        uVar1 = *local_24;
        local_24 = (uint *)(local_54 - 3U);
        if (local_54 - 3U < uVar1) {
          local_24 = (uint *)uVar1;
        }
        local_80 = (short *)0x0;
        local_7c = 0;
        local_78 = 0;
        local_44 = (undefined8 *)(local_28 + 3);
        local_28._0_3_ = 0xec8b55;
        local_2c = (short **)local_28;
        FUN_10044618(3,&local_2c,&local_44);
        local_14 = 0xffffffff;
        FUN_10004eae();
        local_14 = 0x13;
        uVar2 = FUN_100bae49();
        local_14 = 0x15;
        local_24 = (uint *)CONCAT31((int3)((uint)uVar2 >> 8),local_70 == 0);
        if (local_70 != 0) {
          if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
               DAT_1039c928) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
            local_14 = 0x16;
            FUN_10021a06();
            FUN_1022c3a0(&LAB_1002210b);
            local_14 = 0xffffffff;
            FUN_1022c180(&DAT_1039c928);
          }
          local_54 = DAT_1039c914;
          local_14 = 0x15;
          FUN_100c5628(&local_44,&local_80);
          local_14 = 0x17;
          FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                       ,0x38e,&DAT_1032f04a,4,"Failed to hook passThroughSteady: {}",0x24,&local_44)
          ;
          local_14 = 0xffffffff;
          FUN_10001fee();
        }
        local_14 = 0xffffffff;
        FUN_10001134();
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    else {
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928
          ) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
        local_14 = 4;
        FUN_10021a06();
        FUN_1022c3a0(&LAB_1002210b);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039c928);
      }
      local_80 = (short *)(local_60._4_4_ - (int)(int *)local_60 >> 2);
      local_14 = 3;
      FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x37b,&DAT_1032f04a,4,"Failed to find passThroughSteady: {}",0x24,&local_80);
      local_24 = (uint *)0x0;
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  ExceptionList = local_1c;
  return local_24;
}

