/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4710 */

longlong FUN_1400d4710(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined1 local_58 [32];
  
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1401cc498 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc498 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc498 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      lVar12 = DAT_1401cc498;
      puVar6 = (undefined8 *)FUN_1400d3680(0x30);
      local_60 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::ctype<char>::vftable;
        puVar7 = (undefined4 *)FUN_1400da3e0(local_58);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        uVar8 = *(undefined8 *)(puVar7 + 4);
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined4 *)(puVar6 + 2) = *puVar7;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
        *(undefined4 *)(puVar6 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
        puVar6[4] = uVar8;
        puVar6[5] = uVar4;
      }
      FUN_1400d4490(param_3,puVar6,lVar12);
    }
    else {
      if (DAT_1401cc498 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc498 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc498 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      lVar12 = DAT_1401cc498;
      uVar8 = FUN_14000b3ff(param_4);
      FUN_1400d4490(param_3,uVar8,lVar12);
    }
  }
  puVar6 = (undefined8 *)0x0;
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1401cc4e8 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc4e8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc4e8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      uVar13 = DAT_1401cc4e8;
      local_60 = (undefined8 *)FUN_1400d3680(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      FUN_1400d4490(param_3,puVar9,uVar13);
      if (DAT_1401cc198 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc198 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc198 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      uVar13 = DAT_1401cc198;
      local_60 = (undefined8 *)FUN_1400d3680(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      FUN_1400d4490(param_3,puVar9,uVar13);
      if (DAT_1401cc1a0 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc1a0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc1a0 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      lVar12 = DAT_1401cc1a0;
      local_60 = (undefined8 *)FUN_1400d3680(0x30);
      if (local_60 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1400d6540(local_60,param_1,0,0);
      }
    }
    else {
      if (DAT_1401cc4e8 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc4e8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc4e8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_68);
      }
      uVar13 = DAT_1401cc4e8;
      FUN_1400d39b0(local_64,0);
      puVar6 = DAT_1401cc4f0;
      local_60 = DAT_1401cc4f0;
      if (DAT_1401cc4e8 == 0) {
        FUN_1400d39b0(local_68,0);
        if (DAT_1401cc4e8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc4e8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar5 = DAT_1401cc4e8;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_1401cc4e8 * 8;
      if (DAT_1401cc4e8 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_1400d4c6f;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_1400d4c6f:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_1400d4c88:
          if (puVar9 != (undefined8 *)0x0) goto LAB_1400d4a8a;
        }
        else {
          lVar11 = FUN_1400d4110();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_1400d4c88;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_1400d4f70(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar6 = local_60;
          FUN_1400d3ca0(local_60);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar9);
          DAT_1401cc4f0 = puVar6;
        }
      }
LAB_1400d4a8a:
      FUN_1400d3a00(local_64);
      FUN_1400d4490(param_3,puVar9,uVar13);
      if (DAT_1401cc198 == 0) {
        FUN_1400d39b0(local_64,0);
        if (DAT_1401cc198 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc198 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_64);
      }
      uVar13 = DAT_1401cc198;
      FUN_1400d39b0(local_68,0);
      puVar6 = DAT_1401cc1b8;
      local_60 = DAT_1401cc1b8;
      if (DAT_1401cc198 == 0) {
        FUN_1400d39b0(local_64,0);
        if (DAT_1401cc198 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc198 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar5 = DAT_1401cc198;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_1401cc198 * 8;
      if (DAT_1401cc198 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_1400d4cde;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_1400d4cde:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_1400d4cf7:
          if (puVar9 != (undefined8 *)0x0) goto LAB_1400d4b70;
        }
        else {
          lVar11 = FUN_1400d4110();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_1400d4cf7;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_140023256(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar6 = local_60;
          FUN_1400d3ca0(local_60);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar9);
          DAT_1401cc1b8 = puVar6;
        }
      }
LAB_1400d4b70:
      FUN_1400d3a00(local_68);
      FUN_1400d4490(param_3,puVar9,uVar13);
      if (DAT_1401cc1a0 == 0) {
        FUN_1400d39b0(local_64,0);
        if (DAT_1401cc1a0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc1a0 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_64);
      }
      lVar12 = DAT_1401cc1a0;
      puVar6 = (undefined8 *)FUN_14002469f(param_4);
    }
    FUN_1400d4490(param_3,puVar6,lVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_1400d4e32;
  if (param_4 == 0) {
    if (DAT_1401cc1a8 == 0) {
      FUN_1400d39b0(local_64,0);
      if (DAT_1401cc1a8 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401cc1a8 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_64);
    }
    uVar13 = DAT_1401cc1a8;
    puVar9 = (undefined8 *)FUN_1400d3680(0x10);
    local_60 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = std::codecvt<char,char,_Mbstatet>::vftable;
    }
  }
  else {
    if (DAT_1401cc1a8 == 0) {
      FUN_1400d39b0(local_64,0);
      if (DAT_1401cc1a8 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401cc1a8 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_64);
    }
    uVar13 = DAT_1401cc1a8;
    FUN_1400d39b0(local_68,0);
    puVar6 = DAT_1401cc1d8;
    local_60 = DAT_1401cc1d8;
    if (DAT_1401cc1a8 == 0) {
      FUN_1400d39b0(local_64,0);
      if (DAT_1401cc1a8 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401cc1a8 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00();
    }
    uVar5 = DAT_1401cc1a8;
    lVar11 = *(longlong *)(param_4 + 8);
    lVar12 = DAT_1401cc1a8 * 8;
    if (DAT_1401cc1a8 < *(ulonglong *)(lVar11 + 0x18)) {
      puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
      if (puVar9 == (undefined8 *)0x0) goto LAB_1400d4eed;
    }
    else {
      puVar9 = (undefined8 *)0x0;
LAB_1400d4eed:
      if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_1400d4f06:
        if (puVar9 != (undefined8 *)0x0) goto LAB_1400d4e1b;
      }
      else {
        lVar11 = FUN_1400d4110();
        if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
          puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
          goto LAB_1400d4f06;
        }
      }
      puVar9 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        lVar12 = FUN_14003f8ec(&local_60,param_4);
        puVar9 = local_60;
        if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_14000b671();
        }
        puVar6 = local_60;
        FUN_1400d3ca0(local_60);
        (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar9);
        DAT_1401cc1d8 = puVar6;
      }
    }
LAB_1400d4e1b:
    FUN_1400d3a00(local_68);
  }
  FUN_1400d4490(param_3,puVar9,uVar13);
LAB_1400d4e32:
  FUN_1400fb8c0(param_1,param_2,param_3,param_4);
  FUN_1400de440(param_1,param_2,param_3,param_4);
  FUN_1400df970(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | param_2;
  lVar12 = *(longlong *)(param_1 + 0x58);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x60;
  }
  if (*(longlong *)(param_3 + 0x28) != lVar12) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      thunk_FUN_1401212e0();
    }
    *(undefined8 *)(param_3 + 0x28) = 0;
    if (lVar12 != 0) {
      lVar11 = -1;
      do {
        lVar10 = lVar11;
        lVar11 = lVar10 + 1;
      } while (*(char *)(lVar12 + lVar11) != '\0');
      lVar10 = lVar10 + 2;
      lVar11 = _malloc_base(lVar10);
      if (lVar11 != 0) {
        FUN_140135ff0(lVar11,lVar12,lVar10);
      }
      *(longlong *)(param_3 + 0x28) = lVar11;
    }
  }
  return param_3;
}

