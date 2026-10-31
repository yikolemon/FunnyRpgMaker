/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b0998 */

undefined4 __fastcall FUN_100b0998(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int local_74;
  int local_70 [8];
  int *local_50;
  int local_4c [4];
  int *local_3c;
  undefined8 local_38;
  undefined4 local_30;
  int **local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_74;
  local_18 = &LAB_100c1b90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_3c = param_1;
  piVar1 = &local_74;
  if (DAT_1039c960 == 0) {
    local_38 = 0;
    local_30 = 0;
    if (DAT_1039ca4c < 0x30000) {
      local_14 = 4;
      local_4c[0] = param_1[1] + *param_1;
      FUN_100b1566(param_1,local_4c,"83 7C 24 04 E0 77 22 FF 74 24 04");
      local_14 = 6;
      local_2c = &local_50;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[3] = 0;
      local_50 = local_70;
      FUN_100b1f98(1,local_2c,&local_2c);
      local_14 = 7;
      FUN_100b1127();
      local_14 = 8;
      FUN_10004eae();
      local_38 = CONCAT44(uStack_28,local_2c);
      local_30 = local_24;
      local_2c = (int **)0x0;
      uStack_28 = 0;
      local_24 = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    else {
      local_14 = 9;
      local_4c[0] = param_1[1] + *param_1;
      local_20 = (undefined1 *)&local_74;
      FUN_100b1566(param_1,local_4c,"8B FF 55 8B EC 56 8B 75 08 83 FE E0");
      local_14 = 0xb;
      local_2c = &local_50;
      local_4c[1] = 0;
      local_4c[2] = 0;
      local_4c[3] = 0;
      local_50 = local_70;
      FUN_100b1f98(1,local_2c,&local_2c);
      local_14 = 0xc;
      FUN_100b1127();
      local_14 = 0xd;
      FUN_10004eae();
      local_38 = CONCAT44(uStack_28,local_2c);
      local_30 = local_24;
      local_2c = (int **)0x0;
      uStack_28 = 0;
      local_24 = 0;
      local_14 = 0xffffffff;
      FUN_10004eae();
      FUN_100b21ee();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    local_74 = local_38._4_4_ - (int)(int *)local_38;
    if (local_74 == 4) {
      DAT_1039c960 = *(int *)local_38;
    }
    else {
      if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
      {
        FUN_1022c0d0(&DAT_1039c928);
        if (DAT_1039c928 == -1) {
          local_14 = 3;
          FUN_10021a06();
          FUN_1022c3a0(&LAB_1002210b);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_1039c928);
        }
      }
      local_70[0] = local_38._4_4_ - (int)(int *)local_38 >> 2;
      local_14 = 2;
      FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x40a,&DAT_1032f028,4,"Failed to find findMalloc: {}",0x1d,local_70);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    piVar1 = (int *)local_20;
    if (local_74 == 4) goto code_r0x100b0c1a;
LAB_100b0e6c:
    uVar2 = 0;
  }
  else {
code_r0x100b0c1a:
    local_20 = (undefined1 *)piVar1;
    if (DAT_1039c964 == 0) {
      local_38 = 0;
      local_30 = 0;
      if (DAT_1039ca4c < 0x30000) {
        local_14 = 0x12;
        local_4c[0] = local_3c[1] + *local_3c;
        FUN_100b1566(local_3c,local_4c,"6A 0C 68 ???? E8 ???? 8B 75 08 85 F6 74 58");
        local_14 = 0x14;
        local_2c = &local_50;
        local_4c[1] = 0;
        local_4c[2] = 0;
        local_4c[3] = 0;
        local_50 = local_70;
        FUN_100b1f98(1,local_2c,&local_2c);
        local_14 = 0x15;
        FUN_100b1127();
        local_14 = 0x16;
        FUN_10004eae();
        local_38 = CONCAT44(uStack_28,local_2c);
        local_30 = local_24;
        local_2c = (int **)0x0;
        uStack_28 = 0;
        local_24 = 0;
        local_14 = 0xffffffff;
        FUN_10004eae();
        FUN_100b21ee();
        local_14 = 0xffffffff;
        FUN_10001fee();
      }
      else {
        local_14 = 0x17;
        local_4c[0] = local_3c[1] + *local_3c;
        FUN_100b1566(local_3c,local_4c,"8B FF 55 8B EC 83 7D 08 00 74 2D");
        local_14 = 0x19;
        local_2c = &local_50;
        local_4c[1] = 0;
        local_4c[2] = 0;
        local_4c[3] = 0;
        local_50 = local_70;
        FUN_100b1f98(1,local_2c,&local_2c);
        local_14 = 0x1a;
        FUN_100b1127();
        local_14 = 0x1b;
        FUN_10004eae();
        local_38 = CONCAT44(uStack_28,local_2c);
        local_30 = local_24;
        local_2c = (int **)0x0;
        uStack_28 = 0;
        local_24 = 0;
        local_14 = 0xffffffff;
        FUN_10004eae();
        FUN_100b21ee();
        local_14 = 0xffffffff;
        FUN_10001fee();
      }
      local_3c = (int *)(local_38._4_4_ - (int)(int *)local_38);
      if (local_3c == (int *)0x4) {
        DAT_1039c964 = *(int *)local_38;
      }
      else {
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
        local_70[0] = local_38._4_4_ - (int)(int *)local_38 >> 2;
        local_14 = 0x10;
        FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                     ,0x417,&DAT_1032f028,4,"Failed to find findFree: {}",0x1b,local_70);
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
      if (local_3c != (int *)0x4) goto LAB_100b0e6c;
    }
    uVar2 = 1;
  }
  ExceptionList = local_1c;
  return uVar2;
}

