/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400df970 */

void FUN_1400df970(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_1401cc4a8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc4a8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc4a8 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc4a8;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1400e15f0(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1401cc4a8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401cc4a8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401cc4a8 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401cc4a8;
      puVar6 = (undefined8 *)FUN_1400e9630(param_4);
    }
    FUN_1400d4490(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4660 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4660 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4660 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4660;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4668 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4668 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4668 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4668;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       num_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
        puVar6 = local_50[0];
      }
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4670 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4670 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4670 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4670;
      puVar6 = (undefined8 *)FUN_1400d3680(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::numpunct<unsigned_short>::vftable;
        FUN_1400ec730(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_1400d4490(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_1401d4660 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4660 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4660 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4660;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4708;
      local_50[0] = DAT_1401d4708;
      if (DAT_1401d4660 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4660 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4660 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4660;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4660 * 8;
      if (DAT_1401d4660 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400dfeea;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400dfeea:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400dff03:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400dfcdd;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400dff03;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400e9750(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4708 = puVar8;
        }
      }
LAB_1400dfcdd:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4668 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4668 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4668 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4668;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4710;
      local_50[0] = DAT_1401d4710;
      if (DAT_1401d4668 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4668 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4668 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4668;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4668 * 8;
      if (DAT_1401d4668 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400dff59;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400dff59:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400dff72:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400dfdc3;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400dff72;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400eac50(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4710 = puVar8;
        }
      }
LAB_1400dfdc3:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4670 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4670 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4670 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4670;
      uVar9 = FUN_1400ecb10(param_4);
      FUN_1400d4490(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_1400ecc30(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4678 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4678 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4678 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4678;
      puVar6 = (undefined8 *)FUN_1400d3680(0x20);
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
      if (DAT_1401d4678 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4678 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4678 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4678;
      FUN_1400d39b0(local_58,0);
      puVar6 = DAT_1401d4720;
      local_50[0] = DAT_1401d4720;
      if (DAT_1401d4678 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4678 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4678 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4678;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4678 * 8;
      if (DAT_1401d4678 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_1400e0146;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_1400e0146:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e015f:
          if (puVar8 != (undefined8 *)0x0) goto LAB_1400e00a0;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e015f;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_1400ecc30(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar8);
          DAT_1401d4720 = puVar8;
        }
      }
LAB_1400e00a0:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4680 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4680 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4680 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4680;
      puVar6 = (undefined8 *)FUN_1400d3680(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = std::messages<unsigned_short>::vftable;
      }
    }
    else {
      if (DAT_1401d4680 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4680 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4680 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4680;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4728;
      local_50[0] = DAT_1401d4728;
      if (DAT_1401d4680 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4680 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4680 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4680;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4680 * 8;
      if (DAT_1401d4680 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400e0440;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400e0440:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e0459:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400e028d;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e0459;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400ed120(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4728 = puVar8;
        }
      }
LAB_1400e028d:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d4688 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4688 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4688 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4688;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_1400d4490(param_3,local_50[0],uVar12);
      if (DAT_1401d4690 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4690 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4690 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4690;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = std::
                       money_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                       ::vftable;
      }
      FUN_1400d4490(param_3,local_50[0],uVar12);
      if (DAT_1401d4698 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4698 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4698 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4698;
      puVar8 = (undefined8 *)FUN_1400d3680(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_1400f09e0(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,0>::vftable;
      }
      FUN_1400d4490(param_3,puVar8,lVar11);
      if (DAT_1401d46a0 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46a0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46a0 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d46a0;
      puVar8 = (undefined8 *)FUN_1400d3680(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = std::_Mpunct<unsigned_short>::vftable;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_1400f09e0(puVar8,param_1,0);
        *puVar8 = std::moneypunct<unsigned_short,1>::vftable;
      }
    }
    else {
      if (DAT_1401d4688 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4688 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4688 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4688;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4730;
      local_50[0] = DAT_1401d4730;
      if (DAT_1401d4688 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4688 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4688 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4688;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4688 * 8;
      if (DAT_1401d4688 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400e08e1;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400e08e1:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e08fa:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400e0623;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e08fa;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400ed2d0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4730 = puVar8;
        }
      }
LAB_1400e0623:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4690 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4690 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4690 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d4690;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4738;
      local_50[0] = DAT_1401d4738;
      if (DAT_1401d4690 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4690 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4690 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d4690;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d4690 * 8;
      if (DAT_1401d4690 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400e0950;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400e0950:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e0969:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400e0709;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e0969;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400ef0e0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4738 = puVar8;
        }
      }
LAB_1400e0709:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d4698 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d4698 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d4698 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d4698;
      uVar9 = FUN_1400f0e90(param_4);
      FUN_1400d4490(param_3,uVar9,lVar11);
      if (DAT_1401d46a0 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46a0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46a0 = (longlong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      lVar11 = DAT_1401d46a0;
      puVar8 = (undefined8 *)FUN_1400f1170(param_4);
    }
    FUN_1400d4490(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_1401d46a8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46a8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46a8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d46a8;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_1400d4490(param_3,uVar9,uVar12);
      if (DAT_1401d46b0 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46b0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46b0 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d46b0;
      local_50[0] = (undefined8 *)FUN_1400d3680(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_1400f30c0(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_1401d46a8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46a8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46a8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d46a8;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4750;
      local_50[0] = DAT_1401d4750;
      if (DAT_1401d46a8 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46a8 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46a8 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d46a8;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d46a8 * 8;
      if (DAT_1401d46a8 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400e0c21;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400e0c21:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e0c3a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400e0a97;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e0c3a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400f12e0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4750 = puVar8;
        }
      }
LAB_1400e0a97:
      FUN_1400d3a00(local_58);
      FUN_1400d4490(param_3,puVar6,uVar12);
      if (DAT_1401d46b0 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46b0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46b0 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00(local_res10);
      }
      uVar12 = DAT_1401d46b0;
      FUN_1400d39b0(local_58,0);
      puVar8 = DAT_1401d4758;
      local_50[0] = DAT_1401d4758;
      if (DAT_1401d46b0 == 0) {
        FUN_1400d39b0(local_res10,0);
        if (DAT_1401d46b0 == 0) {
          DAT_1401cc480 = DAT_1401cc480 + 1;
          DAT_1401d46b0 = (ulonglong)DAT_1401cc480;
        }
        FUN_1400d3a00();
      }
      uVar4 = DAT_1401d46b0;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_1401d46b0 * 8;
      if (DAT_1401d46b0 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_1400e0c90;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_1400e0c90:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e0ca9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1400e0b7d;
        }
        else {
          lVar10 = FUN_1400d4110();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_1400e0ca9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1400f3130(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14000b671();
          }
          puVar8 = local_50[0];
          FUN_1400d3ca0(local_50[0]);
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
          DAT_1401d4758 = puVar8;
        }
      }
LAB_1400e0b7d:
      FUN_1400d3a00(local_58);
    }
    FUN_1400d4490(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1401cc4a0 == 0) {
      FUN_1400d39b0(local_res10,0);
      if (DAT_1401cc4a0 == 0) {
        DAT_1401cc480 = DAT_1401cc480 + 1;
        DAT_1401cc4a0 = (ulonglong)DAT_1401cc480;
      }
      FUN_1400d3a00(local_res10);
    }
    uVar12 = DAT_1401cc4a0;
    local_50[0] = (undefined8 *)FUN_1400d3680(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1400e1090(local_50[0],param_1,0);
    }
    goto LAB_1400e0dde;
  }
  if (DAT_1401cc4a0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401cc4a0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4a0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00(local_res10);
  }
  uVar12 = DAT_1401cc4a0;
  FUN_1400d39b0(&local_54,0);
  puVar8 = DAT_1401d4760;
  local_50[0] = DAT_1401d4760;
  if (DAT_1401cc4a0 == 0) {
    FUN_1400d39b0(local_res10,0);
    if (DAT_1401cc4a0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4a0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00();
  }
  uVar4 = DAT_1401cc4a0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1401cc4a0 * 8;
  if (DAT_1401cc4a0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_1400e0e00;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_1400e0e00:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_1400e0e19:
      if (puVar6 != (undefined8 *)0x0) goto LAB_1400e0dcf;
    }
    else {
      lVar10 = FUN_1400d4110();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_1400e0e19;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_1400e10f0(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b671();
      }
      puVar8 = local_50[0];
      FUN_1400d3ca0(local_50[0]);
      (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar6);
      DAT_1401d4760 = puVar8;
    }
  }
LAB_1400e0dcf:
  FUN_1400d3a00(&local_54);
LAB_1400e0dde:
  FUN_1400d4490(param_3,puVar6,uVar12);
  return;
}

