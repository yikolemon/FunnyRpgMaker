/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b2baf */

undefined4 __fastcall FUN_100b2baf(int **param_1)

{
  uint uVar1;
  int **ppiVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *local_90;
  undefined4 local_8c;
  int *local_88;
  int *local_84;
  int local_7c [4];
  int local_6c;
  undefined8 local_5c;
  undefined4 local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_44;
  undefined8 *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_28;
  int **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_90;
  local_18 = &LAB_100c1c00;
  local_1c = ExceptionList;
  if (DAT_1039cac8 != 0) {
    return 1;
  }
  local_5c = 0;
  local_54 = 0;
  ExceptionList = &local_1c;
  local_24 = param_1;
  if (DAT_1039ca4c < 0x30000) {
    local_14 = 0x14;
    local_44 = (int *)((int)param_1[1] + (int)*param_1);
    FUN_100b1566(param_1,&local_44,"81 3D ???? 20 A1 07 00 0F 8D");
    local_14 = 0x16;
    local_40 = &local_5c;
    local_50 = (int *)0x0;
    local_4c = (int *)0x0;
    local_48 = 0;
    local_88 = local_7c;
    FUN_100b1f98(1,&local_88,&local_40);
    local_14 = 0x17;
    FUN_100b1127();
    local_14 = 0x18;
    FUN_10004eae();
    local_5c = CONCAT44(uStack_3c,local_40);
    local_54 = local_38;
    local_40 = (undefined8 *)0x0;
    uStack_3c = 0;
    local_38 = 0;
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_100b21ee();
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else {
    local_14 = 0x19;
    local_44 = (int *)((int)param_1[1] + (int)*param_1);
    local_20 = (undefined1 *)&local_90;
    FUN_100b1566(param_1,&local_44,"90 D0 03 00 0F 8F");
    local_14 = 0x1b;
    local_40 = &local_5c;
    local_50 = (int *)0x0;
    local_4c = (int *)0x0;
    local_48 = 0;
    local_88 = local_7c;
    FUN_100b1f98(1,&local_88,&local_40);
    local_14 = 0x1c;
    FUN_100b1127();
    local_14 = 0x1d;
    FUN_10004eae();
    local_5c = CONCAT44(uStack_3c,local_40);
    local_54 = local_38;
    local_40 = (undefined8 *)0x0;
    uStack_3c = 0;
    local_38 = 0;
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_100b21ee();
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  if (local_5c._4_4_ - (int)(uint *)local_5c != 4) {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
       && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
      local_14 = 5;
      FUN_10021a06();
      FUN_1022c3a0(&LAB_1002210b);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039c928);
    }
    local_7c[0] = local_5c._4_4_ - (int)(uint *)local_5c >> 2;
    local_14 = 4;
    FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                 ,0x352,&DAT_1032f066,4,"Failed to find eventExecPtr: {}",0x1f,local_7c);
    local_24 = (int **)0x0;
    goto code_r0x100b3120;
  }
  local_28 = *(uint *)local_5c;
  local_14 = 0x10;
  local_44 = (int *)(local_28 - 0x800);
  ppiVar2 = local_24;
  if (*local_24 < local_44) {
    ppiVar2 = &local_44;
  }
  FUN_100b1566(ppiVar2,&local_28,"53 8B DC");
  local_14 = 0x12;
  local_50 = (int *)&local_5c;
  local_40 = (undefined8 *)0x0;
  uStack_3c = 0;
  local_38 = 0;
  local_88 = local_7c;
  FUN_100b1f98(1,&local_88,&local_50);
  local_14 = 0x13;
  FUN_100b1127();
  local_14 = 0xffffffff;
  FUN_100b21ee();
  local_14 = 0xffffffff;
  FUN_10001fee();
  local_14 = 7;
  local_90 = (int *)(local_28 - 0x800);
  ppiVar2 = local_24;
  if (*local_24 < local_90) {
    ppiVar2 = &local_90;
  }
  FUN_100b1566(ppiVar2,&local_28,"55 8B EC");
  local_14 = 9;
  local_40 = (undefined8 *)0x0;
  uStack_3c = 0;
  local_38 = 0;
  local_88 = (int *)&local_5c;
  local_44 = local_7c;
  FUN_100b1f98(1,&local_44,&local_88);
  local_14 = 10;
  FUN_100b1127();
  local_14 = 0xffffffff;
  FUN_100b21ee();
  local_14 = 0xffffffff;
  FUN_10001fee();
  local_14 = 0xb;
  if (local_50 == local_4c) {
    piVar4 = local_84;
    if (local_88 != local_84) goto code_r0x100b303f;
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928)
       && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
      local_14 = 0xc;
      FUN_10021a06();
      FUN_1022c3a0(&LAB_1002210b);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039c928);
    }
    local_14 = 0xb;
    FUN_100b224a("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                 ,0x35d,&DAT_1032f066,4,"Failed to refind eventExecPtr: {:x}",0x23,(uint *)local_5c)
    ;
    local_24 = (int **)0x0;
  }
  else {
    piVar4 = local_4c;
    if (local_88 == local_84) {
code_r0x100b303f:
      if ((uint)piVar4[-1] < local_28) {
        local_28 = piVar4[-1];
      }
    }
    else {
      puVar3 = (uint *)(local_84 + -1);
      uVar1 = local_84[-1];
      if (local_28 <= (uint)local_84[-1]) {
        puVar3 = &local_28;
        uVar1 = local_28;
      }
      puVar6 = (uint *)(local_4c + -1);
      if (local_28 <= (uint)local_4c[-1]) {
        puVar6 = &local_28;
      }
      if ((uint)local_4c[-1] < uVar1) {
        puVar6 = puVar3;
      }
      local_28 = *puVar6;
    }
    uVar5 = FUN_100b3475();
    local_14 = 0xd;
    local_24 = (int **)CONCAT31((int3)((uint)uVar5 >> 8),local_6c == 0);
    if (local_6c != 0) {
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928
          ) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
        local_14 = 0xe;
        FUN_10021a06();
        FUN_1022c3a0(&LAB_1002210b);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039c928);
      }
      local_8c = DAT_1039c914;
      local_14 = 0xd;
      FUN_100c5628(&local_40,local_7c);
      local_14 = 0xf;
      FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
                   ,0x368,&DAT_1032f066,4,"Failed to hook eventExecPtr: {}",0x1f,&local_40);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_10004eae();
code_r0x100b3120:
  local_14 = 0xffffffff;
  FUN_10004eae();
  ExceptionList = local_1c;
  return local_24;
}

