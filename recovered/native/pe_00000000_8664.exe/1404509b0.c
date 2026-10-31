/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404509b0 */

longlong FUN_1404509b0(longlong param_1,uint param_2,longlong param_3,longlong param_4)

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
      if (DAT_140629388 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_140629388 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629388 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      lVar12 = DAT_140629388;
      puVar6 = (undefined8 *)FUN_14044ab00(0x30);
      local_60 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &DAT_1404c27b8;
        puVar7 = (undefined4 *)FUN_14044f440(local_58);
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
      FUN_140450730(param_3,puVar6,lVar12);
    }
    else {
      if (DAT_140629388 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_140629388 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629388 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      lVar12 = DAT_140629388;
      uVar8 = FUN_14022d5bc(param_4);
      FUN_140450730(param_3,uVar8,lVar12);
    }
  }
  puVar6 = (undefined8 *)0x0;
  if ((param_2 & 8) != 0) {
    if (param_4 == 0) {
      if (DAT_14062a350 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_14062a350 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_14062a350 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      uVar13 = DAT_14062a350;
      local_60 = (undefined8 *)FUN_14044ab00(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = &DAT_1404ee570;
        puVar9 = local_60;
      }
      FUN_140450730(param_3,puVar9,uVar13);
      if (DAT_140629160 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_140629160 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629160 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      uVar13 = DAT_140629160;
      local_60 = (undefined8 *)FUN_14044ab00(0x10);
      puVar9 = puVar6;
      if (local_60 != (undefined8 *)0x0) {
        *(undefined4 *)(local_60 + 1) = 0;
        *local_60 = &DAT_1404ca728;
        puVar9 = local_60;
      }
      FUN_140450730(param_3,puVar9,uVar13);
      if (DAT_140628980 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_140628980 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628980 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      lVar12 = DAT_140628980;
      local_60 = (undefined8 *)FUN_14044ab00(0x30);
      if (local_60 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_140452780(local_60,param_1,0,0);
      }
    }
    else {
      if (DAT_14062a350 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_14062a350 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_14062a350 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_68);
      }
      uVar13 = DAT_14062a350;
      FUN_14044e710(local_64,0);
      puVar6 = DAT_14062a358;
      local_60 = DAT_14062a358;
      if (DAT_14062a350 == 0) {
        FUN_14044e710(local_68,0);
        if (DAT_14062a350 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_14062a350 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar5 = DAT_14062a350;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_14062a350 * 8;
      if (DAT_14062a350 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_140450f0f;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_140450f0f:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_140450f28:
          if (puVar9 != (undefined8 *)0x0) goto LAB_140450d2a;
        }
        else {
          lVar11 = FUN_14044e630();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_140450f28;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_140451210(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar6 = local_60;
          FUN_14044e180(local_60);
          (*DAT_14059d150)(puVar9);
          DAT_14062a358 = puVar6;
        }
      }
LAB_140450d2a:
      FUN_14044e760(local_64);
      FUN_140450730(param_3,puVar9,uVar13);
      if (DAT_140629160 == 0) {
        FUN_14044e710(local_64,0);
        if (DAT_140629160 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629160 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760(local_64);
      }
      uVar13 = DAT_140629160;
      FUN_14044e710(local_68,0);
      puVar6 = DAT_140629190;
      local_60 = DAT_140629190;
      if (DAT_140629160 == 0) {
        FUN_14044e710(local_64,0);
        if (DAT_140629160 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140629160 = (ulonglong)DAT_140629370;
        }
        FUN_14044e760();
      }
      uVar5 = DAT_140629160;
      lVar11 = *(longlong *)(param_4 + 8);
      lVar12 = DAT_140629160 * 8;
      if (DAT_140629160 < *(ulonglong *)(lVar11 + 0x18)) {
        puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
        if (puVar9 == (undefined8 *)0x0) goto LAB_140450f7e;
      }
      else {
        puVar9 = (undefined8 *)0x0;
LAB_140450f7e:
        if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_140450f97:
          if (puVar9 != (undefined8 *)0x0) goto LAB_140450e10;
        }
        else {
          lVar11 = FUN_14044e630();
          if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
            puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
            goto LAB_140450f97;
          }
        }
        puVar9 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
          lVar12 = FUN_14028da4e(&local_60,param_4);
          puVar9 = local_60;
          if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_14021e289();
          }
          puVar6 = local_60;
          FUN_14044e180(local_60);
          (*DAT_14059d150)(puVar9);
          DAT_140629190 = puVar6;
        }
      }
LAB_140450e10:
      FUN_14044e760(local_68);
      FUN_140450730(param_3,puVar9,uVar13);
      if (DAT_140628980 == 0) {
        FUN_14044e710(local_64,0);
        if (DAT_140628980 == 0) {
          DAT_140629370 = DAT_140629370 + 1;
          DAT_140628980 = (longlong)DAT_140629370;
        }
        FUN_14044e760(local_64);
      }
      lVar12 = DAT_140628980;
      puVar6 = (undefined8 *)FUN_14021c891(param_4);
    }
    FUN_140450730(param_3,puVar6,lVar12);
  }
  if ((param_2 & 2) == 0) goto LAB_1404510d2;
  if (param_4 == 0) {
    if (DAT_140628ac0 == 0) {
      FUN_14044e710(local_64,0);
      if (DAT_140628ac0 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140628ac0 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_64);
    }
    uVar13 = DAT_140628ac0;
    puVar9 = (undefined8 *)FUN_14044ab00(0x10);
    local_60 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = &DAT_1404c9db8;
    }
  }
  else {
    if (DAT_140628ac0 == 0) {
      FUN_14044e710(local_64,0);
      if (DAT_140628ac0 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140628ac0 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760(local_64);
    }
    uVar13 = DAT_140628ac0;
    FUN_14044e710(local_68,0);
    puVar6 = DAT_140629180;
    local_60 = DAT_140629180;
    if (DAT_140628ac0 == 0) {
      FUN_14044e710(local_64,0);
      if (DAT_140628ac0 == 0) {
        DAT_140629370 = DAT_140629370 + 1;
        DAT_140628ac0 = (ulonglong)DAT_140629370;
      }
      FUN_14044e760();
    }
    uVar5 = DAT_140628ac0;
    lVar11 = *(longlong *)(param_4 + 8);
    lVar12 = DAT_140628ac0 * 8;
    if (DAT_140628ac0 < *(ulonglong *)(lVar11 + 0x18)) {
      puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
      if (puVar9 == (undefined8 *)0x0) goto LAB_14045118d;
    }
    else {
      puVar9 = (undefined8 *)0x0;
LAB_14045118d:
      if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_1404511a6:
        if (puVar9 != (undefined8 *)0x0) goto LAB_1404510bb;
      }
      else {
        lVar11 = FUN_14044e630();
        if (uVar5 < *(ulonglong *)(lVar11 + 0x18)) {
          puVar9 = *(undefined8 **)(lVar12 + *(longlong *)(lVar11 + 0x10));
          goto LAB_1404511a6;
        }
      }
      puVar9 = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        lVar12 = FUN_140286e26(&local_60,param_4);
        puVar9 = local_60;
        if (lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_14021e289();
        }
        puVar6 = local_60;
        FUN_14044e180(local_60);
        (*DAT_14059d150)(puVar9);
        DAT_140629180 = puVar6;
      }
    }
LAB_1404510bb:
    FUN_14044e760(local_68);
  }
  FUN_140450730(param_3,puVar9,uVar13);
LAB_1404510d2:
  FUN_140476830(param_1,param_2,param_3,param_4);
  FUN_1404595a0(param_1,param_2,param_3,param_4);
  FUN_14045aad0(param_1,param_2,param_3,param_4);
  *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | param_2;
  lVar12 = *(longlong *)(param_1 + 0x58);
  if (lVar12 == 0) {
    lVar12 = param_1 + 0x60;
  }
  if (*(longlong *)(param_3 + 0x28) != lVar12) {
    if (*(longlong *)(param_3 + 0x28) != 0) {
      thunk_FUN_1404a2310();
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
        FUN_1404b97c0(lVar11,lVar12,lVar10);
      }
      *(longlong *)(param_3 + 0x28) = lVar11;
    }
  }
  return param_3;
}

