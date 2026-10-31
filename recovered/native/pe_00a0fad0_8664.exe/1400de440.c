/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de440 */

void FUN_1400de440(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 *puVar6;
  _Collvec *p_Var7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_58 [4];
  uint local_54;
  undefined8 *local_50 [3];
  
  puVar8 = (undefined8 *)0x0;
  local_54 = param_2 & 2;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1401cc490 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc490 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc490 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc490;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_140062c0c(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1401cc490 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc490 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc490 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc490;
      puVar6 = (undefined8 *)FUN_1400629e2(param_4);
    }
    FUN_1400d4490(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4628 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4628 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4628 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4628;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401cc838 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc838 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc838 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401cc838;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401cc1f8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc1f8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc1f8 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc1f8;
      puVar6 = (undefined8 *)FUN_1400d3680(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<wchar_t>::vftable;
        FUN_14005ecc6(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_1400d4490(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_1401d4628 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4628 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4628 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4628;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46b8;
      local_50[0] = DAT_1401d46b8;
      if (DAT_1401d4628 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4628 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4628 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4628;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4628 * 8;
      if (DAT_1401d4628 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400de9ba;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400de9ba:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400de9d3:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400de7ad;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400de9d3;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e22f0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46b8 = puVar8;
        }
      }
LAB_1400de7ad:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401cc838 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc838 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc838 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401cc838;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401cc950;
      local_50[0] = DAT_1401cc950;
      if (DAT_1401cc838 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc838 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc838 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401cc838;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401cc838 * 8;
      if (DAT_1401cc838 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400dea29;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400dea29:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400dea42:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400de893;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400dea42;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400a8d64(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401cc950 = puVar8;
        }
      }
LAB_1400de893:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401cc1f8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc1f8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc1f8 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc1f8;
      uVar9 = FUN_14005d541(param_4);
      FUN_1400d4490(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_1400936b8(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1401cc830 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc830 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc830 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401cc830;
      puVar6 = (undefined8 *)FUN_1400d3680(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::collate<wchar_t>::vftable;
        p_Var7 = _Getcoll((_Collvec *)local_50);
        uVar1 = *(undefined4 *)&p_Var7->field_0x4;
        uVar2 = *(undefined4 *)&p_Var7->_LocaleName;
        uVar3 = *(undefined4 *)((longlong)&p_Var7->_LocaleName + 4);
        *(uint *)(puVar6 + 2) = p_Var7->_Page;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
        *(undefined4 *)(puVar6 + 3) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
        puVar8 = puVar6;
      }
    }
    else {
      if (DAT_1401cc830 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc830 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc830 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401cc830;
      FUN_1400d39b0(local_58,0);
      puVar6 = DAT_1401cc8c8;
      local_50[0] = DAT_1401cc8c8;
      if (DAT_1401cc830 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc830 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc830 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401cc830;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401cc830 * 8;
      if (DAT_1401cc830 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_1400dec16;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_1400dec16:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400dec2f:
          if (puVar8 != (undefined8 *)0x0) goto LAB_1400deb70;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400dec2f;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_1400936b8(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar8);
          DAT_1401cc8c8 = puVar8;
        }
      }
LAB_1400deb70:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4630 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4630 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4630 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4630;
      puVar6 = (undefined8 *)FUN_1400d3680(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<wchar_t>::vftable;
      }
    }
    else {
      if (DAT_1401d4630 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4630 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4630 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4630;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46c0;
      local_50[0] = DAT_1401d46c0;
      if (DAT_1401d4630 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4630 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4630 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4630;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4630 * 8;
      if (DAT_1401d4630 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400def10;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400def10:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400def29:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400ded5d;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400def29;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e3950(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46c0 = puVar8;
        }
      }
LAB_1400ded5d:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4638 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4638 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4638 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4638;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_1400d4490(param_3,local_50[0],uVar12);
      if (DAT_1401d4640 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4640 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4640 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4640;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_1400d4490(param_3,local_50[0],uVar12);
      if (DAT_1401d4648 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4648 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4648 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4648;
      puVar8 = (undefined8 *)FUN_1400d3680(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_1400e6eb0(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,0>::vftable;
      }
      FUN_1400d4490(param_3,puVar8,lVar11);
      if (DAT_1401d4650 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4650 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4650 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4650;
      puVar8 = (undefined8 *)FUN_1400d3680(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_1400e6eb0(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,1>::vftable;
      }
    }
    else {
      if (DAT_1401d4638 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4638 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4638 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4638;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46c8;
      local_50[0] = DAT_1401d46c8;
      if (DAT_1401d4638 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4638 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4638 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4638;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4638 * 8;
      if (DAT_1401d4638 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400df3b1;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400df3b1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400df3ca:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400df0f3;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400df3ca;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e3b10(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46c8 = puVar8;
        }
      }
LAB_1400df0f3:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4640 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4640 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4640 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4640;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46d0;
      local_50[0] = DAT_1401d46d0;
      if (DAT_1401d4640 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4640 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4640 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4640;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4640 * 8;
      if (DAT_1401d4640 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400df420;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400df420:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400df439:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400df1d9;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400df439;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e5920(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46d0 = puVar8;
        }
      }
LAB_1400df1d9:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4648 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4648 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4648 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4648;
      uVar9 = FUN_1400e73f0(param_4);
      FUN_1400d4490(param_3,uVar9,lVar11);
      if (DAT_1401d4650 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4650 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4650 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4650;
      puVar8 = (undefined8 *)FUN_1400e76d0(param_4);
    }
    FUN_1400d4490(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4658 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4658 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4658 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4658;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_1400d4490(param_3,uVar9,uVar12);
      if (DAT_1401d4620 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4620 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4620 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4620;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1400e1cf0(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1401d4658 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4658 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4658 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4658;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46e8;
      local_50[0] = DAT_1401d46e8;
      if (DAT_1401d4658 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4658 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4658 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4658;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4658 * 8;
      if (DAT_1401d4658 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400df6f1;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400df6f1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400df70a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400df567;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400df70a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e7840(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46e8 = puVar8;
        }
      }
LAB_1400df567:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4620 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4620 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4620 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4620;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d46f0;
      local_50[0] = DAT_1401d46f0;
      if (DAT_1401d4620 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4620 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4620 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4620;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4620 * 8;
      if (DAT_1401d4620 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400df760;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400df760:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400df779:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400df64d;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400df779;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e1d60(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d46f0 = puVar8;
        }
      }
LAB_1400df64d:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1401cc4c0 == 0) {
      FUN_1400d39b0(local_res10,0);
      if (DAT_1401cc4c0 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401cc4c0 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_res10);
    }
    uVar12 = DAT_1401cc4c0;
    local_50[0] = (undefined8 *)FUN_1400d3680(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1400e0ea0(local_50[0],param_1,0);
    }
    goto LAB_1400df8ae;
  }
  if (DAT_1401cc4c0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401cc4c0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4c0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00(local_res10);
  }
  uVar12 = DAT_1401cc4c0;
  FUN_1400d39b0(&local_54,0);
  puVar8 = DAT_1401d46f8;
  local_50[0] = DAT_1401d46f8;
  if (DAT_1401cc4c0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401cc4c0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4c0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00();
  }
  uVar4 = DAT_1401cc4c0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1401cc4c0 * 8;
  if (DAT_1401cc4c0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_1400df8d0;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_1400df8d0:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400df8e9:
      if (puVar6 != (undefined8 *)0x0) goto LAB_1400df89f;
    }
    else {
      lVar10 = FUN_1400d4110();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1400df8e9;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_1400e0f00(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b671();
      }
      puVar8 = local_50[0];
      FUN_1400d3ca0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
      DAT_1401d46f8 = puVar8;
    }
  }
LAB_1400df89f:
  FUN_1400d3a00(&local_54);
LAB_1400df8ae:
  FUN_1400d4490(param_3,puVar6,uVar12);
  return;
}

