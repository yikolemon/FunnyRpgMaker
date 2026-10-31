/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802480d0 */

void FUN_1802480d0(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_180417eb0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417eb0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417eb0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_180417eb0;
      local_50[0] = (undefined8 *)FUN_180239630(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_180093960(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_180417eb0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417eb0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417eb0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_180417eb0;
      puVar6 = (undefined8 *)FUN_180093388(param_4);
    }
    FUN_18023f260(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef40 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef40 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef40 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef40;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_180417c98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_180417c98;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_1804174a0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_1804174a0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804174a0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_1804174a0;
      puVar6 = (undefined8 *)FUN_180239630(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<wchar_t>::vftable;
        FUN_180048bcc(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_18023f260(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_18041ef40 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef40 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef40 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef40;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041efd0;
      local_50[0] = DAT_18041efd0;
      if (DAT_18041ef40 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef40 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef40 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef40;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef40 * 8;
      if (DAT_18041ef40 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024864a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024864a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180248663:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024843d;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180248663;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18024bd90(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041efd0 = puVar8;
        }
      }
LAB_18024843d:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_180417c98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_180417c98;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_180417dd8;
      local_50[0] = DAT_180417dd8;
      if (DAT_180417c98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_180417c98;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_180417c98 * 8;
      if (DAT_180417c98 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1802486b9;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1802486b9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802486d2:
          if (puVar6 != (undefined8 *)0x0) goto LAB_180248523;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1802486d2;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1800a4be0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_180417dd8 = puVar8;
        }
      }
LAB_180248523:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_1804174a0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_1804174a0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804174a0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_1804174a0;
      uVar9 = FUN_180047447(param_4);
      FUN_18023f260(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_180093498(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_180417c88 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c88 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c88 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_180417c88;
      puVar6 = (undefined8 *)FUN_180239630(0x20);
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
      if (DAT_180417c88 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c88 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c88 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_180417c88;
      FUN_18023d240(local_58,0);
      puVar6 = DAT_180417dc8;
      local_50[0] = DAT_180417dc8;
      if (DAT_180417c88 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417c88 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c88 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_180417c88;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_180417c88 * 8;
      if (DAT_180417c88 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_1802488a6;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_1802488a6:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802488bf:
          if (puVar8 != (undefined8 *)0x0) goto LAB_180248800;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1802488bf;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_180093498(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar8);
          DAT_180417dc8 = puVar8;
        }
      }
LAB_180248800:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef48 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef48 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef48 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef48;
      puVar6 = (undefined8 *)FUN_180239630(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<wchar_t>::vftable;
      }
    }
    else {
      if (DAT_18041ef48 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef48 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef48 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef48;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041efd8;
      local_50[0] = DAT_18041efd8;
      if (DAT_18041ef48 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef48 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef48 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef48;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef48 * 8;
      if (DAT_18041ef48 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_180248ba0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_180248ba0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180248bb9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1802489ed;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180248bb9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18024d3f0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041efd8 = puVar8;
        }
      }
LAB_1802489ed:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef50 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef50 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef50 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef50;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_18023f260(param_3,local_50[0],uVar12);
      if (DAT_18041ef58 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef58 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef58 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef58;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                       ::vftable;
      }
      FUN_18023f260(param_3,local_50[0],uVar12);
      if (DAT_18041ef60 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef60 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef60 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef60;
      puVar8 = (undefined8 *)FUN_180239630(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_180250950(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,0>::vftable;
      }
      FUN_18023f260(param_3,puVar8,lVar11);
      if (DAT_18041ef68 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef68 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef68 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef68;
      puVar8 = (undefined8 *)FUN_180239630(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<wchar_t>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_180250950(puVar8,param_1,0);
        *puVar8 = std::moneypunct<wchar_t,1>::vftable;
      }
    }
    else {
      if (DAT_18041ef50 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef50 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef50 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef50;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041efe0;
      local_50[0] = DAT_18041efe0;
      if (DAT_18041ef50 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef50 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef50 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef50;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef50 * 8;
      if (DAT_18041ef50 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_180249041;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_180249041:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024905a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_180248d83;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024905a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18024d5b0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041efe0 = puVar8;
        }
      }
LAB_180248d83:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef58 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef58 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef58 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef58;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041efe8;
      local_50[0] = DAT_18041efe8;
      if (DAT_18041ef58 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef58 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef58 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef58;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef58 * 8;
      if (DAT_18041ef58 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1802490b0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1802490b0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1802490c9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_180248e69;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1802490c9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18024f3c0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041efe8 = puVar8;
        }
      }
LAB_180248e69:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef60 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef60 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef60 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef60;
      uVar9 = FUN_180250e90(param_4);
      FUN_18023f260(param_3,uVar9,lVar11);
      if (DAT_18041ef68 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef68 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef68 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef68;
      puVar8 = (undefined8 *)FUN_180251170(param_4);
    }
    FUN_18023f260(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef70 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef70 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef70 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef70;
      local_50[0] = (undefined8 *)FUN_180239630(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_18023f260(param_3,uVar9,uVar12);
      if (DAT_18041ef38 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef38 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef38 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef38;
      local_50[0] = (undefined8 *)FUN_180239630(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_18024b790(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_18041ef70 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef70 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef70 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef70;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f000;
      local_50[0] = DAT_18041f000;
      if (DAT_18041ef70 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef70 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef70 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef70;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef70 * 8;
      if (DAT_18041ef70 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_180249381;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_180249381:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024939a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1802491f7;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024939a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1802512e0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f000 = puVar8;
        }
      }
LAB_1802491f7:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef38 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef38 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef38 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef38;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f008;
      local_50[0] = DAT_18041f008;
      if (DAT_18041ef38 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef38 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef38 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef38;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef38 * 8;
      if (DAT_18041ef38 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1802493f0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1802493f0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180249409:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1802492dd;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180249409;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18024b800(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f008 = puVar8;
        }
      }
LAB_1802492dd:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_180417ee0 == 0) {
      FUN_18023d240(local_res10,0);
      if (DAT_180417ee0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_180417ee0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_res10);
    }
    uVar12 = DAT_180417ee0;
    local_50[0] = (undefined8 *)FUN_180239630(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_180245100(local_50[0],param_1,0);
    }
    goto LAB_18024953e;
  }
  if (DAT_180417ee0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_180417ee0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_180417ee0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290(local_res10);
  }
  uVar12 = DAT_180417ee0;
  FUN_18023d240(&local_54,0);
  puVar8 = DAT_180419148;
  local_50[0] = DAT_180419148;
  if (DAT_180417ee0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_180417ee0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_180417ee0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290();
  }
  uVar4 = DAT_180417ee0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_180417ee0 * 8;
  if (DAT_180417ee0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_180249560;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_180249560:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180249579:
      if (puVar6 != (undefined8 *)0x0) goto LAB_18024952f;
    }
    else {
      lVar10 = FUN_18023d160();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_180249579;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_180245160(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_18000cdb9();
      }
      puVar8 = local_50[0];
      FUN_18023ccb0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
      DAT_180419148 = puVar8;
    }
  }
LAB_18024952f:
  FUN_18023d290(&local_54);
LAB_18024953e:
  FUN_18023f260(param_3,puVar6,uVar12);
  return;
}

