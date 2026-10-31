/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10014a4a */

undefined4 FUN_10014a4a(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_64 [24];
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  int local_30;
  undefined4 *local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058dd0;
  local_1c = ExceptionList;
  uVar6 = CONCAT31((int3)((uint)&local_1c >> 8),1);
  if (DAT_1039c77c == '\0') {
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    ExceptionList = &local_1c;
    FUN_100c5334(local_28,param_1);
    local_14 = 1;
    local_4c = local_28[0];
    local_44 = (undefined4 *)*local_28[0];
    while (puVar1 = local_44, local_44 != local_4c) {
      puVar5 = local_44 + 4;
      local_40 = puVar5;
      if (0xf < (uint)local_44[9]) {
        local_40 = (undefined4 *)local_44[4];
      }
      local_3c = local_44[8];
      cVar2 = FUN_10018750("?NewFromUtf8@String@v8@@");
      if ((cVar2 == '\0') || (iVar3 = FUN_10014e26("AVIsolate",0), iVar3 == -1)) {
        local_40 = puVar5;
        if (0xf < (uint)puVar1[9]) {
          local_40 = (undefined4 *)puVar1[4];
        }
        local_3c = puVar1[8];
        cVar2 = FUN_10018750("??0Utf8Value@String@v8@@");
        if (cVar2 == '\0') {
          local_40 = puVar5;
          if (0xf < (uint)puVar1[9]) {
            local_40 = (undefined4 *)puVar1[4];
          }
          local_3c = puVar1[8];
          cVar2 = FUN_10018750("??1Value@String@v8@@");
          if (cVar2 == '\0') {
            local_40 = puVar5;
            if (0xf < (uint)puVar1[9]) {
              local_40 = (undefined4 *)puVar1[4];
            }
            local_3c = puVar1[8];
            cVar2 = FUN_10018750("?GetCurrent@Isolate@v8@@");
            if (cVar2 == '\0') {
              if (0xf < (uint)puVar1[9]) {
                puVar5 = (undefined4 *)puVar1[4];
              }
              local_3c = puVar1[8];
              local_40 = puVar5;
              cVar2 = FUN_10018750("?Compile@ScriptCompiler@v8@@");
              iVar3 = DAT_1039c7e0;
              if ((cVar2 != '\0') &&
                 (iVar4 = FUN_10014e26("AVSource",0), iVar3 = DAT_1039c7e0, iVar4 != -1)) {
                local_14 = 1;
                FUN_10014e86();
                local_14 = 2;
                if (local_30 != 0) {
                  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
                       DAT_1039c928) && (FUN_1022c0d0(&DAT_1039c928), DAT_1039c928 == -1)) {
                    local_14 = 3;
                    FUN_10021a06();
                    FUN_1022c3a0(&LAB_1002210b);
                    local_14 = 0xffffffff;
                    FUN_1022c180(&DAT_1039c928);
                  }
                  local_48 = DAT_1039c914;
                  local_14 = 2;
                  FUN_100c5628(local_64,&local_40);
                  local_14 = 4;
                  FUN_10058860("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\rpgmaker\\rpgmaker.cpp"
                               ,500,"InitRpgMakerCoreFunc",4,"Failed to init hook method: {}",0x1e,
                               local_64);
                  local_14 = 0xffffffff;
                  FUN_10001fee();
                }
                local_14 = 0xffffffff;
                FUN_10001134();
                iVar3 = DAT_1039c7e0;
              }
            }
            else {
              DAT_1039c780 = puVar1[10];
              iVar3 = DAT_1039c7e0;
            }
          }
          else {
            DAT_1039c7e8 = puVar1[10];
            iVar3 = DAT_1039c7e0;
          }
        }
        else {
          iVar4 = FUN_10014e26("AVIsolate",0);
          iVar3 = puVar1[10];
          if (iVar4 != -1) {
            iVar3 = DAT_1039c7e0;
            DAT_1039c7e4 = puVar1[10];
          }
        }
      }
      else {
        DAT_1039c7dc = puVar1[10];
        iVar3 = DAT_1039c7e0;
      }
      DAT_1039c7e0 = iVar3;
      FUN_10016fb8();
    }
    local_14 = 0xffffffff;
    FUN_100186aa(local_28,local_28[0][1]);
    FUN_102283a0(local_28[0],0x2c);
    if (DAT_1039c7dc == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if ((((DAT_1039c7e4 != 0 || DAT_1039c7e0 != 0) && (DAT_1039c7e8 != 0)) && (DAT_1039c780 != 0))
         && (DAT_1039c784 != 0)) {
        DAT_1039c77c = '\x01';
        uVar6 = 1;
      }
    }
  }
  ExceptionList = local_1c;
  return uVar6;
}

