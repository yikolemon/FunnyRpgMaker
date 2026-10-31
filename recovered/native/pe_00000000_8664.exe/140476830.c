/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140476830 */

/* WARNING: Type propagation algorithm not settling */

void FUN_140476830(_Locinfo *param_1,uint param_2,undefined8 param_3,longlong param_4)

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
  
  bVar5 = FUN_14022d6cc(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_140628ac8 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140628ac8 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628ac8 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14044ab00(0x20);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        FUN_140450730(param_3,0);
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined **)ptVar6 = &DAT_1404c2708;
        p_Var7 = _Getcoll(&local_50);
        uVar1 = *(undefined4 *)&p_Var7->field_0x4;
        uVar2 = *(undefined4 *)&p_Var7->_LocaleName;
        uVar3 = *(undefined4 *)((longlong)&p_Var7->_LocaleName + 4);
        *(uint *)(ptVar6 + 0x10) = p_Var7->_Page;
        *(undefined4 *)(ptVar6 + 0x14) = uVar1;
        *(undefined4 *)(ptVar6 + 0x18) = uVar2;
        *(undefined4 *)(ptVar6 + 0x1c) = uVar3;
        FUN_140450730(param_3,ptVar6);
      }
    }
    else {
      if (DAT_140628ac8 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140628ac8 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628ac8 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      FUN_14044e710(local_58,0);
      ptVar6 = DAT_140628ad0;
      local_50._0_8_ = DAT_140628ad0;
      if (DAT_140628ac8 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140628ac8 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628ac8 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar12 = DAT_140628ac8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140628ac8 * 8;
      if (DAT_140628ac8 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_140476a94;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_140476a94:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140476aad:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_1404769f0;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140476aad;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_14022d6cc(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_14044e180(local_50._0_8_);
          (*DAT_14059d150)(ptVar9);
          DAT_140628ad0 = ptVar6;
        }
      }
LAB_1404769f0:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,ptVar9);
    }
  }
  ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_140630548 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630548 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630548 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      local_50._0_8_ = FUN_14044ab00(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined **)local_50._0_8_ = &DAT_1405391b8;
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                 local_50._0_8_;
      }
    }
    else {
      if (DAT_140630548 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630548 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630548 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      FUN_14044e710(local_58,0);
      ptVar9 = DAT_140630580;
      local_50._0_8_ = DAT_140630580;
      if (DAT_140630548 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630548 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630548 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar12 = DAT_140630548;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630548 * 8;
      if (DAT_140630548 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_140476d91;
      }
      else {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_140476d91:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140476daa:
          if (ptVar6 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_140476bde;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140476daa;
          }
        }
        ptVar6 = ptVar9;
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_140477610(&local_50,param_4);
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          FUN_14044e180(local_50._0_8_);
          (*DAT_14059d150)(ptVar6);
          DAT_140630580 = ptVar6;
        }
      }
LAB_140476bde:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,ptVar6);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_140630550 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630550 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630550 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630550;
      local_50._0_8_ = FUN_14044ab00(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined **)local_50._0_8_ = &DAT_1405391f0;
      }
      FUN_140450730(param_3,local_50._0_8_,uVar12);
      if (DAT_140630558 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630558 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630558 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630558;
      local_50._0_8_ = FUN_14044ab00(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined **)local_50._0_8_ = &DAT_140539220;
      }
      FUN_140450730(param_3,local_50._0_8_,uVar12);
      if (DAT_140630560 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630560 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630560 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630560;
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14044ab00(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined **)ptVar6 = &DAT_140539250;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x0;
        FUN_14047a930(ptVar6,param_1,0);
        *(undefined **)ptVar6 = &DAT_1405392b8;
      }
      FUN_140450730(param_3,ptVar6,lVar11);
      if (DAT_140630568 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630568 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630568 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14044ab00(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined **)ptVar6 = &DAT_140539250;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x1;
        FUN_14047a930(ptVar6,param_1,0);
        *(undefined **)ptVar6 = &DAT_140539320;
      }
      FUN_140450730(param_3,ptVar6);
    }
    else {
      if (DAT_140630550 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630550 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630550 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630550;
      FUN_14044e710(local_58,0);
      ptVar6 = DAT_140630588;
      local_50._0_8_ = DAT_140630588;
      if (DAT_140630550 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630550 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630550 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630550;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630550 * 8;
      if (DAT_140630550 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_14047723a;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_14047723a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140477253:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_140476f7c;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140477253;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1404777c0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_14044e180(local_50._0_8_);
          (*DAT_14059d150)(ptVar9);
          DAT_140630588 = ptVar6;
        }
      }
LAB_140476f7c:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,ptVar9,uVar12);
      if (DAT_140630558 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630558 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630558 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630558;
      FUN_14044e710(local_58,0);
      ptVar6 = DAT_140630590;
      local_50._0_8_ = DAT_140630590;
      if (DAT_140630558 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630558 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630558 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630558;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630558 * 8;
      if (DAT_140630558 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1404772a9;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1404772a9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1404772c2:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_140477062;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1404772c2;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1404793c0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_14044e180(local_50._0_8_);
          (*DAT_14059d150)(ptVar9);
          DAT_140630590 = ptVar6;
        }
      }
LAB_140477062:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,ptVar9,uVar12);
      if (DAT_140630560 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630560 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630560 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630560;
      uVar8 = FUN_14047ae00(param_4);
      FUN_140450730(param_3,uVar8,lVar11);
      if (DAT_140630568 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630568 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630568 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar8 = FUN_14047b0e0(param_4);
      FUN_140450730(param_3,uVar8);
    }
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_140630570 == 0) {
      FUN_14044e710(local_res10,0);
      if (DAT_140630570 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140630570 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_res10);
    }
    uVar12 = DAT_140630570;
    local_50._0_8_ = FUN_14044ab00(0x58);
    uVar8 = 0;
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ !=
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      uVar8 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                         local_50._0_8_,param_1,0);
    }
    FUN_140450730(param_3,uVar8,uVar12);
    if (DAT_140630578 == 0) {
      FUN_14044e710(local_res10,0);
      if (DAT_140630578 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140630578 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_res10);
    }
    uVar12 = DAT_140630578;
    local_50._0_8_ = FUN_14044ab00(0x18);
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ ==
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
    }
    else {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_14047cf20(local_50._0_8_,param_1,0);
    }
    goto LAB_1404774e5;
  }
  if (DAT_140630570 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140630570 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140630570 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760(local_res10);
  }
  uVar12 = DAT_140630570;
  FUN_14044e710(local_58,0);
  ptVar6 = DAT_1406305a8;
  local_50._0_8_ = DAT_1406305a8;
  if (DAT_140630570 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140630570 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140630570 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760();
  }
  uVar4 = DAT_140630570;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_140630570 * 8;
  if (DAT_140630570 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_140477507;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_140477507:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140477520:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1404773f0;
    }
    else {
      lVar10 = FUN_14044e630();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_140477520;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_14047b250(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14021e289();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_14044e180(local_50._0_8_);
      (*DAT_14059d150)(ptVar9);
      DAT_1406305a8 = ptVar6;
    }
  }
LAB_1404773f0:
  FUN_14044e760(local_58);
  FUN_140450730(param_3,ptVar9,uVar12);
  if (DAT_140630578 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140630578 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140630578 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760(local_res10);
  }
  uVar12 = DAT_140630578;
  FUN_14044e710(local_58,0);
  ptVar6 = DAT_1406305b0;
  local_50._0_8_ = DAT_1406305b0;
  if (DAT_140630578 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140630578 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140630578 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760();
  }
  uVar4 = DAT_140630578;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_140630578 * 8;
  if (DAT_140630578 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_140477576;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_140477576:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14047758f:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_1404774d6;
    }
    else {
      lVar10 = FUN_14044e630();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_14047758f;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_14047cf90(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14021e289();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_14044e180(local_50._0_8_);
      (*DAT_14059d150)(ptVar9);
      DAT_1406305b0 = ptVar6;
    }
  }
LAB_1404774d6:
  FUN_14044e760(local_58);
LAB_1404774e5:
  FUN_140450730(param_3,ptVar9,uVar12);
  return;
}

