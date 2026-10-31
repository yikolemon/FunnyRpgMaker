/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008f7e4 */

void FUN_14008f7e4(__uint64 *param_1)

{
  __uint64 *p_Var1;
  string_output_adapter<wchar_t> *this;
  ushort uVar2;
  short sVar3;
  __uint64 _Var4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  undefined2 uVar9;
  ulonglong uVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  undefined2 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStackY_88 [32];
  undefined4 local_58;
  __uint64 local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  undefined8 uVar10;
  
  local_50[1] = 0xfffffffffffffffe;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  uVar2 = *(ushort *)((longlong)param_1 + 0x3a);
  uVar15 = 0x78;
  uVar17 = 1;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_14008f8c5:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_14008f8c9:
      uVar11 = FUN_1400909d4((longlong)param_1,0);
      cVar8 = (char)uVar11;
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_14008f909:
        uVar10 = FUN_14008fe94(param_1);
        cVar8 = (char)uVar10;
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_14008f888:
            uVar10 = FUN_14008fd5c(param_1);
            cVar8 = (char)uVar10;
            goto LAB_14008f926;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) goto LAB_14008fd2f;
        }
LAB_14008f863:
        uVar10 = FUN_14008fff0(param_1);
        cVar8 = (char)uVar10;
      }
    }
    else {
      if (uVar2 == 0x58) goto LAB_14008f91e;
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) goto LAB_14008fd2f;
          goto LAB_14008f888;
        }
        goto LAB_14008f863;
      }
      uVar10 = FUN_14008fe20(param_1);
      cVar8 = (char)uVar10;
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar11 = FUN_1400907c8((longlong)param_1);
      cVar8 = (char)uVar11;
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_14008f863;
      if (uVar2 == 0x69) goto LAB_14008f8c5;
      if (uVar2 != 0x6e) goto LAB_14008fd2f;
      uVar11 = FUN_14009026c((longlong)param_1);
      cVar8 = (char)uVar11;
    }
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 6) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0xb;
LAB_14008f91e:
      bVar13 = 1;
    }
    else {
      if (uVar2 == 0x73) goto LAB_14008f909;
      if (uVar2 == 0x75) goto LAB_14008f8c9;
      if (uVar2 != 0x78) goto LAB_14008fd2f;
      bVar13 = 0;
    }
    uVar11 = FUN_1400905bc((longlong)param_1,bVar13);
    cVar8 = (char)uVar11;
  }
LAB_14008f926:
  uVar11 = 0;
  if ((cVar8 == '\0') || ((char)param_1[7] != '\0')) goto LAB_14008fd2f;
  uVar7 = local_40 & 0xffff000000000000;
  uVar18 = (uint)param_1[5];
  uVar16 = uVar11;
  if ((uVar18 >> 4 & 1) != 0) {
    local_40._2_6_ = (undefined6)(uVar7 >> 0x10);
    if ((uVar18 >> 6 & 1) == 0) {
      if ((param_1[5] & 1) == 0) {
        uVar16 = 0;
        if ((uVar18 >> 1 & 1) != 0) {
          local_40 = CONCAT62(local_40._2_6_,0x20);
          uVar16 = uVar17;
          uVar7 = local_40;
        }
        goto LAB_14008f98f;
      }
      uVar9 = 0x2b;
    }
    else {
      uVar9 = 0x2d;
    }
    local_40 = CONCAT62(local_40._2_6_,uVar9);
    uVar16 = uVar17;
    uVar7 = local_40;
  }
LAB_14008f98f:
  local_40 = uVar7;
  sVar3 = *(short *)((longlong)param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || ((uVar18 >> 5 & 1) == 0)) {
    uVar17 = uVar11;
  }
  if (((char)uVar17 != '\0') || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + uVar16 * 2) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar15 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (uVar16 + 1) * 2) = uVar15;
    uVar16 = uVar16 + 2;
  }
  iVar20 = (*(int *)((longlong)param_1 + 0x2c) - (int)uVar16) - (int)param_1[9];
  if (((uVar18 & 0xc) == 0) && (0 < iVar20)) {
    iVar14 = (int)param_1[4];
    uVar17 = uVar11;
    do {
      _Var4 = param_1[0x8c];
      if (*(longlong *)(_Var4 + 0x10) == *(longlong *)(_Var4 + 8)) {
        if (*(char *)(_Var4 + 0x18) == '\0') {
          iVar14 = -1;
        }
        else {
          iVar14 = iVar14 + 1;
        }
        *(int *)(param_1 + 4) = iVar14;
      }
      else {
        *(int *)(param_1 + 4) = iVar14 + 1;
        *(longlong *)(_Var4 + 0x10) = *(longlong *)(_Var4 + 0x10) + 1;
        **(undefined2 **)param_1[0x8c] = 0x20;
        *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
      }
      iVar14 = (int)param_1[4];
    } while ((iVar14 != -1) &&
            (uVar18 = (int)uVar17 + 1, uVar17 = (ulonglong)uVar18, (int)uVar18 < iVar20));
  }
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x8c);
  p_Var1 = param_1 + 4;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_40,(int)uVar16,(int *)p_Var1,
             (__crt_deferred_errno_cache *)param_1[1]);
  if ((((uint)param_1[5] >> 3 & 1) != 0) && ((((uint)param_1[5] >> 2 & 1) == 0 && (0 < iVar20)))) {
    iVar14 = (int)*p_Var1;
    uVar17 = uVar11;
    do {
      lVar5 = *(longlong *)this;
      if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
        if (*(char *)(lVar5 + 0x18) == '\0') {
          iVar14 = -1;
        }
        else {
          iVar14 = iVar14 + 1;
        }
        *(int *)p_Var1 = iVar14;
      }
      else {
        *(int *)p_Var1 = iVar14 + 1;
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 2;
      }
      iVar14 = (int)*p_Var1;
    } while ((iVar14 != -1) &&
            (uVar18 = (int)uVar17 + 1, uVar17 = (ulonglong)uVar18, (int)uVar18 < iVar20));
  }
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0') && (0 < (int)param_1[9])) {
    plVar6 = (longlong *)param_1[1];
    if ((char)plVar6[5] == '\0') {
      FUN_14008f0b0(plVar6);
    }
    if (*(int *)(plVar6[3] + 0xc) == 0xfde9) {
      local_50[0] = param_1[8];
      local_40 = 0;
      if ((int)param_1[9] != 0) {
        do {
          iVar14 = (int)uVar11;
          local_58 = 0;
          pbVar12 = FUN_1400a59fc((ushort *)&local_58,local_50,2,(uint *)&local_40,param_1[1]);
          if (pbVar12 == (byte *)0xffffffffffffffff) goto LAB_14008fc8d;
          lVar5 = *(longlong *)this;
          if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
            if (*(char *)(lVar5 + 0x18) == '\0') {
              *(int *)p_Var1 = -1;
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
            }
          }
          else {
            *(int *)p_Var1 = (int)*p_Var1 + 1;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
            *(WCHAR *)**(undefined8 **)this = (WCHAR)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          if (pbVar12 == (byte *)0x2) {
            lVar5 = *(longlong *)this;
            if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
              if (*(char *)(lVar5 + 0x18) == '\0') {
                *(int *)p_Var1 = -1;
              }
              else {
                *(int *)p_Var1 = (int)*p_Var1 + 1;
              }
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
              *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
              *(undefined2 *)**(undefined8 **)this = local_58._2_2_;
              **(longlong **)this = **(longlong **)this + 2;
            }
            iVar14 = iVar14 + 1;
          }
          uVar11 = (ulonglong)(iVar14 + 1U);
        } while (iVar14 + 1U != (uint)param_1[9]);
      }
    }
    else {
      plVar6 = (longlong *)param_1[1];
      if ((char)plVar6[5] == '\0') {
        FUN_14008f0b0(plVar6);
      }
      pbVar12 = (byte *)param_1[8];
      iVar14 = 0;
      if ((int)param_1[9] != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar19 = FUN_1400a55a0((LPWSTR)&local_58,pbVar12,(longlong)*(int *)(plVar6[3] + 8),
                                 (longlong *)param_1[1]);
          if (iVar19 < 1) goto LAB_14008fc8d;
          lVar5 = *(longlong *)this;
          if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
            if (*(char *)(lVar5 + 0x18) == '\0') {
              *(int *)p_Var1 = -1;
            }
            else {
              *(int *)p_Var1 = (int)*p_Var1 + 1;
            }
          }
          else {
            *(int *)p_Var1 = (int)*p_Var1 + 1;
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
            *(WCHAR *)**(undefined8 **)this = (WCHAR)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          pbVar12 = pbVar12 + iVar19;
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)param_1[9]);
      }
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,(wchar_t *)param_1[8],(int)param_1[9],(int *)p_Var1,
               (__crt_deferred_errno_cache *)param_1[1]);
  }
  goto LAB_14008fcaf;
LAB_14008fc8d:
  *(int *)p_Var1 = -1;
LAB_14008fcaf:
  iVar14 = (int)param_1[4];
  if ((-1 < iVar14) && (((uint)param_1[5] >> 2 & 1) != 0)) {
    p_Var1 = param_1 + 4;
    iVar19 = 0;
    if (0 < iVar20) {
      do {
        _Var4 = param_1[0x8c];
        if (*(longlong *)(_Var4 + 0x10) == *(longlong *)(_Var4 + 8)) {
          if (*(char *)(_Var4 + 0x18) == '\0') {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
          *(int *)p_Var1 = iVar14;
        }
        else {
          *(int *)p_Var1 = iVar14 + 1;
          *(longlong *)(_Var4 + 0x10) = *(longlong *)(_Var4 + 0x10) + 1;
          **(undefined2 **)param_1[0x8c] = 0x20;
          *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 2;
        }
        iVar14 = (int)*p_Var1;
      } while ((iVar14 != -1) && (iVar19 = iVar19 + 1, iVar19 < iVar20));
    }
  }
LAB_14008fd2f:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_88);
}

