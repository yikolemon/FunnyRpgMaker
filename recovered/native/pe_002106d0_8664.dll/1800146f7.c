/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800146f7 */

undefined8
FUN_1800146f7(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *****pppppuVar4;
  char *local_138;
  undefined4 local_130;
  char *local_128;
  char *local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [40];
  undefined1 local_c8 [32];
  undefined8 ****local_a8 [3];
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78 [5];
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = (*DAT_180417528)();
  if (lVar3 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180417808) {
      FUN_18023d500(&DAT_180417808);
      if (DAT_180417808 == -1) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
    }
    local_120 = "v8_Isolate_GetCurrent return nullptr";
    local_118 = 0x24;
    local_138 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\rpgmaker\\rpgmaker.cpp";
    local_130 = 0x1c1;
    local_128 = "v8_ScriptCompiler_Compile_hook";
    FUN_18001830a(DAT_1804177e8,&local_138,4);
  }
  else {
    local_78[2] = 0;
    local_78[3] = 0;
    if (DAT_1804175e0 == (code *)0x0) {
      if (DAT_1804175d8 != (code *)0x0) {
        (*DAT_1804175d8)(local_78 + 2,param_3[1]);
      }
    }
    else {
      (*DAT_1804175e0)(local_78 + 2,lVar3);
    }
    local_80 = local_78[2];
    bVar1 = local_78[2] != 0;
    if (local_78[2] == 0) {
      cVar2 = '\0';
    }
    else {
      FUN_180018514(local_f0,"^(chrome-extension|file)://.*\\.js$",1);
      local_49 = 1;
      cVar2 = FUN_1800184d8(local_78[2],local_f0,0);
    }
    local_49 = bVar1;
    if (local_80 != 0) {
      FUN_1800185bc(local_f0);
    }
    if (cVar2 != '\0') {
      FUN_180001e92(local_110,local_78[2]);
      local_78[0] = 0;
      local_78[1] = 0;
      if (DAT_1804175e0 == (code *)0x0) {
        if (DAT_1804175d8 != (code *)0x0) {
          (*DAT_1804175d8)(local_78,*param_3);
        }
      }
      else {
        (*DAT_1804175e0)(local_78,lVar3);
      }
      if (local_78[0] != 0) {
        FUN_180018675(local_c8);
        FUN_180012917(local_a8,local_78[0],local_c8);
        if (DAT_1804175d0 == (code *)0x0) {
          local_88 = 0;
        }
        else {
          pppppuVar4 = local_a8;
          if (0xf < local_90) {
            pppppuVar4 = (undefined8 *****)local_a8[0];
          }
          (*DAT_1804175d0)(&local_88,lVar3,pppppuVar4,0,0xffffffff);
        }
        *param_3 = local_88;
        FUN_180001ef2(local_a8);
        FUN_180001ef2(local_c8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c) < DAT_1804175c8) {
          FUN_18023d500(&DAT_1804175c8);
          if (DAT_1804175c8 == -1) {
            FUN_180018800();
            _Init_thread_footer(&DAT_1804175c8);
          }
        }
      }
      if (DAT_1804175e8 != (code *)0x0) {
        (*DAT_1804175e8)(local_78);
      }
      FUN_180001ef2(local_110);
    }
    if (DAT_1804175e8 != (code *)0x0) {
      (*DAT_1804175e8)(local_78 + 2);
    }
  }
  (*DAT_180417530)(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

