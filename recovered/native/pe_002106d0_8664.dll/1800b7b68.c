/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b7b68 */

ulonglong FUN_1800b7b68(char ***param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char **ppcVar4;
  char ***pppcVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  char **local_108;
  undefined8 local_100;
  char **local_f8;
  char **local_f0;
  char **local_e0;
  char **local_d8;
  char **local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  char **local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  char *local_90;
  undefined4 local_88;
  undefined *local_80 [4];
  char *local_60;
  char **local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (DAT_180417b08 != 0) goto LAB_1800b8092;
  local_c8 = (char **)0x0;
  lStack_c0 = 0;
  local_b8 = 0;
  if (DAT_180417a10 < 0x30000) {
    local_e0 = (char **)((longlong)param_1[1] + (longlong)*param_1);
    FUN_1800b64b4(&local_90,param_1,&local_e0,"81 3D ???? 20 A1 07 00 0F 8D");
    local_58 = &local_60;
    local_a8 = (char **)0x0;
    uStack_a0 = 0;
    local_98 = (undefined *)0x0;
    local_f8 = &local_90;
    FUN_1800b6f0e(&local_a8,1);
    FUN_1800b5f3c(&local_58,&local_a8);
    FUN_180004cea(&local_c8);
    local_c8 = local_58;
    lStack_c0 = lStack_50;
    local_b8 = local_48;
    local_58 = (char **)0x0;
    lStack_50 = 0;
    local_48 = 0;
    FUN_180004cea(&local_58);
    FUN_1800b70f0(&local_a8);
    FUN_180001ef2(local_80);
  }
  else {
    local_e0 = (char **)((longlong)param_1[1] + (longlong)*param_1);
    FUN_1800b64b4(&local_90,param_1,&local_e0,"90 D0 03 00 0F 8F");
    local_58 = &local_60;
    local_a8 = (char **)0x0;
    uStack_a0 = 0;
    local_98 = (undefined *)0x0;
    local_f8 = &local_90;
    FUN_1800b6f0e(&local_a8,1);
    FUN_1800b5f3c(&local_58,&local_a8);
    FUN_180004cea(&local_c8);
    local_c8 = local_58;
    lStack_c0 = lStack_50;
    local_b8 = local_48;
    local_58 = (char **)0x0;
    lStack_50 = 0;
    local_48 = 0;
    FUN_180004cea(&local_58);
    FUN_1800b70f0(&local_a8);
    FUN_180001ef2(local_80);
  }
  if (lStack_c0 - (longlong)local_c8 == 8) {
    local_60 = *local_c8;
    local_e0 = (char **)(local_60 + -0x800);
    pppcVar5 = &local_e0;
    if (local_e0 <= *param_1) {
      pppcVar5 = param_1;
    }
    FUN_1800b64b4(&local_90,pppcVar5,&local_60,"53 8B DC");
    local_58 = (char **)0x0;
    lStack_50 = 0;
    local_48 = 0;
    local_f8 = &local_90;
    local_a8 = &local_60;
    FUN_1800b6f0e(&local_58,1);
    FUN_1800b5f3c(&local_f8,&local_58);
    FUN_1800b70f0(&local_58);
    FUN_180001ef2(local_80);
    local_108 = (char **)(local_60 + -0x800);
    if (*param_1 < local_108) {
      param_1 = &local_108;
    }
    FUN_1800b64b4(&local_90,param_1,&local_60,"55 8B EC");
    local_58 = (char **)0x0;
    lStack_50 = 0;
    local_48 = 0;
    local_e0 = &local_90;
    local_a8 = &local_60;
    FUN_1800b6f0e(&local_58,1);
    FUN_1800b5f3c(&local_e0,&local_58);
    FUN_1800b70f0(&local_58);
    FUN_180001ef2(local_80);
    if (local_f8 == local_f0) {
      local_f0 = local_d8;
      if (local_e0 != local_d8) goto code_r0x0001800b7fa8;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
        FUN_180021e84(&DAT_180417610);
        FUN_18023d710(&LAB_18002260a);
        _Init_thread_footer(&DAT_180417808);
      }
      local_58 = (char **)0x18035fca3;
      lStack_50 = 0x23;
      local_90 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
      ;
      local_88 = 0x35d;
      local_80[0] = &DAT_18035f182;
      FUN_1800b7168(DAT_1804177e8,&local_90,4,&local_58,local_c8);
      uVar6 = 0;
    }
    else {
      if (local_e0 == local_d8) {
code_r0x0001800b7fa8:
        if (local_f0[-1] < local_60) {
          local_60 = local_f0[-1];
        }
      }
      else {
        ppcVar3 = local_d8 + -1;
        pcVar1 = local_d8[-1];
        if (local_60 <= local_d8[-1]) {
          ppcVar3 = &local_60;
          pcVar1 = local_60;
        }
        ppcVar4 = local_f0 + -1;
        if (local_60 <= local_f0[-1]) {
          ppcVar4 = &local_60;
        }
        if (local_f0[-1] < pcVar1) {
          ppcVar4 = ppcVar3;
        }
        local_60 = *ppcVar4;
      }
      FUN_1800b8634(&local_90);
      uVar6 = CONCAT71((int7)((ulonglong)&local_60 >> 8),local_80[0] == (undefined *)0x0);
      if (local_80[0] != (undefined *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_180417808) &&
           (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
          FUN_180021e84(&DAT_180417610);
          FUN_18023d710(&LAB_18002260a);
          _Init_thread_footer(&DAT_180417808);
        }
        uVar2 = DAT_1804177e8;
        FUN_1800c9080(&local_58,&local_90);
        local_108 = (char **)0x18035fa33;
        local_100 = 0x1f;
        local_a8 = (char **)0x1803655f6;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,0x368);
        local_98 = &DAT_18035f182;
        FUN_180059be0(uVar2,&local_a8,4,&local_108,&local_58);
        FUN_180001ef2(&local_58);
      }
      FUN_1800010ec(&local_90);
    }
    FUN_180004cea(&local_e0);
    FUN_180004cea(&local_f8);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180417808) && (FUN_18023d500(&DAT_180417808), DAT_180417808 == -1)) {
      FUN_180021e84(&DAT_180417610);
      FUN_18023d710(&LAB_18002260a);
      _Init_thread_footer(&DAT_180417808);
    }
    local_a8 = (char **)(lStack_c0 - (longlong)local_c8 >> 3);
    local_58 = (char **)0x18035fa53;
    lStack_50 = 0x1f;
    local_90 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
    ;
    local_88 = 0x352;
    local_80[0] = &DAT_18035f182;
    FUN_1800b7168(DAT_1804177e8,&local_90,4,&local_58,&local_a8);
    uVar6 = 0;
  }
  FUN_180004cea(&local_c8);
LAB_1800b8092:
  return uVar6 & 0xffffffff;
}

