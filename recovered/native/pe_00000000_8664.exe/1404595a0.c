/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404595a0 */

void FUN_1404595a0(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_140629380 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629380 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629380 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140629380;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1402a4e30(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_140629380 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629380 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629380 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140629380;
      puVar6 = (undefined8 *)FUN_1402a4858(param_4);
    }
    FUN_140450730(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_140630410 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630410 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630410 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630410;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538aa8;
        puVar6 = local_50[0];
      }
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140629168 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629168 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629168 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140629168;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_1404cba08;
        puVar6 = local_50[0];
      }
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140628970 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140628970 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628970 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140628970;
      puVar6 = (undefined8 *)FUN_14044ab00(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_1404c6b58;
        FUN_14025a09c(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_140450730(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_140630410 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630410 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630410 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630410;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304a0;
      local_50[0] = DAT_1406304a0;
      if (DAT_140630410 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630410 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630410 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630410;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630410 * 8;
      if (DAT_140630410 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_140459b1a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_140459b1a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140459b33:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045990d;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140459b33;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14045d260(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304a0 = puVar8;
        }
      }
LAB_14045990d:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140629168 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629168 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629168 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140629168;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406292a8;
      local_50[0] = DAT_1406292a8;
      if (DAT_140629168 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629168 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629168 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140629168;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140629168 * 8;
      if (DAT_140629168 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_140459b89;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_140459b89:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140459ba2:
          if (puVar6 != (undefined8 *)0x0) goto LAB_1404599f3;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140459ba2;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1402b60b0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406292a8 = puVar8;
        }
      }
LAB_1404599f3:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140628970 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140628970 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628970 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140628970;
      uVar9 = FUN_140258917(param_4);
      FUN_140450730(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_1402a4968(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_140629158 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629158 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629158 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140629158;
      puVar6 = (undefined8 *)FUN_14044ab00(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_1404caad8;
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
      if (DAT_140629158 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629158 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629158 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140629158;
      FUN_14044e710(local_58,0);
      puVar6 = DAT_140629298;
      local_50[0] = DAT_140629298;
      if (DAT_140629158 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629158 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629158 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140629158;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140629158 * 8;
      if (DAT_140629158 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_140459d76;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_140459d76:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_140459d8f:
          if (puVar8 != (undefined8 *)0x0) goto LAB_140459cd0;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_140459d8f;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_1402a4968(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar8);
          DAT_140629298 = puVar8;
        }
      }
LAB_140459cd0:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_140630418 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630418 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630418 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630418;
      puVar6 = (undefined8 *)FUN_14044ab00(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_140538b20;
      }
    }
    else {
      if (DAT_140630418 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630418 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630418 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630418;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304a8;
      local_50[0] = DAT_1406304a8;
      if (DAT_140630418 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630418 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630418 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630418;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630418 * 8;
      if (DAT_140630418 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045a070;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045a070:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045a089:
          if (puVar6 != (undefined8 *)0x0) goto LAB_140459ebd;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045a089;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14045e8c0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304a8 = puVar8;
        }
      }
LAB_140459ebd:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_140630420 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630420 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630420 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630420;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538b58;
      }
      FUN_140450730(param_3,local_50[0],uVar12);
      if (DAT_140630428 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630428 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630428 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630428;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538b88;
      }
      FUN_140450730(param_3,local_50[0],uVar12);
      if (DAT_140630430 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630430 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630430 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630430;
      puVar8 = (undefined8 *)FUN_14044ab00(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &DAT_140538bb8;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_140461e20(puVar8,param_1,0);
        *puVar8 = &DAT_140538c20;
      }
      FUN_140450730(param_3,puVar8,lVar11);
      if (DAT_140630438 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630438 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630438 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630438;
      puVar8 = (undefined8 *)FUN_14044ab00(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &DAT_140538bb8;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_140461e20(puVar8,param_1,0);
        *puVar8 = &DAT_140538c88;
      }
    }
    else {
      if (DAT_140630420 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630420 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630420 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630420;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304b0;
      local_50[0] = DAT_1406304b0;
      if (DAT_140630420 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630420 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630420 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630420;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630420 * 8;
      if (DAT_140630420 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045a511;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045a511:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045a52a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045a253;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045a52a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14045ea80(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304b0 = puVar8;
        }
      }
LAB_14045a253:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630428 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630428 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630428 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630428;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304b8;
      local_50[0] = DAT_1406304b8;
      if (DAT_140630428 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630428 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630428 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630428;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630428 * 8;
      if (DAT_140630428 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045a580;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045a580:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045a599:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045a339;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045a599;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_140460890(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304b8 = puVar8;
        }
      }
LAB_14045a339:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630430 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630430 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630430 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630430;
      uVar9 = FUN_140462360(param_4);
      FUN_140450730(param_3,uVar9,lVar11);
      if (DAT_140630438 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630438 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630438 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630438;
      puVar8 = (undefined8 *)FUN_140462640(param_4);
    }
    FUN_140450730(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_140630440 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630440 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630440 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630440;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_140450730(param_3,uVar9,uVar12);
      if (DAT_140630408 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630408 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630408 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630408;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_14045cc60(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_140630440 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630440 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630440 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630440;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304d0;
      local_50[0] = DAT_1406304d0;
      if (DAT_140630440 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630440 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630440 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630440;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630440 * 8;
      if (DAT_140630440 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045a851;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045a851:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045a86a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045a6c7;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045a86a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1404627b0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304d0 = puVar8;
        }
      }
LAB_14045a6c7:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630408 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630408 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630408 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630408;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304d8;
      local_50[0] = DAT_1406304d8;
      if (DAT_140630408 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630408 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630408 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630408;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630408 * 8;
      if (DAT_140630408 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045a8c0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045a8c0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045a8d9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045a7ad;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045a8d9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14045ccd0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304d8 = puVar8;
        }
      }
LAB_14045a7ad:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_1406293b0 == 0) {
      FUN_14044e710(local_res10,0);
      if (DAT_1406293b0 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_1406293b0 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_res10);
    }
    uVar12 = DAT_1406293b0;
    local_50[0] = (undefined8 *)FUN_14044ab00(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_1404565d0(local_50[0],param_1,0);
    }
    goto LAB_14045aa0e;
  }
  if (DAT_1406293b0 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_1406293b0 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_1406293b0 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760(local_res10);
  }
  uVar12 = DAT_1406293b0;
  FUN_14044e710(&local_54,0);
  puVar8 = DAT_14062a618;
  local_50[0] = DAT_14062a618;
  if (DAT_1406293b0 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_1406293b0 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_1406293b0 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760();
  }
  uVar4 = DAT_1406293b0;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_1406293b0 * 8;
  if (DAT_1406293b0 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_14045aa30;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_14045aa30:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045aa49:
      if (puVar6 != (undefined8 *)0x0) goto LAB_14045a9ff;
    }
    else {
      lVar10 = FUN_14044e630();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_14045aa49;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_140456630(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14021e289();
      }
      puVar8 = local_50[0];
      FUN_14044e180(local_50[0]);
      (*DAT_14059d150)(puVar6);
      DAT_14062a618 = puVar8;
    }
  }
LAB_14045a9ff:
  FUN_14044e760(&local_54);
LAB_14045aa0e:
  FUN_140450730(param_3,puVar6,uVar12);
  return;
}

