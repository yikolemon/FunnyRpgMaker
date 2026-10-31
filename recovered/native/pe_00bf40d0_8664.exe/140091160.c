/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140091160 */

void FUN_140091160(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<char> *this;
  WCHAR WVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  longlong lVar13;
  int iVar14;
  WCHAR *pWVar15;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  int local_40 [2];
  ulonglong local_38;
  undefined8 uVar7;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  cVar6 = *(char *)((longlong)param_1 + 0x39);
  uVar12 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_140091232:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_140091236:
      uVar8 = FUN_140092cbc((longlong)param_1,0);
      cVar6 = (char)uVar8;
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_140091275:
        uVar7 = FUN_140091720((longlong)param_1);
        cVar6 = (char)uVar7;
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_1400911f5:
            uVar7 = FUN_1400915d0((longlong)param_1);
            cVar6 = (char)uVar7;
            goto LAB_140091291;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) goto LAB_1400915a8;
        }
LAB_1400911cf:
        uVar7 = FUN_1400917bc(param_1);
        cVar6 = (char)uVar7;
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_14009128a;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') goto LAB_1400915a8;
          goto LAB_1400911f5;
        }
        goto LAB_1400911cf;
      }
      uVar7 = FUN_1400916a4((longlong)param_1);
      cVar6 = (char)uVar7;
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar8 = FUN_140092ab8((longlong)param_1);
      cVar6 = (char)uVar8;
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_1400911cf;
      if (cVar6 == 'i') goto LAB_140091232;
      if (cVar6 != 'n') goto LAB_1400915a8;
      uVar8 = FUN_14009026c((longlong)param_1);
      cVar6 = (char)uVar8;
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_14009128a:
      bVar9 = 1;
    }
    else {
      if (cVar6 == 's') goto LAB_140091275;
      if (cVar6 == 'u') goto LAB_140091236;
      if (cVar6 != 'x') goto LAB_1400915a8;
      bVar9 = 0;
    }
    uVar8 = FUN_1400928b4((longlong)param_1,bVar9);
    cVar6 = (char)uVar8;
  }
LAB_140091291:
  if ((cVar6 == '\0') || ((char)param_1[7] != '\0')) goto LAB_1400915a8;
  local_48 = local_48 & 0xff000000;
  lVar13 = 0;
  uVar3 = (uint)param_1[5];
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_1400912eb;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar13 = 1;
  }
LAB_1400912eb:
  cVar6 = *(char *)((longlong)param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_48 + lVar13) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar12 = 0x58;
    }
    *(undefined1 *)((longlong)&local_48 + lVar13 + 1) = uVar12;
    lVar13 = lVar13 + 2;
  }
  iVar11 = (*(int *)((longlong)param_1 + 0x2c) - (int)lVar13) - (int)param_1[9];
  if (((uVar3 & 0xc) == 0) && (iVar14 = 0, 0 < iVar11)) {
    iVar10 = (int)param_1[4];
    do {
      uVar8 = param_1[0x8c];
      if (*(longlong *)(uVar8 + 0x10) == *(longlong *)(uVar8 + 8)) {
        if (*(char *)(uVar8 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)(param_1 + 4) = iVar10;
      }
      else {
        *(int *)(param_1 + 4) = iVar10 + 1;
        *(longlong *)(uVar8 + 0x10) = *(longlong *)(uVar8 + 0x10) + 1;
        **(undefined1 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
      }
      iVar10 = (int)param_1[4];
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x8c);
  puVar1 = param_1 + 4;
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar13,(int *)puVar1,
             (__crt_deferred_errno_cache *)param_1[1]);
  if ((((uint)param_1[5] >> 3 & 1) != 0) &&
     ((((uint)param_1[5] >> 2 & 1) == 0 && (iVar14 = 0, 0 < iVar11)))) {
    iVar10 = (int)*puVar1;
    do {
      lVar13 = *(longlong *)this;
      if (*(longlong *)(lVar13 + 0x10) == *(longlong *)(lVar13 + 8)) {
        if (*(char *)(lVar13 + 0x18) == '\0') {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        *(int *)puVar1 = iVar10;
      }
      else {
        *(int *)puVar1 = iVar10 + 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar10 = (int)*puVar1;
    } while ((iVar10 != -1) && (iVar14 = iVar14 + 1, iVar14 < iVar11));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,(char *)param_1[8],(int)param_1[9],(int *)puVar1,
               (__crt_deferred_errno_cache *)param_1[1]);
  }
  else {
    plVar4 = (longlong *)param_1[1];
    if ((char)plVar4[5] == '\0') {
      FUN_14008f0b0(plVar4);
    }
    pWVar15 = (WCHAR *)param_1[8];
    iVar14 = 0;
    if (*(int *)(plVar4[3] + 0xc) == 0xfde9) {
      local_40[0] = 0;
      local_40[1] = 0;
      if ((int)param_1[9] != 0) {
        do {
          WVar2 = *pWVar15;
          pWVar15 = pWVar15 + 1;
          lVar13 = FUN_1400a5910((byte *)&local_48,(uint)(ushort)WVar2,local_40,param_1[1]);
          if (lVar13 == -1) goto LAB_1400914b6;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar13,(int *)puVar1,
                     (__crt_deferred_errno_cache *)param_1[1]);
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
    else if ((int)param_1[9] != 0) {
      do {
        local_48 = 0;
        WVar2 = *pWVar15;
        pWVar15 = pWVar15 + 1;
        iVar10 = FUN_1400a5358(&local_48,(undefined1 (*) [32])local_40,6,WVar2,
                               (longlong *)param_1[1]);
        if ((iVar10 != 0) || (local_48 == 0)) goto LAB_1400914b6;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,(char *)local_40,local_48,(int *)puVar1,
                   (__crt_deferred_errno_cache *)param_1[1]);
        iVar14 = iVar14 + 1;
      } while (iVar14 != (int)param_1[9]);
    }
  }
  goto LAB_140091534;
LAB_1400914b6:
  *(int *)puVar1 = -1;
LAB_140091534:
  iVar14 = (int)param_1[4];
  if ((-1 < iVar14) && (((uint)param_1[5] >> 2 & 1) != 0)) {
    puVar1 = param_1 + 4;
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        uVar8 = param_1[0x8c];
        if (*(longlong *)(uVar8 + 0x10) == *(longlong *)(uVar8 + 8)) {
          if (*(char *)(uVar8 + 0x18) == '\0') {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
          *(int *)puVar1 = iVar14;
        }
        else {
          *(int *)puVar1 = iVar14 + 1;
          *(longlong *)(uVar8 + 0x10) = *(longlong *)(uVar8 + 0x10) + 1;
          **(undefined1 **)param_1[0x8c] = 0x20;
          *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
        }
        iVar14 = (int)*puVar1;
      } while ((iVar14 != -1) && (iVar10 = iVar10 + 1, iVar10 < iVar11));
    }
  }
LAB_1400915a8:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_88);
}

