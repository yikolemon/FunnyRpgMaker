/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180265360 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180265360(_Locinfo *param_1,uint param_2,undefined8 param_3,longlong param_4)

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
  
  bVar5 = FUN_18001c1fc(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1804175f8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_1804175f8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804175f8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_180239630(0x20);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        FUN_18023f260(param_3,0);
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
        FUN_18023f260(param_3,ptVar6);
      }
    }
    else {
      if (DAT_1804175f8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_1804175f8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804175f8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      FUN_18023d240(local_58,0);
      ptVar6 = DAT_180417600;
      local_50._0_8_ = DAT_180417600;
      if (DAT_1804175f8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_1804175f8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804175f8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar12 = DAT_1804175f8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1804175f8 * 8;
      if (DAT_1804175f8 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1802655c4;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1802655c4:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802655dd:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_180265520;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1802655dd;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_18001c1fc(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_18023ccb0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar9);
          DAT_180417600 = ptVar6;
        }
      }
LAB_180265520:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,ptVar9);
    }
  }
  ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_18041f078 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f078 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f078 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      local_50._0_8_ = FUN_180239630(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ = std::messages<char>::vftable;
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                 local_50._0_8_;
      }
    }
    else {
      if (DAT_18041f078 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f078 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f078 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      FUN_18023d240(local_58,0);
      ptVar9 = DAT_18041f0b0;
      local_50._0_8_ = DAT_18041f0b0;
      if (DAT_18041f078 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f078 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f078 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar12 = DAT_18041f078;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041f078 * 8;
      if (DAT_18041f078 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_1802658c1;
      }
      else {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1802658c1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802658da:
          if (ptVar6 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_18026570e;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar12 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar6 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1802658da;
          }
        }
        ptVar6 = ptVar9;
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_180266140(&local_50,param_4);
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          FUN_18023ccb0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar6);
          DAT_18041f0b0 = ptVar6;
        }
      }
LAB_18026570e:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,ptVar6);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_18041f080 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f080 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f080 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041f080;
      local_50._0_8_ = FUN_180239630(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_18023f260(param_3,local_50._0_8_,uVar12);
      if (DAT_18041f088 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f088 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f088 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041f088;
      local_50._0_8_ = FUN_180239630(0x10);
      if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_
          != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        *(undefined4 *)(local_50._0_8_ + 8) = 0;
        *(undefined ***)local_50._0_8_ =
             std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
      }
      FUN_18023f260(param_3,local_50._0_8_,uVar12);
      if (DAT_18041f090 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f090 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f090 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041f090;
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_180239630(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x0;
        FUN_180269460(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,0>::vftable;
      }
      FUN_18023f260(param_3,ptVar6,lVar11);
      if (DAT_18041f098 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f098 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f098 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_180239630(0x78);
      local_50._0_8_ = ptVar6;
      if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
        ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      }
      else {
        *(undefined4 *)(ptVar6 + 8) = 0;
        *(undefined ***)ptVar6 = std::_Mpunct<char>::vftable;
        ptVar6[0x44] = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>)0x1;
        FUN_180269460(ptVar6,param_1,0);
        *(undefined ***)ptVar6 = std::moneypunct<char,1>::vftable;
      }
      FUN_18023f260(param_3,ptVar6);
    }
    else {
      if (DAT_18041f080 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f080 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f080 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041f080;
      FUN_18023d240(local_58,0);
      ptVar6 = DAT_18041f0b8;
      local_50._0_8_ = DAT_18041f0b8;
      if (DAT_18041f080 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f080 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f080 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041f080;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041f080 * 8;
      if (DAT_18041f080 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_180265d6a;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_180265d6a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180265d83:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_180265aac;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180265d83;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_1802662f0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_18023ccb0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar9);
          DAT_18041f0b8 = ptVar6;
        }
      }
LAB_180265aac:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,ptVar9,uVar12);
      if (DAT_18041f088 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f088 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f088 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041f088;
      FUN_18023d240(local_58,0);
      ptVar6 = DAT_18041f0c0;
      local_50._0_8_ = DAT_18041f0c0;
      if (DAT_18041f088 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f088 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f088 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041f088;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041f088 * 8;
      if (DAT_18041f088 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        goto LAB_180265dd9;
      }
      else {
        ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_180265dd9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180265df2:
          if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                        0x0) goto LAB_180265b92;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                      (lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180265df2;
          }
        }
        ptVar9 = ptVar6;
        if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
        {
          lVar11 = FUN_180267ef0(&local_50,param_4);
          ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                   local_50._0_8_;
          FUN_18023ccb0(local_50._0_8_);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar9);
          DAT_18041f0c0 = ptVar6;
        }
      }
LAB_180265b92:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,ptVar9,uVar12);
      if (DAT_18041f090 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f090 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f090 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041f090;
      uVar8 = FUN_180269930(param_4);
      FUN_18023f260(param_3,uVar8,lVar11);
      if (DAT_18041f098 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041f098 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041f098 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar8 = FUN_180269c10(param_4);
      FUN_18023f260(param_3,uVar8);
    }
  }
  if ((param_2 & 0x10) == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_18041f0a0 == 0) {
      FUN_18023d240(local_res10,0);
      if (DAT_18041f0a0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_18041f0a0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_res10);
    }
    uVar12 = DAT_18041f0a0;
    local_50._0_8_ = FUN_180239630(0x58);
    uVar8 = 0;
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ !=
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      uVar8 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                         local_50._0_8_,param_1,0);
    }
    FUN_18023f260(param_3,uVar8,uVar12);
    if (DAT_18041f0a8 == 0) {
      FUN_18023d240(local_res10,0);
      if (DAT_18041f0a8 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_18041f0a8 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_res10);
    }
    uVar12 = DAT_18041f0a8;
    local_50._0_8_ = FUN_180239630(0x18);
    if ((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)local_50._0_8_ ==
        (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
    }
    else {
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               FUN_18026ba50(local_50._0_8_,param_1,0);
    }
    goto LAB_180266015;
  }
  if (DAT_18041f0a0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_18041f0a0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_18041f0a0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290(local_res10);
  }
  uVar12 = DAT_18041f0a0;
  FUN_18023d240(local_58,0);
  ptVar6 = DAT_18041f0d8;
  local_50._0_8_ = DAT_18041f0d8;
  if (DAT_18041f0a0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_18041f0a0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_18041f0a0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290();
  }
  uVar4 = DAT_18041f0a0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_18041f0a0 * 8;
  if (DAT_18041f0a0 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_180266037;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_180266037:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180266050:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_180265f20;
    }
    else {
      lVar10 = FUN_18023d160();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_180266050;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_180269d80(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_18000cdb9();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_18023ccb0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar9);
      DAT_18041f0d8 = ptVar6;
    }
  }
LAB_180265f20:
  FUN_18023d290(local_58);
  FUN_18023f260(param_3,ptVar9,uVar12);
  if (DAT_18041f0a8 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_18041f0a8 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_18041f0a8 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290(local_res10);
  }
  uVar12 = DAT_18041f0a8;
  FUN_18023d240(local_58,0);
  ptVar6 = DAT_18041f0e0;
  local_50._0_8_ = DAT_18041f0e0;
  if (DAT_18041f0a8 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_18041f0a8 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_18041f0a8 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290();
  }
  uVar4 = DAT_18041f0a8;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_18041f0a8 * 8;
  if (DAT_18041f0a8 < *(ulonglong *)(lVar10 + 0x18)) {
    ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
              (lVar11 + *(longlong *)(lVar10 + 0x10));
    if (ptVar9 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
    goto LAB_1802660a6;
  }
  else {
    ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
LAB_1802660a6:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802660bf:
      if (ptVar9 != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0)
      goto LAB_180266006;
    }
    else {
      lVar10 = FUN_18023d160();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        ptVar9 = *(time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> **)
                  (lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1802660bf;
      }
    }
    ptVar9 = ptVar6;
    if (ptVar6 == (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar11 = FUN_18026bac0(&local_50,param_4);
      ptVar9 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_18000cdb9();
      }
      ptVar6 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
               local_50._0_8_;
      FUN_18023ccb0(local_50._0_8_);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(ptVar9);
      DAT_18041f0e0 = ptVar6;
    }
  }
LAB_180266006:
  FUN_18023d290(local_58);
LAB_180266015:
  FUN_18023f260(param_3,ptVar9,uVar12);
  return;
}

