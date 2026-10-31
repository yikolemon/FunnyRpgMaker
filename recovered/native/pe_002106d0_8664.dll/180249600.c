/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180249600 */

void FUN_180249600(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_180417ec8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417ec8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417ec8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_180417ec8;
      local_50[0] = (undefined8 *)FUN_180239630(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_18024b090(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_180417ec8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_180417ec8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417ec8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_180417ec8;
      puVar6 = (undefined8 *)FUN_1802530d0(param_4);
    }
    FUN_18023f260(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef78 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef78 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef78 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef78;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef80 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef80;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef88 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef88 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef88 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef88;
      puVar6 = (undefined8 *)FUN_180239630(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<unsigned_short>::vftable;
        FUN_1802561d0(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_18023f260(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_18041ef78 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef78 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef78 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef78;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f018;
      local_50[0] = DAT_18041f018;
      if (DAT_18041ef78 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef78 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef78 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef78;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef78 * 8;
      if (DAT_18041ef78 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_180249b7a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_180249b7a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180249b93:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024996d;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180249b93;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1802531f0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f018 = puVar8;
        }
      }
LAB_18024996d:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef80 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef80;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f020;
      local_50[0] = DAT_18041f020;
      if (DAT_18041ef80 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef80;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef80 * 8;
      if (DAT_18041ef80 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_180249be9;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_180249be9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180249c02:
          if (puVar6 != (undefined8 *)0x0) goto LAB_180249a53;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180249c02;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1802546f0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f020 = puVar8;
        }
      }
LAB_180249a53:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041ef88 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef88 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef88 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041ef88;
      uVar9 = FUN_1802565b0(param_4);
      FUN_18023f260(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_1802566d0(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef90 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef90;
      puVar6 = (undefined8 *)FUN_180239630(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::collate<unsigned_short>::vftable;
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
      if (DAT_18041ef90 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef90;
      FUN_18023d240(local_58,0);
      puVar6 = DAT_18041f030;
      local_50[0] = DAT_18041f030;
      if (DAT_18041ef90 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef90;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef90 * 8;
      if (DAT_18041ef90 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_180249dd6;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_180249dd6:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_180249def:
          if (puVar8 != (undefined8 *)0x0) goto LAB_180249d30;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_180249def;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_1802566d0(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar8);
          DAT_18041f030 = puVar8;
        }
      }
LAB_180249d30:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_18041ef98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef98;
      puVar6 = (undefined8 *)FUN_180239630(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<unsigned_short>::vftable;
      }
    }
    else {
      if (DAT_18041ef98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041ef98;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f038;
      local_50[0] = DAT_18041f038;
      if (DAT_18041ef98 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041ef98 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041ef98 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041ef98;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041ef98 * 8;
      if (DAT_18041ef98 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024a0d0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024a0d0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024a0e9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_180249f1d;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024a0e9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_180256bc0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f038 = puVar8;
        }
      }
LAB_180249f1d:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_18041efa0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efa0;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_18023f260(param_3,local_50[0],uVar12);
      if (DAT_18041efa8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efa8;
      local_50[0] = (undefined8 *)FUN_180239630(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_18023f260(param_3,local_50[0],uVar12);
      if (DAT_18041efb0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efb0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efb0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041efb0;
      puVar8 = (undefined8 *)FUN_180239630(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_18025a480(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,0>::vftable;
      }
      FUN_18023f260(param_3,puVar8,lVar11);
      if (DAT_18041efb8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efb8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efb8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041efb8;
      puVar8 = (undefined8 *)FUN_180239630(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_18025a480(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,1>::vftable;
      }
    }
    else {
      if (DAT_18041efa0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efa0;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f040;
      local_50[0] = DAT_18041f040;
      if (DAT_18041efa0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041efa0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041efa0 * 8;
      if (DAT_18041efa0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024a571;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024a571:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024a58a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024a2b3;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024a58a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_180256d70(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f040 = puVar8;
        }
      }
LAB_18024a2b3:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041efa8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efa8;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f048;
      local_50[0] = DAT_18041f048;
      if (DAT_18041efa8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efa8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efa8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041efa8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041efa8 * 8;
      if (DAT_18041efa8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024a5e0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024a5e0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024a5f9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024a399;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024a5f9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_180258b80(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f048 = puVar8;
        }
      }
LAB_18024a399:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041efb0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efb0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efb0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041efb0;
      uVar9 = FUN_18025a930(param_4);
      FUN_18023f260(param_3,uVar9,lVar11);
      if (DAT_18041efb8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efb8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efb8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      lVar11 = DAT_18041efb8;
      puVar8 = (undefined8 *)FUN_18025ac10(param_4);
    }
    FUN_18023f260(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_18041efc0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efc0;
      local_50[0] = (undefined8 *)FUN_180239630(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_18023f260(param_3,uVar9,uVar12);
      if (DAT_18041efc8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efc8;
      local_50[0] = (undefined8 *)FUN_180239630(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_18025cb60(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_18041efc0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efc0;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f060;
      local_50[0] = DAT_18041f060;
      if (DAT_18041efc0 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc0 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041efc0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041efc0 * 8;
      if (DAT_18041efc0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024a8b1;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024a8b1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024a8ca:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024a727;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024a8ca;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18025ad80(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f060 = puVar8;
        }
      }
LAB_18024a727:
      FUN_18023d290(local_58);
      FUN_18023f260(param_3,puVar6,uVar12);
      if (DAT_18041efc8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_res10);
      }
      uVar12 = DAT_18041efc8;
      FUN_18023d240(local_58,0);
      puVar8 = DAT_18041f068;
      local_50[0] = DAT_18041f068;
      if (DAT_18041efc8 == 0) {
        FUN_18023d240(local_res10,0);
        if (DAT_18041efc8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_18041efc8 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar4 = DAT_18041efc8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_18041efc8 * 8;
      if (DAT_18041efc8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_18024a920;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_18024a920:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024a939:
          if (puVar6 != (undefined8 *)0x0) goto LAB_18024a80d;
        }
        else {
          lVar10 = FUN_18023d160();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_18024a939;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_18025cbd0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar8 = local_50[0];
          FUN_18023ccb0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
          DAT_18041f068 = puVar8;
        }
      }
LAB_18024a80d:
      FUN_18023d290(local_58);
    }
    FUN_18023f260(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_180417ec0 == 0) {
      FUN_18023d240(local_res10,0);
      if (DAT_180417ec0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_180417ec0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_res10);
    }
    uVar12 = DAT_180417ec0;
    local_50[0] = (undefined8 *)FUN_180239630(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_18024ab30(local_50[0],param_1,0);
    }
    goto LAB_18024aa6e;
  }
  if (DAT_180417ec0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_180417ec0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_180417ec0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290(local_res10);
  }
  uVar12 = DAT_180417ec0;
  FUN_18023d240(&local_54,0);
  puVar8 = DAT_18041f070;
  local_50[0] = DAT_18041f070;
  if (DAT_180417ec0 == 0) {
    FUN_18023d240(local_res10,0);
    if (DAT_180417ec0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_180417ec0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290();
  }
  uVar4 = DAT_180417ec0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_180417ec0 * 8;
  if (DAT_180417ec0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_18024aa90;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_18024aa90:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_18024aaa9:
      if (puVar6 != (undefined8 *)0x0) goto LAB_18024aa5f;
    }
    else {
      lVar10 = FUN_18023d160();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_18024aaa9;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_18024ab90(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_18000cdb9();
      }
      puVar8 = local_50[0];
      FUN_18023ccb0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar6);
      DAT_18041f070 = puVar8;
    }
  }
LAB_18024aa5f:
  FUN_18023d290(&local_54);
LAB_18024aa6e:
  FUN_18023f260(param_3,puVar6,uVar12);
  return;
}

