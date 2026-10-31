/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180276e9c */

void FUN_180276e9c(longlong param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 uVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_88;
  cVar6 = *(char *)(param_1 + 0x39);
  uVar10 = 0x78;
  if (cVar6 < 'e') {
    if (cVar6 == 'd') {
LAB_180276f6e:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_180276f72:
      cVar6 = FUN_180276768(param_1,0);
    }
    else if (cVar6 < 'T') {
      if (cVar6 == 'S') {
LAB_180276fb1:
        cVar6 = FUN_180273b98();
      }
      else {
        if (cVar6 != 'A') {
          if (cVar6 == 'C') {
LAB_180276f31:
            cVar6 = FUN_180273a48(param_1,0);
            goto LAB_180276fcd;
          }
          if (((cVar6 != 'E') && (cVar6 != 'F')) && (cVar6 != 'G')) goto LAB_1802772e4;
        }
LAB_180276f0b:
        cVar6 = FUN_180273c34();
      }
    }
    else {
      if (cVar6 == 'X') goto LAB_180276fc6;
      if (cVar6 != 'Z') {
        if (cVar6 != 'a') {
          if (cVar6 != 'c') goto LAB_1802772e4;
          goto LAB_180276f31;
        }
        goto LAB_180276f0b;
      }
      cVar6 = FUN_180273b1c();
    }
  }
  else if (cVar6 < 'p') {
    if (cVar6 == 'o') {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_180276564(param_1,0);
    }
    else {
      if (((cVar6 == 'e') || (cVar6 == 'f')) || (cVar6 == 'g')) goto LAB_180276f0b;
      if (cVar6 == 'i') goto LAB_180276f6e;
      if (cVar6 != 'n') goto LAB_1802772e4;
      cVar6 = FUN_180273e90();
    }
  }
  else {
    if (cVar6 == 'p') {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_180276fc6:
      uVar8 = CONCAT71((uint7)(uint3)(cVar6 >> 7),1);
    }
    else {
      if (cVar6 == 's') goto LAB_180276fb1;
      if (cVar6 == 'u') goto LAB_180276f72;
      if (cVar6 != 'x') goto LAB_1802772e4;
      uVar8 = 0;
    }
    cVar6 = FUN_180276360(param_1,uVar8);
  }
LAB_180276fcd:
  if ((cVar6 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_1802772e4;
  local_48 = local_48 & 0xff000000;
  lVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_180277027;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_180277027:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    *(undefined1 *)((longlong)&local_48 + lVar11) = 0x30;
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      uVar10 = 0x58;
    }
    *(undefined1 *)((longlong)&local_48 + lVar11 + 1) = uVar10;
    lVar11 = lVar11 + 2;
  }
  iVar9 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar3 & 0xc) == 0) && (iVar12 = 0, 0 < iVar9)) {
    iVar7 = *(int *)(param_1 + 0x20);
    do {
      lVar4 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar7;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar7 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar7 = *(int *)(param_1 + 0x20);
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8)
            );
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar9)))) {
    iVar7 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        *piVar1 = iVar7;
      }
      else {
        *piVar1 = iVar7 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar7 = *piVar1;
    } while ((iVar7 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar9));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_180272dc0(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_1802964a0(&local_48,uVar2,local_40);
          if (lVar11 == -1) goto LAB_1802771f2;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar11,piVar1,
                     *(__crt_deferred_errno_cache **)(param_1 + 8));
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVar7 = FUN_180295e44(&local_48,local_40,6);
        if ((iVar7 != 0) || (local_48 == 0)) goto LAB_1802771f2;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_40,local_48,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
  goto LAB_180277270;
LAB_1802771f2:
  *piVar1 = -1;
LAB_180277270:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar7 = 0;
    if (0 < iVar9) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar7 = iVar7 + 1, iVar7 < iVar9));
    }
  }
LAB_1802772e4:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_88);
}

