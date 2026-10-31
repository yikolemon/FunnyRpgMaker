/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c34d9 */

ulonglong FUN_1800c34d9(longlong ***param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  longlong **local_130;
  undefined8 local_128;
  longlong **local_120;
  longlong **local_118;
  undefined4 local_110;
  undefined *local_108 [4];
  longlong **local_e8 [2];
  undefined1 local_d8 [32];
  longlong ***local_b8;
  longlong ***ppplStack_b0;
  undefined8 local_a8;
  longlong ***local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  longlong ***local_60;
  longlong ***local_58;
  longlong ***ppplStack_50;
  undefined8 local_48;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (DAT_180417b40 == 0) {
    local_98 = (longlong ***)0x0;
    lStack_90 = 0;
    local_88 = 0;
    if (DAT_180417a10 < 0x30000) {
      local_130 = (longlong **)((longlong)param_1[1] + (longlong)*param_1);
      FUN_1800b64b4(&local_118,param_1,&local_130,"00 00 00 00 C7 ?? C0 BD F0 FF");
      local_78 = (char *)0x0;
      uStack_70 = 0;
      local_68 = (undefined *)0x0;
      local_b8 = &local_118;
      local_58 = local_e8;
      FUN_1800b6f0e(&local_78,1);
      FUN_1800b5f3c(&local_58,&local_78);
      FUN_180004cea(&local_98);
      local_98 = local_58;
      lStack_90 = (longlong)ppplStack_50;
      local_88 = local_48;
      local_58 = (longlong ***)0x0;
      ppplStack_50 = (longlong ***)0x0;
      local_48 = 0;
      FUN_180004cea(&local_58);
      FUN_1800b70f0(&local_78);
      FUN_180001ef2(local_108);
    }
    else {
      local_130 = (longlong **)((longlong)param_1[1] + (longlong)*param_1);
      local_29 = 0;
      local_60 = &local_118;
      FUN_1800b64b4(local_60,param_1,&local_130,"E6 00 00 00 66 ?? 7D");
      local_120 = (longlong **)CONCAT44(local_120._4_4_,0xffffffb0);
      local_29 = 0;
      local_60 = local_e8;
      FUN_1800c1744();
      local_58 = (longlong ***)&local_b8;
      local_78 = (char *)0x0;
      uStack_70 = 0;
      local_68 = (undefined *)0x0;
      local_b8 = &local_118;
      FUN_1800b6f0e(&local_78,2);
      FUN_1800b5f3c(&local_58,&local_78);
      FUN_180004cea(&local_98);
      local_98 = local_58;
      lStack_90 = (longlong)ppplStack_50;
      local_88 = local_48;
      local_58 = (longlong ***)0x0;
      ppplStack_50 = (longlong ***)0x0;
      local_48 = 0;
      FUN_180004cea(&local_58);
      FUN_1800b70f0(&local_78);
      lVar2 = 0;
      do {
        local_80 = lVar2;
        FUN_180001ef2(local_d8 + lVar2);
        lVar2 = local_80 + -0x30;
      } while (lVar2 != -0x60);
      local_29 = 1;
      local_60 = local_e8;
    }
    if (lStack_90 - (longlong)local_98 == 8) {
      local_b8 = (longlong ***)0x0;
      ppplStack_b0 = (longlong ***)0x0;
      local_a8 = 0;
      if (DAT_180417a10 < 0x30000) {
        local_120 = *local_98 + -0xa0;
        if (*param_1 < local_120) {
          param_1 = &local_120;
        }
        FUN_1800b64b4(&local_118,param_1,local_98,"55 8B EC");
        local_78 = (char *)0x0;
        uStack_70 = 0;
        local_68 = (undefined *)0x0;
        local_130 = (longlong **)&local_118;
        local_58 = local_e8;
        FUN_1800b6f0e(&local_78,1);
        FUN_1800b5f3c(&local_58,&local_78);
        FUN_180004cea(&local_b8);
        local_b8 = local_58;
        ppplStack_b0 = ppplStack_50;
        local_a8 = local_48;
        local_58 = (longlong ***)0x0;
        ppplStack_50 = (longlong ***)0x0;
        local_48 = 0;
        FUN_180004cea(&local_58);
        FUN_1800b70f0(&local_78);
        FUN_180001ef2(local_108);
      }
      else {
        local_120 = *local_98 + -0xa0;
        if (*param_1 < local_120) {
          param_1 = &local_120;
        }
        FUN_1800b64b4(&local_118,param_1,local_98,"53 8B DC");
        local_78 = (char *)0x0;
        uStack_70 = 0;
        local_68 = (undefined *)0x0;
        local_130 = (longlong **)&local_118;
        local_58 = local_e8;
        FUN_1800b6f0e(&local_78,1);
        FUN_1800b5f3c(&local_58,&local_78);
        FUN_180004cea(&local_b8);
        local_b8 = local_58;
        ppplStack_b0 = ppplStack_50;
        local_a8 = local_48;
        local_58 = (longlong ***)0x0;
        ppplStack_50 = (longlong ***)0x0;
        local_48 = 0;
        FUN_180004cea(&local_58);
        FUN_1800b70f0(&local_78);
        FUN_180001ef2(local_108);
      }
      if (local_b8 == ppplStack_b0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c) < DAT_180417808) {
          FUN_18023d500(&DAT_180417808);
          if (DAT_180417808 == -1) {
            FUN_180021e84(&DAT_180417610);
            FUN_18023d710(&LAB_18002260a);
            _Init_thread_footer(&DAT_180417808);
          }
        }
        local_58 = (longlong ***)0x18035fc7d;
        ppplStack_50 = (longlong ***)0x25;
        local_118 = (longlong **)0x1803655f6;
        local_110 = 0x3b3;
        local_108[0] = &DAT_18035f128;
        FUN_1800b7168(DAT_1804177e8,&local_118,4,&local_58,local_98);
        uVar3 = 0;
      }
      else {
        FUN_1800c418d(&local_118,ppplStack_b0[-1]);
        uVar3 = CONCAT71((int7)((ulonglong)&local_118 >> 8),local_108[0] == (undefined *)0x0);
        if (local_108[0] != (undefined *)0x0) {
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
          uVar1 = DAT_1804177e8;
          FUN_1800c9080(&local_58,&local_118);
          local_130 = (longlong **)0x18035f9ef;
          local_128 = 0x21;
          local_78 = 
          "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\wolfrpg\\wolf_rpg_editor.cpp"
          ;
          uStack_70 = CONCAT44(uStack_70._4_4_,0x3b9);
          local_68 = &DAT_18035f128;
          FUN_180059be0(uVar1,&local_78,4,&local_130,&local_58);
          FUN_180001ef2(&local_58);
        }
        FUN_1800010ec(&local_118);
      }
      FUN_180004cea(&local_b8);
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
      local_78 = (char *)(lStack_90 - (longlong)local_98 >> 3);
      local_58 = (longlong ***)0x18035fa11;
      ppplStack_50 = (longlong ***)0x21;
      local_118 = (longlong **)0x1803655f6;
      local_110 = 0x3a6;
      local_108[0] = &DAT_18035f128;
      FUN_1800b7168(DAT_1804177e8,&local_118,4,&local_58,&local_78);
      uVar3 = 0;
    }
    FUN_180004cea(&local_98);
  }
  return uVar3 & 0xffffffff;
}

