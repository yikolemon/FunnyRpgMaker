/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001419c */

undefined8 FUN_18001419c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = 1;
  if (DAT_180417524 == '\0') {
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1800c8db1(local_78,param_1);
    puVar3 = local_78[0];
    local_80 = (undefined8 *)*local_78[0];
    while (puVar2 = local_80, local_80 != puVar3) {
      puVar1 = local_80 + 4;
      local_68 = puVar1;
      if (0xf < (ulonglong)local_80[7]) {
        local_68 = (undefined8 *)local_80[4];
      }
      local_60 = local_80[6];
      cVar4 = FUN_1800182d2(&local_68,"?NewFromUtf8@String@v8@@");
      if ((cVar4 == '\0') || (lVar5 = FUN_180014660(puVar1,"AVIsolate",0), lVar5 == -1)) {
        local_68 = puVar1;
        if (0xf < (ulonglong)puVar2[7]) {
          local_68 = (undefined8 *)puVar2[4];
        }
        local_60 = puVar2[6];
        cVar4 = FUN_1800182d2(&local_68,"??0Utf8Value@String@v8@@");
        if (cVar4 == '\0') {
          local_68 = puVar1;
          if (0xf < (ulonglong)puVar2[7]) {
            local_68 = (undefined8 *)puVar2[4];
          }
          local_60 = puVar2[6];
          cVar4 = FUN_1800182d2(&local_68,"??1Value@String@v8@@");
          if (cVar4 == '\0') {
            local_68 = puVar1;
            if (0xf < (ulonglong)puVar2[7]) {
              local_68 = (undefined8 *)puVar2[4];
            }
            local_60 = puVar2[6];
            cVar4 = FUN_1800182d2(&local_68,"?GetCurrent@Isolate@v8@@");
            if (cVar4 == '\0') {
              local_68 = puVar1;
              if (0xf < (ulonglong)puVar2[7]) {
                local_68 = (undefined8 *)puVar2[4];
              }
              local_60 = puVar2[6];
              cVar4 = FUN_1800182d2(&local_68,"?Compile@ScriptCompiler@v8@@");
              lVar5 = DAT_1804175d8;
              if ((cVar4 != '\0') &&
                 (lVar6 = FUN_180014660(puVar1,"AVSource",0), lVar5 = DAT_1804175d8, lVar6 != -1)) {
                FUN_1800146e4(&local_68,puVar2[8]);
                if (local_58 != 0) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x2c) < DAT_180417808) &&
                     (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
                    FUN_180021e84(&DAT_180417610);
                    FUN_18023d710(&LAB_18002260a);
                    _Init_thread_footer(&DAT_180417808);
                  }
                  uVar7 = DAT_1804177e8;
                  FUN_1800c9080(local_c8,&local_68);
                  local_90 = "Failed to init hook method: {}";
                  local_88 = 0x1e;
                  local_a8 = 
                  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\rpgmaker\\rpgmaker.cpp"
                  ;
                  local_a0 = 500;
                  local_98 = "InitRpgMakerCoreFunc";
                  FUN_180059be0(uVar7,&local_a8,4,&local_90,local_c8);
                  FUN_180001ef2(local_c8);
                }
                FUN_1800010ec(&local_68);
                lVar5 = DAT_1804175d8;
              }
            }
            else {
              DAT_180417528 = puVar2[8];
              lVar5 = DAT_1804175d8;
            }
          }
          else {
            DAT_1804175e8 = puVar2[8];
            lVar5 = DAT_1804175d8;
          }
        }
        else {
          lVar6 = FUN_180014660(puVar1,"AVIsolate",0);
          lVar5 = puVar2[8];
          if (lVar6 != -1) {
            lVar5 = DAT_1804175d8;
            DAT_1804175e0 = puVar2[8];
          }
        }
      }
      else {
        DAT_1804175d0 = puVar2[8];
        lVar5 = DAT_1804175d8;
      }
      DAT_1804175d8 = lVar5;
      FUN_180016c4c(&local_80);
    }
    FUN_180018238(local_78,local_78,local_78[0][1]);
    thunk_FUN_1802464a0(local_78[0],0x48);
    if (DAT_1804175d0 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if ((((DAT_1804175e0 != 0 || DAT_1804175d8 != 0) && (DAT_1804175e8 != 0)) &&
          (DAT_180417528 != 0)) && (uVar7 = 0, DAT_180417530 != 0)) {
        DAT_180417524 = '\x01';
        uVar7 = 1;
      }
    }
  }
  return uVar7;
}

