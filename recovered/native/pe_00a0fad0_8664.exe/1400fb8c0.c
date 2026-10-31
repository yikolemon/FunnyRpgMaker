/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400fb8c0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1400fb8c0(_Locinfo *param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar6;
  _Collvec *p_Var7;
  undefined8 uVar8;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  _Collvec local_50;
  
  bVar5 = FUN_1400fc6a0(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4768 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4768 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4768 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_1400d3680(0x20);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        FUN_1400d4490(param_3,0);
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::collate<char>::vftable;
        p_Var7 = _Getcoll(&local_50);
        uVar1 = *(undefined4 *)&p_Var7->field_0x4;
        uVar2 = *(undefined4 *)&p_Var7->_LocaleName;
        uVar3 = *(undefined4 *)((longlong)&p_Var7->_LocaleName + 4);
        *(uint *)(ptVar6 + 0x10) = p_Var7->_Page;
        *(undefined4 *)(ptVar6 + 0x14) = uVar1;
        *(undefined4 *)(ptVar6 + 0x18) = uVar2;
        *(undefined4 *)(ptVar6 + 0x1c) = uVar3;
        FUN_1400d4490(param_3,ptVar6);
      }
    }
    else {
      if (DAT_1401d4768 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4768 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4768 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      FUN_1400d39b0(local_58,0);
      ptVar6 = DAT_1401d47a8;
      local_50._0_8_ = DAT_1401d47a8;
      if (DAT_1401d4768 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4768 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4768 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar12 = DAT_1401d4768;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4768 * 8;
      if (DAT_1401d4768 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1400fbb24;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fbb24:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fbb3d:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1400fba80;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400fbb3d;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1400fc6a0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1400d3ca0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar9);
          DAT_1401d47a8 = ptVar6;
        }
      }
LAB_1400fba80:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,ptVar9);
    }
  }
  ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4770 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4770 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4770 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      local_50._0_8_ = FUN_1400d3680(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ = std::messages<char>::vftable;
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                 local_50._0_8_;
      }
    }
    else {
      if (DAT_1401d4770 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4770 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4770 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      FUN_1400d39b0(local_58,0);
      ptVar9 = DAT_1401d47b0;
      local_50._0_8_ = DAT_1401d47b0;
      if (DAT_1401d4770 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4770 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4770 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar12 = DAT_1401d4770;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4770 * 8;
      if (DAT_1401d4770 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1400fbe21;
      }
      else {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fbe21:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fbe3a:
          if (ptVar6 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1400fbc6e;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400fbe3a;
          }
        }
        ptVar6 = ptVar9;
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1400fcb70(&local_50,param_4);
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          FUN_1400d3ca0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar6);
          DAT_1401d47b0 = ptVar6;
        }
      }
LAB_1400fbc6e:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,ptVar6);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4778 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4778 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4778 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4778;
      local_50._0_8_ = FUN_1400d3680(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_1400d4490(param_3,local_50._0_8_,uVar12);
      if (DAT_1401d4780 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4780 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4780 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4780;
      local_50._0_8_ = FUN_1400d3680(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_1400d4490(param_3,local_50._0_8_,uVar12);
      if (DAT_1401d4788 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4788 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4788 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4788;
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_1400d3680(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x0;
        FUN_1400ffe90(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,0>::vftable;
      }
      FUN_1400d4490(param_3,ptVar6,lVar11);
      if (DAT_1401d4790 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4790 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4790 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_1400d3680(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x1;
        FUN_1400ffe90(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,1>::vftable;
      }
      FUN_1400d4490(param_3,ptVar6);
    }
    else {
      if (DAT_1401d4778 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4778 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4778 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4778;
      FUN_1400d39b0(local_58,0);
      ptVar6 = DAT_1401d47b8;
      local_50._0_8_ = DAT_1401d47b8;
      if (DAT_1401d4778 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4778 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4778 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4778;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4778 * 8;
      if (DAT_1401d4778 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1400fc2ca;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fc2ca:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fc2e3:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1400fc00c;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400fc2e3;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1400fcd20(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1400d3ca0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar9);
          DAT_1401d47b8 = ptVar6;
        }
      }
LAB_1400fc00c:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,ptVar9,uVar12);
      if (DAT_1401d4780 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4780 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4780 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4780;
      FUN_1400d39b0(local_58,0);
      ptVar6 = DAT_1401d47c0;
      local_50._0_8_ = DAT_1401d47c0;
      if (DAT_1401d4780 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4780 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4780 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4780;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4780 * 8;
      if (DAT_1401d4780 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1400fc339;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fc339:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fc352:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1400fc0f2;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400fc352;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1400fe920(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_1400d3ca0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar9);
          DAT_1401d47c0 = ptVar6;
        }
      }
LAB_1400fc0f2:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,ptVar9,uVar12);
      if (DAT_1401d4788 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4788 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4788 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4788;
      uVar8 = FUN_140100360(param_4);
      FUN_1400d4490(param_3,uVar8,lVar11);
      if (DAT_1401d4790 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4790 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4790 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar8 = FUN_140100640(param_4);
      FUN_1400d4490(param_3,uVar8);
    }
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1401d4798 == 0) {
      FUN_1400d39b0(local_res10,0);
      if (DAT_1401d4798 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401d4798 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_res10);
    }
    uVar12 = DAT_1401d4798;
    local_50._0_8_ = FUN_1400d3680(0x58);
    uVar8 = 0;
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ !=
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      uVar8 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                         local_50._0_8_,param_1,0);
    }
    FUN_1400d4490(param_3,uVar8,uVar12);
    if (DAT_1401d47a0 == 0) {
      FUN_1400d39b0(local_res10,0);
      if (DAT_1401d47a0 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401d47a0 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_res10);
    }
    uVar12 = DAT_1401d47a0;
    local_50._0_8_ = FUN_1400d3680(0x18);
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ ==
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
    }
    else {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_140102480(local_50._0_8_,param_1,0);
    }
    goto LAB_1400fc575;
  }
  if (DAT_1401d4798 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401d4798 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401d4798 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00(local_res10);
  }
  uVar12 = DAT_1401d4798;
  FUN_1400d39b0(local_58,0);
  ptVar6 = DAT_1401d47d8;
  local_50._0_8_ = DAT_1401d47d8;
  if (DAT_1401d4798 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401d4798 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401d4798 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00();
  }
  uVar4 = DAT_1401d4798;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1401d4798 * 8;
  if (DAT_1401d4798 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_1400fc597;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fc597:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fc5b0:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1400fc480;
    }
    else {
      lVar10 = FUN_1400d4110();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1400fc5b0;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_1401007b0(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b671();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_1400d3ca0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar9);
      DAT_1401d47d8 = ptVar6;
    }
  }
LAB_1400fc480:
  FUN_1400d3a00(local_58);
  FUN_1400d4490(param_3,ptVar9,uVar12);
  if (DAT_1401d47a0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401d47a0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401d47a0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00(local_res10);
  }
  uVar12 = DAT_1401d47a0;
  FUN_1400d39b0(local_58,0);
  ptVar6 = DAT_1401d47e0;
  local_50._0_8_ = DAT_1401d47e0;
  if (DAT_1401d47a0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401d47a0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401d47a0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00();
  }
  uVar4 = DAT_1401d47a0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1401d47a0 * 8;
  if (DAT_1401d47a0 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_1400fc606;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1400fc606:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400fc61f:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1400fc566;
    }
    else {
      lVar10 = FUN_1400d4110();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1400fc61f;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_1401024f0(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b671();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_1400d3ca0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_140178c20)(ptVar9);
      DAT_1401d47e0 = ptVar6;
    }
  }
LAB_1400fc566:
  FUN_1400d3a00(local_58);
LAB_1400fc575:
  FUN_1400d4490(param_3,ptVar9,uVar12);
  return;
}

