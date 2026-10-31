/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ec34a */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec34a(void)

{
  char cVar1;
  undefined4 uVar2;
  int ****ppppiVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int ***pppiVar11;
  undefined1 auStack_3100 [4];
  int ***local_30fc;
  int ***local_30f8;
  int ***local_30f4;
  int ***local_30f0;
  int ***pppiStack_30ec;
  undefined4 uStack_30e8;
  undefined4 uStack_30e4;
  undefined8 local_30e0;
  int ***local_30d4;
  int ***local_30d0;
  float local_30cc;
  int ***local_30c8;
  float local_30c4;
  int ***local_30c0;
  int ***pppiStack_30bc;
  undefined4 uStack_30b8;
  undefined4 uStack_30b4;
  undefined4 local_30b0;
  undefined4 uStack_30ac;
  char *local_30a8;
  undefined4 uStack_30a4;
  undefined8 local_30a0;
  undefined *local_3098;
  float local_3090;
  float fStack_308c;
  undefined4 uStack_3088;
  undefined4 uStack_3084;
  undefined4 local_3080 [6];
  undefined8 local_3068;
  int ***local_3058;
  uint local_3054;
  int *local_3044;
  int local_1050 [9];
  int *local_102c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = &stack0xfffffffc;
  uStack_14 = 0x100ec35d;
  local_24 = auStack_3100;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f5120;
  local_20 = ExceptionList;
  local_3098 = PTR_DAT_102b71fc;
  local_30a0 = _PTR_DAT_102b71f4;
  ExceptionList = &local_20;
  cVar1 = FUN_1014fafc();
  if (cVar1 != '\0') {
    pppiVar11 = (int ***)0x0;
    iVar8 = 0;
    do {
      local_30fc = pppiVar11;
      FUN_100fdb2e(&local_3068,*(undefined4 *)((int)&local_30a0 + iVar8),0,0,0xbf800000);
      pppiVar11 = (int ***)(int ****)local_3068;
      if ((float)(int ****)local_3068 <= (float)local_30fc) {
        pppiVar11 = local_30fc;
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 != 0xc);
    local_30fc = pppiVar11;
    fVar10 = (float10)FUN_10111f20();
    local_30c4 = (float)fVar10;
    local_30fc = (int ***)((float)local_30fc + local_30c4);
    iVar8 = FUN_100fcb2d();
    local_30fc = (int ***)(*(float *)(iVar8 + 0x4c) * DAT_102b6c58 + (float)local_30fc);
    fVar10 = (float10)FUN_101572bf(0x43200000);
    local_30c8 = (int ***)(float)fVar10;
    ppppiVar3 = (int ****)local_30fc;
    if ((float)local_30fc <= (float)local_30c8) {
      ppppiVar3 = (int ****)local_30c8;
    }
    FUN_100fb68f(ppppiVar3);
    FUN_10133e14("##select_database",&DAT_1038900c,&local_30a0,3,0xffffffff);
    iVar8 = FUN_1005c9a5();
    if (iVar8 == 0) {
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d53c
          ) && (FUN_1022c0d0(&DAT_1039d53c), DAT_1039d53c == -1)) {
        local_18 = 0;
        FUN_100ed59e();
        FUN_1022c3a0(&LAB_100ed640);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_1039d53c);
      }
      FUN_100edd96(&local_3068,&DAT_1038900c);
      local_30f4 = (int ***)((int)(int ****)local_3068 + 0x14);
      local_30fc = (int ***)(int ****)local_3068;
      FUN_100ee234(&local_3068,local_30f4);
      local_30f8 = (int ***)(int ****)local_3068;
      FUN_10114a0e(0,0xbf800000);
      local_3068 = 0;
      cVar1 = FUN_1012e1b7(&DAT_1032f652,&local_3068);
      if (cVar1 != '\0') {
        DAT_1039d52e = '\0';
      }
      local_30fc = (int ***)((int)local_30fc + 0x18);
      FUN_101150be(0);
      uVar2 = FUN_10113594("dockspace");
      iVar8 = FUN_100fcb2d();
      local_3090 = *(float *)(iVar8 + 0x14);
      fStack_308c = 0.0;
      uStack_3088 = 0;
      uStack_3084 = 0;
      FUN_1010c3e4(&local_30f0);
      local_3068 = CONCAT44((float)pppiStack_30ec + fStack_308c,(float)local_30f0 + local_3090);
      local_3090 = (float)uVar2;
      FUN_1011c2a7(uVar2,&local_3068,0x40,0);
      cVar1 = FUN_10107d2b();
      if (cVar1 != '\0') {
        local_30f0 = local_30f4;
        pppiStack_30ec = local_30fc;
        FUN_100ed668(&local_30f0);
        local_18 = 1;
        FUN_1005c6a3(&local_3068);
        local_18 = 0xffffffff;
        if (local_3044 != (int *)0x0) {
          (**(code **)(*local_3044 + 0x10))(local_3044 != (int *)&local_3068);
        }
      }
      FUN_1010ad44();
      cVar1 = FUN_10107d2b();
      if (cVar1 != '\0') {
        FUN_101119c9(0);
        FUN_1012d079(*local_30fc,0);
        FUN_10111a82();
      }
      local_30f8 = (int ***)((int)local_30f8 + 0x14);
      FUN_1010ad44();
      cVar1 = FUN_10107d2b();
      if (cVar1 != '\0') {
        local_30f0 = local_30f4;
        pppiStack_30ec = local_30f8;
        FUN_100ed710(&local_30f0);
        local_18 = 2;
        FUN_1005c6a3(&local_3068);
        local_18 = 0xffffffff;
        if (local_3044 != (int *)0x0) {
          (**(code **)(*local_3044 + 0x10))(local_3044 != (int *)&local_3068);
        }
      }
      FUN_1010ad44();
      cVar1 = FUN_10107d2b();
      if (cVar1 != '\0') {
        local_3068 = 0;
        cVar1 = FUN_1015f834(&DAT_1032f0e0,2,0x8000,&local_3068,0);
        if (cVar1 != '\0') {
          local_30f0 = local_30f4;
          pppiStack_30ec = local_30f8;
          FUN_100ed7b8(&local_30f0);
          local_18 = 3;
          FUN_1005c6a3(&local_3068);
          local_18 = 0xffffffff;
          if (local_3044 != (int *)0x0) {
            (**(code **)(*local_3044 + 0x10))(local_3044 != (int *)&local_3068);
          }
          FUN_1016304e();
        }
      }
      FUN_1010ad44();
      if (DAT_1039d52e == '\0') {
        DAT_1039d52e = '\x01';
        FUN_100de916();
        FUN_100ed860(local_3090);
      }
    }
    else {
      FUN_1010c3e4(&local_30f0);
      local_3068 = ZEXT48(local_30f0);
      fVar10 = (float10)FUN_10103354();
      local_30cc = (float)fVar10;
      FUN_1013125a();
    }
    FUN_10150ac8();
  }
  cVar1 = FUN_1014fafc();
  if (cVar1 != '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d540)
       && (FUN_1022c0d0(&DAT_1039d540), DAT_1039d540 == -1)) {
      local_18 = 4;
      FUN_1022c3a0(&LAB_100ed97a);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d540);
    }
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d554)
       && (FUN_1022c0d0(&DAT_1039d554), DAT_1039d554 == -1)) {
      local_18 = 5;
      FUN_1022c3a0(&LAB_100ed984);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d554);
    }
    FUN_10111871(DAT_1039d544);
    FUN_1015f67c(&DAT_1032f5cc,&DAT_10389010,0,0,0);
    FUN_10111961();
    FUN_10114a0e(0,0xbf800000);
    FUN_10111871(DAT_1039d545);
    if (DAT_1039d544 == '\x01') {
      local_3068 = 0;
      cVar1 = FUN_1012e1b7(&DAT_1032f53d,&local_3068);
      if (cVar1 != '\0') {
        DAT_1039d545 = 1;
      }
    }
    else {
      FUN_10111871(DAT_10389020 == 0);
      local_3068 = 0;
      cVar1 = FUN_1012e1b7(&DAT_1032f2d3,&local_3068);
      iVar8 = DAT_1039d54c;
      if (cVar1 != '\0') {
        DAT_1039d544 = '\x01';
        DAT_1039d545 = 0;
        iVar9 = DAT_1039d548;
        if (DAT_1039d548 != DAT_1039d54c) {
          do {
            FUN_10001fee();
            iVar9 = iVar9 + 0x18;
          } while (iVar9 != iVar8);
          DAT_1039d54c = DAT_1039d548;
          local_18 = 0xffffffff;
        }
        FUN_100ef092(&local_30f0);
        local_18 = 6;
        FUN_10021780();
        local_18 = 0xffffffff;
        if (local_3068._4_4_ != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_102716bc();
        }
      }
      FUN_10111961();
    }
    FUN_10111961();
    FUN_100446d6();
    local_18 = 7;
    FUN_100fbc78();
    local_18 = 8;
    fVar10 = (float10)FUN_10111f20();
    local_30fc = (int ***)(float)fVar10;
    local_30d0 = local_30fc;
    iVar8 = FUN_100fcb2d();
    FUN_100fbd22((DAT_1039d54c - DAT_1039d548 >> 3) * -0x55555555,
                 (float)local_30fc + *(float *)(iVar8 + 0x60));
    while (cVar1 = FUN_100fc2ca(), cVar1 != '\0') {
      ppppiVar3 = (int ****)local_3068;
      while( true ) {
        local_18 = 8;
        if (local_3068._4_4_ <= (int)ppppiVar3) break;
        local_30f8 = (int ***)((int)ppppiVar3 * 3);
        local_30fc = (int ***)ppppiVar3;
        FUN_1000334a((int)ppppiVar3 * 0x18 + DAT_1039d548);
        local_18 = 9;
        iVar8 = FUN_10014e26("\n",0);
        if (iVar8 != -1) {
          uVar2 = FUN_10014e26("\n",0);
          FUN_100729e8(&local_30f0,0,uVar2,&local_30c0);
          local_18 = 10;
          FUN_10020842();
          local_18 = 0xb;
          FUN_10004e60();
          local_30e0 = CONCAT44(uStack_30ac,local_30b0);
          local_30f0 = local_30c0;
          pppiStack_30ec = pppiStack_30bc;
          uStack_30e8 = uStack_30b8;
          uStack_30e4 = uStack_30b4;
          local_30b0 = 0;
          uStack_30ac = 0xf;
          local_30c0 = (int ***)((uint)local_30c0 & 0xffffff00);
          local_18 = 0xffffffff;
          FUN_10001fee();
          FUN_10001fee();
        }
        ppppiVar3 = &local_30f0;
        if (0xf < local_30e0._4_4_) {
          ppppiVar3 = (int ****)local_30f0;
        }
        local_18 = 9;
        FUN_1012d079(ppppiVar3,0);
        cVar1 = FUN_10115d1a();
        if (cVar1 != '\0') {
          if (*(uint *)(DAT_1039d548 + 0x14 + (int)local_30f8 * 8) < 0x10) {
            iVar8 = DAT_1039d548 + (int)local_30f8 * 8;
          }
          else {
            iVar8 = *(int *)(DAT_1039d548 + (int)local_30f8 * 8);
          }
          FUN_1012d079(iVar8,0);
          thunk_FUN_1010ad44();
        }
        local_18 = 0xffffffff;
        FUN_10001fee();
        ppppiVar3 = (int ****)((int)local_30fc + 1);
      }
    }
    FUN_10150ac8();
    local_18 = 0xffffffff;
    thunk_FUN_100fbc90();
    FUN_1022c200(&DAT_10389028);
  }
  cVar1 = FUN_1014fafc();
  if (cVar1 != '\0') {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d5a8)
       && (FUN_1022c0d0(&DAT_1039d5a8), DAT_1039d5a8 == -1)) {
      local_18 = 0xd;
      FUN_100ed98e();
      FUN_1022c3a0(&LAB_100eda59);
      local_18 = 0xffffffff;
      FUN_1022c180(&DAT_1039d5a8);
    }
    if (DAT_1039d304 == 0) {
      if (DAT_1039d2ec == '\0') {
        FUN_1010c3e4(&local_30f0);
        local_3068 = ZEXT48(local_30f0);
        cVar1 = FUN_1012e1b7(&DAT_1032eeed,&local_3068);
        if (cVar1 != '\0') {
          (*(code *)(*local_30d4)[9])();
        }
      }
      else if (DAT_1039d2ed == '\0') {
        FUN_1010c3e4(&local_30f0);
        local_3068 = ZEXT48(local_30f0);
        FUN_1013125a();
      }
      else {
        if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) <
             DAT_1039d5b0) && (FUN_1022c0d0(&DAT_1039d5b0), DAT_1039d5b0 == -1)) {
          local_18 = 0x10;
          FUN_1022c3a0(&LAB_100edb0b);
          local_18 = 0xffffffff;
          FUN_1022c180(&DAT_1039d5b0);
        }
        FUN_10131ed3();
        FUN_1012d079(&DAT_1032eefa,0);
        FUN_10114a0e(0,0xbf800000);
        FUN_1010c3e4(&local_3068);
        FUN_100fb68f((int ****)local_3068);
        cVar1 = FUN_10132c48();
        if (cVar1 != '\0') {
          local_30d4 = (int ***)FUN_1005c484(0,0);
          local_30f0 = (int ***)0x0;
          if ((int ****)local_30d4 != (int ****)0x0) {
            do {
              FUN_1005c2a2(&local_3068,0,0,local_30f0,0);
              pppiVar11 = local_3058;
              local_18 = 0xffffffff;
              FUN_100683f4();
              local_30c0 = pppiVar11;
              ppppiVar3 = (int ****)FUN_100627c2(&local_30c0);
              if (ppppiVar3 != DAT_1039d4d0) {
                local_30f4 = (int ***)ppppiVar3;
                local_3080[0] = FUN_1005c104();
                local_30a8 = "{:04d} : {}";
                uStack_30a4 = 0xb;
                FUN_100edb15(&local_3068,0xb1032fb0e,&local_30f0,local_3080);
                local_18 = 0x13;
                local_30fc = (int ***)DAT_10389070;
                puVar6 = &local_3068;
                if (0xf < local_3054) {
                  puVar6 = (undefined8 *)(int ****)local_3068;
                }
                local_30f8 = local_30f0;
                cVar1 = FUN_1015669c(local_30f0,puVar6,DAT_10389070 == (int ****)local_30f0,0,0);
                if (cVar1 != '\0') {
                  DAT_10389070 = (int ****)local_30f0;
                  puVar6 = &local_3068;
                  if (0xf < local_3054) {
                    puVar6 = (undefined8 *)(int ****)local_3068;
                  }
                  FUN_100180a6(puVar6,local_3058);
                  FUN_100eafee(local_30f4 + 10,local_30f0);
                }
                if (local_30fc == local_30f8) {
                  FUN_1011262c();
                }
                local_18 = 0xffffffff;
                FUN_10001fee();
              }
              local_30f0 = (int ***)((int)local_30f0 + 1);
            } while (local_30f0 < local_30d4);
          }
          FUN_101334a7();
        }
        FUN_100eb009();
      }
    }
    else {
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d5ac
          ) && (FUN_1022c0d0(&DAT_1039d5ac), DAT_1039d5ac == -1)) {
        local_18 = 0xe;
        FUN_1022c3a0(&LAB_100edb01);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_1039d5ac);
      }
      cVar1 = FUN_1001bb3a(&DAT_1039d2f4);
      if (cVar1 == '\0') {
        puVar5 = &DAT_1039d2f4;
        if (0xf < DAT_1039d308) {
          puVar5 = _DAT_1039d2f4;
        }
        FUN_100180a6(puVar5,DAT_1039d304);
        puVar4 = &DAT_10389058;
        if (0xf < DAT_1038906c) {
          puVar4 = DAT_10389058;
        }
        FUN_100e3322(&local_3068,3,"%s",puVar4);
        local_18 = 0xf;
        FUN_100e329a(&local_3068);
        local_18 = 0xffffffff;
        if (local_102c != (int *)0x0) {
          (**(code **)(*local_102c + 0x10))(local_102c != local_1050);
        }
      }
      FUN_10111871(DAT_1039d2ec);
      FUN_1010c3e4(&local_30f0);
      local_3068 = ZEXT48(local_30f0);
      puVar7 = &DAT_1032eec4;
      if (DAT_1039d2ec != '\0') {
        puVar7 = &DAT_1032f24c;
      }
      cVar1 = FUN_1012e1b7(puVar7,&local_3068);
      if (cVar1 != '\0') {
        _DAT_10389068 = 0;
        puVar4 = &DAT_10389058;
        if (0xf < DAT_1038906c) {
          puVar4 = DAT_10389058;
        }
        *(undefined1 *)puVar4 = 0;
        DAT_1039d304 = 0;
        puVar5 = &DAT_1039d2f4;
        if (0xf < DAT_1039d308) {
          puVar5 = _DAT_1039d2f4;
        }
        *puVar5 = 0;
        (*(code *)(*local_30d4)[9])();
      }
      cVar1 = FUN_10102a1a(0x400);
      if (cVar1 != '\0') {
        puVar5 = &DAT_1039d2f4;
        if (0xf < DAT_1039d308) {
          puVar5 = _DAT_1039d2f4;
        }
        FUN_10103022("%s",puVar5);
      }
      FUN_10111961();
    }
    FUN_100e4430();
    FUN_10150ac8();
  }
  ExceptionList = local_20;
  return;
}

