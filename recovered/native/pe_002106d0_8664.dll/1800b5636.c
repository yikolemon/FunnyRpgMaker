/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b5636 */

undefined8 FUN_1800b5636(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char *local_b8;
  undefined4 local_b0;
  undefined *local_a8 [4];
  char **local_88;
  longlong local_80;
  longlong local_78 [4];
  undefined8 **local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 **local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (DAT_180417868 == (char **)0x0) {
    local_58 = (undefined8 **)0x0;
    lStack_50 = 0;
    local_48 = 0;
    if (DAT_180417a10 < 0x30000) {
      local_80 = param_1[1] + *param_1;
      FUN_1800b64b4(&local_b8,param_1,&local_80,"83 7C 24 04 E0 77 22 FF 74 24 04");
      local_38 = &local_88;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_88 = &local_b8;
      FUN_1800b6f0e(local_78,1);
      FUN_1800b5f3c(&local_38,local_78);
      FUN_180004cea(&local_58);
      local_58 = local_38;
      lStack_50 = lStack_30;
      local_48 = local_28;
      local_38 = (undefined8 **)0x0;
      lStack_30 = 0;
      local_28 = 0;
      FUN_180004cea(&local_38);
      FUN_1800b70f0(local_78);
      FUN_180001ef2(local_a8);
    }
    else {
      local_80 = param_1[1] + *param_1;
      FUN_1800b64b4(&local_b8,param_1,&local_80,"8B FF 55 8B EC 56 8B 75 08 83 FE E0");
      local_38 = &local_88;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_88 = &local_b8;
      FUN_1800b6f0e(local_78,1);
      FUN_1800b5f3c(&local_38,local_78);
      FUN_180004cea(&local_58);
      local_58 = local_38;
      lStack_50 = lStack_30;
      local_48 = local_28;
      local_38 = (undefined8 **)0x0;
      lStack_30 = 0;
      local_28 = 0;
      FUN_180004cea(&local_38);
      FUN_1800b70f0(local_78);
      FUN_180001ef2(local_a8);
    }
    lVar2 = lStack_50 - (longlong)local_58;
    if (lVar2 == 8) {
      DAT_180417868 = (char **)*local_58;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_180417808) {
        FUN_18023d500(&DAT_180417808);
        if (DAT_180417808 == -1) {
          FUN_180021e84(&DAT_180417610);
          FUN_18023d710(&LAB_18002260a);
          _Init_thread_footer(&DAT_180417808);
        }
      }
      local_78[0] = lStack_50 - (longlong)local_58 >> 3;
      local_38 = (undefined8 **)0x18035fc0c;
      lStack_30 = 0x1d;
      local_b8 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
      ;
      local_b0 = 0x40a;
      local_a8[0] = &DAT_18035f144;
      FUN_1800b7168(DAT_1804177e8,&local_b8,4,&local_38,local_78);
    }
    FUN_180004cea(&local_58);
    if (lVar2 == 8) goto code_r0x0001800b589c;
LAB_1800b5ae3:
    uVar1 = 0;
  }
  else {
code_r0x0001800b589c:
    if (DAT_180417870 == (char **)0x0) {
      local_58 = (undefined8 **)0x0;
      lStack_50 = 0;
      local_48 = 0;
      if (DAT_180417a10 < 0x30000) {
        local_80 = param_1[1] + *param_1;
        FUN_1800b64b4(&local_b8,param_1,&local_80,"6A 0C 68 ???? E8 ???? 8B 75 08 85 F6 74 58");
        local_38 = &local_88;
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        local_88 = &local_b8;
        FUN_1800b6f0e(local_78,1);
        FUN_1800b5f3c(&local_38,local_78);
        FUN_180004cea(&local_58);
        local_58 = local_38;
        lStack_50 = lStack_30;
        local_48 = local_28;
        local_38 = (undefined8 **)0x0;
        lStack_30 = 0;
        local_28 = 0;
        FUN_180004cea(&local_38);
        FUN_1800b70f0(local_78);
        FUN_180001ef2(local_a8);
      }
      else {
        local_80 = param_1[1] + *param_1;
        FUN_1800b64b4(&local_b8,param_1,&local_80,"8B FF 55 8B EC 83 7D 08 00 74 2D");
        local_38 = &local_88;
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        local_88 = &local_b8;
        FUN_1800b6f0e(local_78,1);
        FUN_1800b5f3c(&local_38,local_78);
        FUN_180004cea(&local_58);
        local_58 = local_38;
        lStack_50 = lStack_30;
        local_48 = local_28;
        local_38 = (undefined8 **)0x0;
        lStack_30 = 0;
        local_28 = 0;
        FUN_180004cea(&local_38);
        FUN_1800b70f0(local_78);
        FUN_180001ef2(local_a8);
      }
      lVar2 = lStack_50 - (longlong)local_58;
      if (lVar2 == 8) {
        DAT_180417870 = (char **)*local_58;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c) < DAT_180417808) {
          FUN_18023d500(&DAT_180417808);
          if (DAT_180417808 == -1) {
            FUN_180021e84(&DAT_180417610);
            FUN_18023d710(&LAB_18002260a);
            _Init_thread_footer(&DAT_180417808);
          }
        }
        local_78[0] = lStack_50 - (longlong)local_58 >> 3;
        local_38 = (undefined8 **)0x18035fbc6;
        lStack_30 = 0x1b;
        local_b8 = 
        "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
        ;
        local_b0 = 0x417;
        local_a8[0] = &DAT_18035f144;
        FUN_1800b7168(DAT_1804177e8,&local_b8,4,&local_38,local_78);
      }
      FUN_180004cea(&local_58);
      if (lVar2 != 8) goto LAB_1800b5ae3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

