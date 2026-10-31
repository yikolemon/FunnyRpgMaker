/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023f4e0 */

longlong FUN_18023f4e0(longlong param_1,uint param_2,longlong param_3,longlong param_4)

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
      if (DAT_180417eb8 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180417eb8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417eb8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      lVar12 = DAT_180417eb8;
      puVar6 = (undefined8 *)FUN_180239630(0x30);
      local_60 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::ctype<char>::vftable;
        puVar7 = (undefined4 *)FUN_18023df70(local_58);
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
      FUN_18023f260(param_3,puVar6,lVar12);
    }
    else {
      if (DAT_180417eb8 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180417eb8 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417eb8 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      lVar12 = DAT_180417eb8;
      uVar8 = FUN_18001c0ec(param_4);
      FUN_18023f260(param_3,uVar8,lVar12);
    }
  }
  puVar6 = (undefined8 *)0x0;
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_180418e80 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180418e80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180418e80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      uVar13 = DAT_180418e80;
      local_60 = (undefined8 *)FUN_180239630(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      FUN_18023f260(param_3,puVar9,uVar13);
      if (DAT_180417c90 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180417c90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      uVar13 = DAT_180417c90;
      local_60 = (undefined8 *)FUN_180239630(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
                    vftable;
        puVar9 = local_60;
      }
      FUN_18023f260(param_3,puVar9,uVar13);
      if (DAT_1804174b0 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_1804174b0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804174b0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      lVar12 = DAT_1804174b0;
      local_60 = (undefined8 *)FUN_180239630(0x30);
      if (local_60 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1802412b0(local_60,param_1,0,0);
      }
    }
    else {
      if (DAT_180418e80 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180418e80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180418e80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_68);
      }
      uVar13 = DAT_180418e80;
      FUN_18023d240(local_64,0);
      puVar6 = DAT_180418e88;
      local_60 = DAT_180418e88;
      if (DAT_180418e80 == 0) {
        FUN_18023d240(local_68,0);
        if (DAT_180418e80 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180418e80 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar5 = DAT_180418e80;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_180418e80 * 8;
      if (DAT_180418e80 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_18023fa3f;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_18023fa3f:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_18023fa58:
          if (puVar9 != (undefined8 *)0x0) goto LAB_18023f85a;
        }
        else {
          lVar11 = FUN_18023d160();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_18023fa58;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_18023fd40(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar6 = local_60;
          FUN_18023ccb0(local_60);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar9);
          DAT_180418e88 = puVar6;
        }
      }
LAB_18023f85a:
      FUN_18023d290(local_64);
      FUN_18023f260(param_3,puVar9,uVar13);
      if (DAT_180417c90 == 0) {
        FUN_18023d240(local_64,0);
        if (DAT_180417c90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290(local_64);
      }
      uVar13 = DAT_180417c90;
      FUN_18023d240(local_68,0);
      puVar6 = DAT_180417cc0;
      local_60 = DAT_180417cc0;
      if (DAT_180417c90 == 0) {
        FUN_18023d240(local_64,0);
        if (DAT_180417c90 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_180417c90 = (ulonglong)DAT_180417ea0;
        }
        FUN_18023d290();
      }
      uVar5 = DAT_180417c90;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_180417c90 * 8;
      if (DAT_180417c90 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_18023faae;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_18023faae:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_18023fac7:
          if (puVar9 != (undefined8 *)0x0) goto LAB_18023f940;
        }
        else {
          lVar11 = FUN_18023d160();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_18023fac7;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_18007c57e(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_18000cdb9();
          }
          puVar6 = local_60;
          FUN_18023ccb0(local_60);
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar9);
          DAT_180417cc0 = puVar6;
        }
      }
LAB_18023f940:
      FUN_18023d290(local_68);
      FUN_18023f260(param_3,puVar9,uVar13);
      if (DAT_1804174b0 == 0) {
        FUN_18023d240(local_64,0);
        if (DAT_1804174b0 == 0) {
          DAT_180417ea0 = DAT_180417ea0 + 1;
          DAT_1804174b0 = (longlong)DAT_180417ea0;
        }
        FUN_18023d290(local_64);
      }
      lVar12 = DAT_1804174b0;
      puVar6 = (undefined8 *)FUN_18000b3c1(param_4);
    }
    FUN_18023f260(param_3,puVar6,lVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_18023fc02;
  if (param_4 == 0) {
    if (DAT_1804175f0 == 0) {
      FUN_18023d240(local_64,0);
      if (DAT_1804175f0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_1804175f0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_64);
    }
    uVar13 = DAT_1804175f0;
    puVar9 = (undefined8 *)FUN_180239630(0x10);
    local_60 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = std::codecvt<char,char,_Mbstatet>::vftable;
    }
  }
  else {
    if (DAT_1804175f0 == 0) {
      FUN_18023d240(local_64,0);
      if (DAT_1804175f0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_1804175f0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290(local_64);
    }
    uVar13 = DAT_1804175f0;
    FUN_18023d240(local_68,0);
    puVar6 = DAT_180417cb0;
    local_60 = DAT_180417cb0;
    if (DAT_1804175f0 == 0) {
      FUN_18023d240(local_64,0);
      if (DAT_1804175f0 == 0) {
        DAT_180417ea0 = DAT_180417ea0 + 1;
        DAT_1804175f0 = (ulonglong)DAT_180417ea0;
      }
      FUN_18023d290();
    }
    uVar5 = DAT_1804175f0;
    lVar11 = *(longlong *)(param_4 + 8);
    lVar12 = DAT_1804175f0 * 8;
    if (DAT_1804175f0 < *(ulonglong *)(lVar11 + 0x18)) {
      puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
      if (puVar9 == (undefined8 *)0x0) goto LAB_18023fcbd;
    }
    else {
      puVar9 = (undefined8 *)0x0;
LAB_18023fcbd:
      if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_18023fcd6:
        if (puVar9 != (undefined8 *)0x0) goto LAB_18023fbeb;
      }
      else {
        lVar11 = FUN_18023d160();
        if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
          puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
          goto LAB_18023fcd6;
        }
      }
      puVar9 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        lVar12 = FUN_180075956(&local_60,param_4);
        puVar9 = local_60;
        if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_18000cdb9();
        }
        puVar6 = local_60;
        FUN_18023ccb0(local_60);
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar9);
        DAT_180417cb0 = puVar6;
      }
    }
LAB_18023fbeb:
    FUN_18023d290(local_68);
  }
  FUN_18023f260(param_3,puVar9,uVar13);
LAB_18023fc02:
  FUN_180265360(param_1,param_2,param_3,param_4);
  FUN_1802480d0(param_1,param_2,param_3,param_4);
  FUN_180249600(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | param_2;
  lVar12 = *(longlong *)(param_1 + 0x58);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x60;
  }
  if (*(longlong *)(param_3 + 0x28) != lVar12) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      thunk_FUN_180290e40();
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
        FUN_1802a82f0(lVar11,lVar12,lVar10);
      }
      *(longlong *)(param_3 + 0x28) = lVar11;
    }
  }
  return param_3;
}

