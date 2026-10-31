/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027501c */

void FUN_18027501c(longlong param_1)

{
  int *piVar1;
  string_output_adapter<wchar_t> *this;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined2 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_88;
  uVar2 = *(ushort *)(param_1 + 0x3a);
  uVar11 = 0x78;
  uVar13 = 1;
  if (uVar2 < 0x65) {
    if (uVar2 == 100) {
LAB_1802750fd:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_180275101:
      cVar6 = FUN_180276154(param_1,0);
    }
    else if (uVar2 < 0x54) {
      if (uVar2 == 0x53) {
LAB_180275141:
        cVar6 = FUN_1802756cc();
      }
      else {
        if (uVar2 != 0x41) {
          if (uVar2 == 0x43) {
LAB_1802750c0:
            cVar6 = FUN_180275594(param_1,0);
            goto LAB_18027515e;
          }
          if (((uVar2 != 0x45) && (uVar2 != 0x46)) && (uVar2 != 0x47)) goto LAB_180275567;
        }
LAB_18027509b:
        cVar6 = FUN_180275828();
      }
    }
    else {
      if (uVar2 == 0x58) goto LAB_180275156;
      if (uVar2 != 0x5a) {
        if (uVar2 != 0x61) {
          if (uVar2 != 99) goto LAB_180275567;
          goto LAB_1802750c0;
        }
        goto LAB_18027509b;
      }
      cVar6 = FUN_180275658();
    }
  }
  else if (uVar2 < 0x70) {
    if (uVar2 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_180275f48(param_1,0);
    }
    else {
      if (((uVar2 == 0x65) || (uVar2 == 0x66)) || (uVar2 == 0x67)) goto LAB_18027509b;
      if (uVar2 == 0x69) goto LAB_1802750fd;
      if (uVar2 != 0x6e) goto LAB_180275567;
      cVar6 = FUN_180273e90();
    }
  }
  else {
    if (uVar2 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_180275156:
      uVar8 = CONCAT11((char)(uVar2 >> 8),1);
    }
    else {
      if (uVar2 == 0x73) goto LAB_180275141;
      if (uVar2 == 0x75) goto LAB_180275101;
      if (uVar2 != 0x78) goto LAB_180275567;
      uVar8 = 0;
    }
    cVar6 = FUN_180275d3c(param_1,uVar8);
  }
LAB_18027515e:
  uVar10 = 0;
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_180275567;
  uVar5 = local_40 & 0xffff000000000000;
  uVar14 = *(uint *)(param_1 + 0x28);
  uVar12 = uVar10;
  if ((uVar14 >> 4 & 1) != 0) {
    local_40._2_6_ = (undefined6)(uVar5 >> 0x10);
    if ((uVar14 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        uVar12 = 0;
        if ((uVar14 >> 1 & 1) != 0) {
          local_40 = CONCAT62(local_40._2_6_,0x20);
          uVar12 = uVar13;
          uVar5 = local_40;
        }
        goto LAB_1802751c7;
      }
      uVar8 = 0x2b;
    }
    else {
      uVar8 = 0x2d;
    }
    local_40 = CONCAT62(local_40._2_6_,uVar8);
    uVar12 = uVar13;
    uVar5 = local_40;
  }
LAB_1802751c7:
  local_40 = uVar5;
  sVar3 = *(short *)(param_1 + 0x3a);
  if (((sVar3 - 0x58U & 0xffdf) != 0) || ((uVar14 >> 5 & 1) == 0)) {
    uVar13 = uVar10;
  }
  if (((char)uVar13 != '\0') || ((sVar3 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_40 + uVar12 * 2) = 0x30;
    if ((sVar3 == 0x58) || (sVar3 == 0x41)) {
      uVar11 = 0x58;
    }
    *(undefined2 *)((longlong)&local_40 + (uVar12 + 1) * 2) = uVar11;
    uVar12 = uVar12 + 2;
  }
  iVar17 = (*(int *)(param_1 + 0x2c) - (int)uVar12) - *(int *)(param_1 + 0x48);
  if (((uVar14 & 0xc) == 0) && (0 < iVar17)) {
    iVar9 = *(int *)(param_1 + 0x20);
    uVar13 = uVar10;
    do {
      lVar7 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar7 + 0x10) == *(longlong *)(lVar7 + 8)) {
        if (*(char *)(lVar7 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar9;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar9 + 1;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
      }
      iVar9 = *(int *)(param_1 + 0x20);
    } while ((iVar9 != -1) &&
            (uVar14 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar14, (int)uVar14 < iVar17));
  }
  this = (string_output_adapter<wchar_t> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<wchar_t>::write_string
            (this,(wchar_t *)&local_40,(int)uVar12,piVar1,
             *(__crt_deferred_errno_cache **)(param_1 + 8));
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (0 < iVar17)))) {
    iVar9 = *piVar1;
    uVar13 = uVar10;
    do {
      lVar7 = *(longlong *)this;
      if (*(longlong *)(lVar7 + 0x10) == *(longlong *)(lVar7 + 8)) {
        if (*(char *)(lVar7 + 0x18) == '\0') {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
        *piVar1 = iVar9;
      }
      else {
        *piVar1 = iVar9 + 1;
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
        *(undefined2 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 2;
      }
      iVar9 = *piVar1;
    } while ((iVar9 != -1) &&
            (uVar14 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar14, (int)uVar14 < iVar17));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') && (0 < *(int *)(param_1 + 0x48))) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_180272dc0(lVar7);
    }
    if (*(int *)(*(longlong *)(lVar7 + 0x18) + 0xc) == 0xfde9) {
      local_50 = *(undefined8 *)(param_1 + 0x40);
      local_40 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          iVar9 = (int)uVar10;
          local_58 = 0;
          lVar7 = FUN_18029658c(&local_58,&local_50,2,&local_40);
          if (lVar7 == -1) goto LAB_1802754c5;
          lVar16 = *(longlong *)this;
          if (*(longlong *)(lVar16 + 0x10) == *(longlong *)(lVar16 + 8)) {
            if (*(char *)(lVar16 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          if (lVar7 == 2) {
            lVar7 = *(longlong *)this;
            if (*(longlong *)(lVar7 + 0x10) == *(longlong *)(lVar7 + 8)) {
              if (*(char *)(lVar7 + 0x18) == '\0') {
                *piVar1 = -1;
              }
              else {
                *piVar1 = *piVar1 + 1;
              }
            }
            else {
              *piVar1 = *piVar1 + 1;
              *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
              *(undefined2 *)**(undefined8 **)this = local_58._2_2_;
              **(longlong **)this = **(longlong **)this + 2;
            }
            iVar9 = iVar9 + 1;
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while (iVar9 + 1U != *(uint *)(param_1 + 0x48));
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_180272dc0(lVar7);
      }
      lVar16 = *(longlong *)(param_1 + 0x40);
      iVar9 = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          local_58 = local_58 & 0xffff0000;
          iVar15 = FUN_180296130(&local_58,lVar16,
                                 (longlong)*(int *)(*(longlong *)(lVar7 + 0x18) + 8));
          if (iVar15 < 1) goto LAB_1802754c5;
          lVar4 = *(longlong *)this;
          if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
            if (*(char *)(lVar4 + 0x18) == '\0') {
              *piVar1 = -1;
            }
            else {
              *piVar1 = *piVar1 + 1;
            }
          }
          else {
            *piVar1 = *piVar1 + 1;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
            *(undefined2 *)**(undefined8 **)this = (undefined2)local_58;
            **(longlong **)this = **(longlong **)this + 2;
          }
          lVar16 = lVar16 + iVar15;
          iVar9 = iVar9 + 1;
        } while (iVar9 != *(int *)(param_1 + 0x48));
      }
    }
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              (this,*(wchar_t **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  goto LAB_1802754e7;
LAB_1802754c5:
  *piVar1 = -1;
LAB_1802754e7:
  iVar9 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar9) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar15 = 0;
    if (0 < iVar17) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar7 + 0x10) == *(longlong *)(lVar7 + 8)) {
          if (*(char *)(lVar7 + 0x18) == '\0') {
            iVar9 = -1;
          }
          else {
            iVar9 = iVar9 + 1;
          }
          *piVar1 = iVar9;
        }
        else {
          *piVar1 = iVar9 + 1;
          *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 1;
          *(undefined2 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 2;
        }
        iVar9 = *piVar1;
      } while ((iVar9 != -1) && (iVar15 = iVar15 + 1, iVar15 < iVar17));
    }
  }
LAB_180275567:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_88);
}

