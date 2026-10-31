/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14045aad0 */

void FUN_14045aad0(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

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
      if (DAT_140629398 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629398 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629398 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140629398;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x60);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_14045c560(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_140629398 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140629398 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629398 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140629398;
      puVar6 = (undefined8 *)FUN_1404645a0(param_4);
    }
    FUN_140450730(param_3,puVar6,lVar11);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_140630448 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630448 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630448 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630448;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538d48;
        puVar6 = local_50[0];
      }
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630450 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630450 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630450 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630450;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      puVar6 = puVar8;
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538dc0;
        puVar6 = local_50[0];
      }
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630458 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630458 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630458 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630458;
      puVar6 = (undefined8 *)FUN_14044ab00(0x30);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_140538e20;
        FUN_1404676a0(puVar6,param_1,0);
        puVar8 = puVar6;
      }
      FUN_140450730(param_3,puVar8,lVar11);
    }
    else {
      if (DAT_140630448 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630448 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630448 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630448;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304e8;
      local_50[0] = DAT_1406304e8;
      if (DAT_140630448 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630448 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630448 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630448;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630448 * 8;
      if (DAT_140630448 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045b04a;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045b04a:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045b063:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045ae3d;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045b063;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_1404646c0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304e8 = puVar8;
        }
      }
LAB_14045ae3d:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630450 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630450 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630450 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630450;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_1406304f0;
      local_50[0] = DAT_1406304f0;
      if (DAT_140630450 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630450 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630450 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630450;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630450 * 8;
      if (DAT_140630450 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045b0b9;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045b0b9:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045b0d2:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045af23;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045b0d2;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_140465bc0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_1406304f0 = puVar8;
        }
      }
LAB_14045af23:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630458 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630458 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630458 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630458;
      uVar9 = FUN_140467a80(param_4);
      FUN_140450730(param_3,uVar9,lVar11);
    }
  }
  puVar8 = (undefined8 *)0x0;
  bVar5 = FUN_140467ba0(0,0);
  if ((param_2 & (1 << (bVar5 & 0x1f)) >> 1) != 0) {
    if (param_4 == 0) {
      if (DAT_140630460 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630460 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630460 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630460;
      puVar6 = (undefined8 *)FUN_14044ab00(0x20);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_140538e68;
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
      if (DAT_140630460 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630460 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630460 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630460;
      FUN_14044e710(local_58,0);
      puVar6 = DAT_140630500;
      local_50[0] = DAT_140630500;
      if (DAT_140630460 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630460 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630460 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630460;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630460 * 8;
      if (DAT_140630460 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar8 == (undefined8 *)0x0) goto LAB_14045b2a6;
      }
      else {
        puVar8 = (undefined8 *)0x0;
LAB_14045b2a6:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045b2bf:
          if (puVar8 != (undefined8 *)0x0) goto LAB_14045b200;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar8 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045b2bf;
          }
        }
        puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar11 = FUN_140467ba0(local_50,param_4);
          puVar8 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar8);
          DAT_140630500 = puVar8;
        }
      }
LAB_14045b200:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar8,uVar12);
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 == 0) {
      if (DAT_140630468 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630468 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630468 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630468;
      puVar6 = (undefined8 *)FUN_14044ab00(0x10);
      local_50[0] = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_140538ea0;
      }
    }
    else {
      if (DAT_140630468 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630468 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630468 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630468;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_140630508;
      local_50[0] = DAT_140630508;
      if (DAT_140630468 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630468 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630468 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630468;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630468 * 8;
      if (DAT_140630468 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045b5a0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045b5a0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045b5b9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045b3ed;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045b5b9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_140468090(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_140630508 = puVar8;
        }
      }
LAB_14045b3ed:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar6,uVar12);
  }
  if ((param_2 & 4) != 0) {
    if (param_4 == 0) {
      if (DAT_140630470 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630470 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630470 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630470;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538ed8;
      }
      FUN_140450730(param_3,local_50[0],uVar12);
      if (DAT_140630478 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630478 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630478 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630478;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x10);
      if (local_50[0] != (undefined8 *)0x0) {
        *(undefined4 *)(local_50[0] + 1) = 0;
        *local_50[0] = &DAT_140538f08;
      }
      FUN_140450730(param_3,local_50[0],uVar12);
      if (DAT_140630480 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630480 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630480 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630480;
      puVar8 = (undefined8 *)FUN_14044ab00(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &DAT_140538f38;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 0;
        FUN_14046b950(puVar8,param_1,0);
        *puVar8 = &DAT_140538fa0;
      }
      FUN_140450730(param_3,puVar8,lVar11);
      if (DAT_140630488 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630488 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630488 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630488;
      puVar8 = (undefined8 *)FUN_14044ab00(0x78);
      local_50[0] = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &DAT_140538f38;
        *(undefined1 *)((longlong)puVar8 + 0x44) = 1;
        FUN_14046b950(puVar8,param_1,0);
        *puVar8 = &DAT_140539008;
      }
    }
    else {
      if (DAT_140630470 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630470 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630470 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630470;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_140630510;
      local_50[0] = DAT_140630510;
      if (DAT_140630470 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630470 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630470 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630470;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630470 * 8;
      if (DAT_140630470 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045ba41;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045ba41:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045ba5a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045b783;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045ba5a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_140468240(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_140630510 = puVar8;
        }
      }
LAB_14045b783:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630478 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630478 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630478 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630478;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_140630518;
      local_50[0] = DAT_140630518;
      if (DAT_140630478 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630478 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630478 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630478;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630478 * 8;
      if (DAT_140630478 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045bab0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045bab0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045bac9:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045b869;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045bac9;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14046a050(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_140630518 = puVar8;
        }
      }
LAB_14045b869:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630480 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630480 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630480 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630480;
      uVar9 = FUN_14046be00(param_4);
      FUN_140450730(param_3,uVar9,lVar11);
      if (DAT_140630488 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630488 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630488 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      lVar11 = DAT_140630488;
      puVar8 = (undefined8 *)FUN_14046c0e0(param_4);
    }
    FUN_140450730(param_3,puVar8,lVar11);
  }
  if ((param_2 & 0x10) != 0) {
    if (param_4 == 0) {
      if (DAT_140630490 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630490 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630490 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630490;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x58);
      uVar9 = 0;
      if (local_50[0] != (undefined8 *)0x0) {
        uVar9 = time_get<>(local_50[0],param_1,0);
      }
      FUN_140450730(param_3,uVar9,uVar12);
      if (DAT_140630498 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630498 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630498 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630498;
      local_50[0] = (undefined8 *)FUN_14044ab00(0x18);
      if (local_50[0] == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = (undefined8 *)FUN_14046e030(local_50[0],param_1,0);
      }
    }
    else {
      if (DAT_140630490 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630490 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630490 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630490;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_140630530;
      local_50[0] = DAT_140630530;
      if (DAT_140630490 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630490 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630490 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630490;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630490 * 8;
      if (DAT_140630490 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045bd81;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045bd81:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045bd9a:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045bbf7;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045bd9a;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14046c250(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_140630530 = puVar8;
        }
      }
LAB_14045bbf7:
      FUN_14044e760(local_58);
      FUN_140450730(param_3,puVar6,uVar12);
      if (DAT_140630498 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630498 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630498 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_res10);
      }
      uVar12 = DAT_140630498;
      FUN_14044e710(local_58,0);
      puVar8 = DAT_140630538;
      local_50[0] = DAT_140630538;
      if (DAT_140630498 == 0) {
        FUN_14044e710(local_res10,0);
        if (DAT_140630498 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140630498 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar4 = DAT_140630498;
      lVar10 = *(longlong *)(param_4 + 8);
      lVar11 = DAT_140630498 * 8;
      if (DAT_140630498 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        if (puVar6 == (undefined8 *)0x0) goto LAB_14045bdf0;
      }
      else {
        puVar6 = (undefined8 *)0x0;
LAB_14045bdf0:
        if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045be09:
          if (puVar6 != (undefined8 *)0x0) goto LAB_14045bcdd;
        }
        else {
          lVar10 = FUN_14044e630();
          if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
            puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
            goto LAB_14045be09;
          }
        }
        puVar6 = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
          lVar11 = FUN_14046e0a0(local_50,param_4);
          puVar6 = local_50[0];
          if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar8 = local_50[0];
          FUN_14044e180(local_50[0]);
          (*DAT_14059d150)(puVar6);
          DAT_140630538 = puVar8;
        }
      }
LAB_14045bcdd:
      FUN_14044e760(local_58);
    }
    FUN_140450730(param_3,puVar6,uVar12);
  }
  if (local_54 == 0) {
    return;
  }
  if (param_4 == 0) {
    if (DAT_140629390 == 0) {
      FUN_14044e710(local_res10,0);
      if (DAT_140629390 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140629390 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_res10);
    }
    uVar12 = DAT_140629390;
    local_50[0] = (undefined8 *)FUN_14044ab00(0x40);
    if (local_50[0] == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FUN_14045c000(local_50[0],param_1,0);
    }
    goto LAB_14045bf3e;
  }
  if (DAT_140629390 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140629390 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140629390 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760(local_res10);
  }
  uVar12 = DAT_140629390;
  FUN_14044e710(&local_54,0);
  puVar8 = DAT_140630540;
  local_50[0] = DAT_140630540;
  if (DAT_140629390 == 0) {
    FUN_14044e710(local_res10,0);
    if (DAT_140629390 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140629390 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760();
  }
  uVar4 = DAT_140629390;
  lVar10 = *(longlong *)(param_4 + 8);
  lVar11 = DAT_140629390 * 8;
  if (DAT_140629390 < *(ulonglong *)(lVar10 + 0x18)) {
    puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
    if (puVar6 == (undefined8 *)0x0) goto LAB_14045bf60;
  }
  else {
    puVar6 = (undefined8 *)0x0;
LAB_14045bf60:
    if (*(char *)(lVar10 + 0x24) == '\0') {
LAB_14045bf79:
      if (puVar6 != (undefined8 *)0x0) goto LAB_14045bf2f;
    }
    else {
      lVar10 = FUN_14044e630();
      if (uVar4 < *(ulonglong *)(lVar10 + 0x18)) {
        puVar6 = *(undefined8 **)(lVar11 + *(longlong *)(lVar10 + 0x10));
        goto LAB_14045bf79;
      }
    }
    puVar6 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      lVar11 = FUN_14045c060(local_50,param_4);
      puVar6 = local_50[0];
      if (lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_14021e289();
      }
      puVar8 = local_50[0];
      FUN_14044e180(local_50[0]);
      (*DAT_14059d150)(puVar6);
      DAT_140630540 = puVar8;
    }
  }
LAB_14045bf2f:
  FUN_14044e760(&local_54);
LAB_14045bf3e:
  FUN_140450730(param_3,puVar6,uVar12);
  return;
}

