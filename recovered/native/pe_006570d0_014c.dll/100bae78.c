/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bae78 */

int __fastcall FUN_100bae78(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 local_b8;
  int local_b4 [4];
  int local_a4;
  uint local_94 [8];
  uint local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  uint *local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint *local_30;
  int *local_2c;
  int local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_b8;
  local_18 = &LAB_100c1d40;
  local_1c = ExceptionList;
  iVar1 = 1;
  if (DAT_1039cae8 == 0) {
    local_60 = 0;
    local_58 = 0;
    ExceptionList = &local_1c;
    local_30 = param_1;
    if (DAT_1039ca4c < 0x30000) {
      local_14 = 6;
      local_64 = (int *)(param_1[1] + *param_1);
      FUN_100b1566(param_1,&local_64,"00 00 00 00 C7 ?? C0 BD F0 FF");
      local_14 = 8;
      local_48 = local_94;
      local_54 = 0;
      local_4c = 0;
      local_70 = local_b4;
      FUN_100b1f98(1,&local_70,&local_48);
      local_14 = 9;
      FUN_100b1127();
      local_14 = 10;
      FUN_10004eae();
      local_60 = CONCAT44(uStack_44,local_48);
      local_58 = local_40;
      local_48 = (uint *)0x0;
      uStack_44 = 0;
      local_40 = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    else {
      local_14 = 0xb;
      local_64 = (int *)(param_1[1] + *param_1);
      local_21 = 0;
      local_2c = local_b4;
      local_20 = (undefined1 *)&local_b8;
      FUN_100b1566(param_1,&local_64,"E6 00 00 00 66 ?? 7D");
      local_2c = (int *)local_94;
      local_74 = 0xffffffb0;
      local_b8 = 0x50;
      local_21 = 0;
      FUN_100b1566(&local_74,&local_b8,"1F 85 EB 51");
      local_14 = 0xd;
      local_48 = &local_74;
      local_54 = 0;
      local_4c = 0;
      local_70 = local_b4;
      FUN_100b1f98(2,&local_70,&local_48);
      local_14 = 0xe;
      FUN_100b1127();
      local_14 = 0xf;
      FUN_10004eae();
      local_60 = CONCAT44(uStack_44,local_48);
      local_58 = local_40;
      local_48 = (uint *)0x0;
      uStack_44 = 0;
      local_40 = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      iVar1 = 0;
      do {
        local_14 = 0xffffffff;
        local_28 = iVar1;
        FUN_10001fee();
        iVar1 = local_28 + -0x20;
      } while (iVar1 != -0x40);
      local_21 = 1;
      local_2c = (int *)local_94;
    }
    if (local_60._4_4_ - (int)(int *)local_60 == 4) {
      local_54 = 0;
      local_4c = 0;
      if (DAT_1039ca4c < 0x30000) {
        local_14 = 0x12;
        local_74 = *(int *)local_60 - 0x500;
        puVar3 = local_30;
        if (*local_30 < local_74) {
          puVar3 = &local_74;
        }
        FUN_100b1566(puVar3,(int *)local_60,"55 8B EC");
        local_14 = 0x14;
        local_48 = local_94;
        local_70 = (int *)0x0;
        local_6c = 0;
        local_68 = 0;
        local_64 = local_b4;
        FUN_100b1f98(1,&local_64,&local_48);
        local_14 = 0x15;
        FUN_100b1127();
        local_14 = 0x16;
        FUN_10004eae();
        local_54 = CONCAT44(uStack_44,local_48);
        local_4c = local_40;
        local_48 = (uint *)0x0;
        uStack_44 = 0;
        local_40 = 0;
        local_14 = 0xffffffff;
        FUN_10004eae();
        FUN_100b21ee();
        local_14 = 0xffffffff;
        FUN_10001fee();
      }
      else {
        local_14 = 0x17;
        local_74 = *(int *)local_60 - 0x500;
        puVar3 = local_30;
        if (*local_30 < local_74) {
          puVar3 = &local_74;
        }
        FUN_100b1566(puVar3,(int *)local_60,"53 8B DC");
        local_14 = 0x19;
        local_48 = local_94;
        local_70 = (int *)0x0;
        local_6c = 0;
        local_68 = 0;
        local_64 = local_b4;
        FUN_100b1f98(1,&local_64,&local_48);
        local_14 = 0x1a;
        FUN_100b1127();
        local_14 = 0x1b;
        FUN_10004eae();
        local_54 = CONCAT44(uStack_44,local_48);
        local_4c = local_40;
        local_48 = (uint *)0x0;
        uStack_44 = 0;
        local_40 = 0;
        local_14 = 0xffffffff;
        FUN_10004eae();
        FUN_100b21ee();
        local_14 = 0xffffffff;
        FUN_10001fee();
      }
      if ((int)local_54 == local_54._4_4_) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
            DAT_1039c928) {
          FUN_1022c0d0(&DAT_1039c928);
          if (DAT_1039c928 == -1) {
            local_14 = 0x11;
            FUN_10021a06();
            FUN_1022c3a0(&LAB_1002210b);
            local_14 = 0xffffffff;
            FUN_1022c180(&DAT_1039c928);
          }
        }
        local_14 = 0x10;
        FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                     ,0x3b3,&DAT_1032f00c,4,"Failed to refind drawMessagePtr: {:x}",0x25,
                     (int *)local_60);
        local_28 = 0;
      }
      else {
        local_14 = 0x10;
        uVar2 = FUN_100bb8d7();
        local_14 = 0x1c;
        local_28 = CONCAT31((int3)((uint)uVar2 >> 8),local_a4 == 0);
        if (local_a4 != 0) {
          if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
              DAT_1039c928) {
            FUN_1022c0d0(&DAT_1039c928);
            if (DAT_1039c928 == -1) {
              local_14 = 0x1d;
              FUN_10021a06();
              FUN_1022c3a0(&LAB_1002210b);
              local_14 = 0xffffffff;
              FUN_1022c180(&DAT_1039c928);
            }
          }
          local_30 = DAT_1039c914;
          local_14 = 0x1c;
          FUN_100c5628(&local_48,local_b4);
          local_14 = 0x1e;
          FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                       ,0x3b9,&DAT_1032f00c,4,"Failed to hook drawMessagePtr: {}",0x21,&local_48);
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
      if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
      {
        FUN_1022c0d0(&DAT_1039c928);
        if (DAT_1039c928 == -1) {
          local_14 = 5;
          FUN_10021a06();
          FUN_1022c3a0(&LAB_1002210b);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_1039c928);
        }
      }
      local_b4[0] = local_60._4_4_ - (int)(int *)local_60 >> 2;
      local_14 = 4;
      FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x3a6,&DAT_1032f00c,4,"Failed to find drawMessagePtr: {}",0x21,local_b4);
      local_28 = 0;
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    iVar1 = local_28;
  }
  ExceptionList = local_1c;
  return iVar1;
}

