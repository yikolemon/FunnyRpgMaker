/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c0163 */

ulonglong FUN_1800c0163(longlong *****param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  longlong *****ppppplVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong ****pppplVar8;
  longlong ****pppplVar9;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  short **local_e0;
  short **local_d8;
  longlong ****local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong ****local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  short *local_88;
  undefined8 uStack_80;
  undefined *local_78 [4];
  longlong ****local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (DAT_180417b28 == 0) {
    local_c8 = (longlong ****)0x0;
    lStack_c0 = 0;
    local_b8 = 0;
    if (DAT_180417a10 < 0x30000) {
      local_f0 = (undefined1  [8])((longlong)param_1[1] + (longlong)*param_1);
      FUN_1800b64b4(&local_88,param_1,local_f0,"B8 01 00 00 00 85 C0 0F 84 ???? 83 7D 10 00 7E");
      local_58 = (longlong ****)&local_58;
      local_a8 = (longlong ****)0x0;
      uStack_a0 = 0;
      local_98 = (undefined *)0x0;
      local_e0 = &local_88;
      FUN_1800b6f0e(&local_a8,1);
      FUN_1800b5f3c(&local_58,&local_a8);
      FUN_180004cea(&local_c8);
      local_c8 = local_58;
      lStack_c0 = lStack_50;
      local_b8 = local_48;
      local_58 = (longlong ****)0x0;
      lStack_50 = 0;
      local_48 = 0;
      FUN_180004cea(&local_58);
      FUN_1800b70f0(&local_a8);
      FUN_180001ef2(local_78);
    }
    else {
      local_f0 = (undefined1  [8])((longlong)param_1[1] + (longlong)*param_1);
      FUN_1800b64b4(&local_88,param_1,local_f0,"7E ?? AB AA AA AA");
      local_58 = (longlong ****)&local_58;
      local_a8 = (longlong ****)0x0;
      uStack_a0 = 0;
      local_98 = (undefined *)0x0;
      local_e0 = &local_88;
      FUN_1800b6f0e(&local_a8,1);
      FUN_1800b5f3c(&local_58,&local_a8);
      FUN_180004cea(&local_c8);
      local_c8 = local_58;
      lStack_c0 = lStack_50;
      local_b8 = local_48;
      local_58 = (longlong ****)0x0;
      lStack_50 = 0;
      local_48 = 0;
      FUN_180004cea(&local_58);
      FUN_1800b70f0(&local_a8);
      FUN_180001ef2(local_78);
    }
    if (lStack_c0 - (longlong)local_c8 == 8) {
      local_f0 = (undefined1  [8])(*local_c8 + -10);
      ppppplVar6 = param_1;
      if (*param_1 < (ulonglong)local_f0) {
        ppppplVar6 = (longlong *****)local_f0;
      }
      FUN_1800b64b4(&local_88,ppppplVar6,local_c8,"83 EC");
      local_a8 = (longlong ****)&local_58;
      local_58 = (longlong ****)0x0;
      lStack_50 = 0;
      local_48 = 0;
      local_e0 = &local_88;
      FUN_1800b6f0e(&local_58,1);
      FUN_1800b5f3c(&local_e0,&local_58);
      FUN_1800b70f0(&local_58);
      FUN_180001ef2(local_78);
      if (local_e0 == local_d8) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c) < DAT_180417808) {
          FUN_18023d500(&DAT_180417808);
          if (DAT_180417808 == -1) {
            FUN_180021e84(&DAT_180417610);
            FUN_18023d710(&LAB_18002260a);
            _Init_thread_footer(&DAT_180417808);
          }
        }
        local_58 = (longlong ****)0x18035fc54;
        lStack_50 = 0x28;
        local_88 = (short *)0x1803655f6;
        uStack_80 = CONCAT44(uStack_80._4_4_,0x381);
        local_78[0] = &DAT_18035f166;
        FUN_1800b7168(DAT_1804177e8,&local_88,4,&local_58,local_c8);
        uVar7 = 0;
      }
      else {
        pppplVar8 = (longlong ****)local_d8[-1];
        pppplVar9 = (longlong ****)((longlong)pppplVar8 - 3);
        if (pppplVar9 < *param_1) {
          pppplVar9 = *param_1;
        }
        local_58 = (longlong ****)(local_f0 + 3);
        local_f0._0_3_ = 0xec8b55;
        local_88 = (short *)0x0;
        uStack_80 = 0;
        local_78[0] = (undefined *)0x0;
        local_a8 = (longlong ****)local_f0;
        FUN_1800448ea(&local_88,3);
        sVar2 = *(short *)pppplVar9;
        sVar3 = *local_88;
        cVar1 = *(char *)((longlong)pppplVar9 + 2);
        sVar4 = local_88[1];
        FUN_180004cea();
        if (cVar1 == (char)sVar4 && sVar2 == sVar3) {
          pppplVar8 = pppplVar9;
        }
        FUN_1800c0ae0(&local_88,pppplVar8);
        uVar7 = CONCAT71((int7)((ulonglong)pppplVar8 >> 8),local_78[0] == (undefined *)0x0);
        if (local_78[0] != (undefined *)0x0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c) <
              DAT_180417808) {
            FUN_18023d500(&DAT_180417808);
            if (DAT_180417808 == -1) {
              FUN_180021e84(&DAT_180417610);
              FUN_18023d710(&LAB_18002260a);
              _Init_thread_footer(&DAT_180417808);
            }
          }
          uVar5 = DAT_1804177e8;
          FUN_1800c9080(&local_58,&local_88);
          local_f0 = (undefined1  [8])0x18035f988;
          local_e8 = 0x24;
          local_a8 = (longlong ****)0x1803655f6;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,0x38e);
          local_98 = &DAT_18035f166;
          FUN_180059be0(uVar5,&local_a8,4,local_f0,&local_58);
          FUN_180001ef2(&local_58);
        }
        FUN_1800010ec(&local_88);
      }
      FUN_180004cea(&local_e0);
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
      local_a8 = (longlong ****)(lStack_c0 - (longlong)local_c8 >> 3);
      local_58 = (longlong ****)0x18035f9ad;
      lStack_50 = 0x24;
      local_88 = (short *)0x1803655f6;
      uStack_80 = CONCAT44(uStack_80._4_4_,0x37b);
      local_78[0] = &DAT_18035f166;
      FUN_1800b7168(DAT_1804177e8,&local_88,4,&local_58,&local_a8);
      uVar7 = 0;
    }
    FUN_180004cea(&local_c8);
  }
  return uVar7 & 0xffffffff;
}

