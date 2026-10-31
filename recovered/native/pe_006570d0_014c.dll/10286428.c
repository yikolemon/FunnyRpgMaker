/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286428 */

undefined4 __thiscall FUN_10286428(uint param_1,uint param_2,byte param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  uint in_stack_00000020;
  char *in_stack_00000024;
  int local_c;
  uint local_8;
  
  iVar4 = 0;
  *in_stack_00000024 = '\0';
  if (-1 < *(char *)((&DAT_103a5230)[(int)param_2 >> 6] + 0x28 + (param_2 & 0x3f) * 0x38)) {
    return 0;
  }
  local_8 = param_1;
  if ((in_stack_00000020 & 0x74000) == 0) {
    local_8 = 0;
    iVar1 = FUN_102878f1(&local_8);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_8 & 0x74000) == 0) {
      in_stack_00000020 = in_stack_00000020 | 0x4000;
    }
    else {
      in_stack_00000020 = in_stack_00000020 | local_8 & 0x74000;
    }
  }
  uVar2 = in_stack_00000020 & 0x74000;
  local_c = 2;
  if (uVar2 == 0x4000) {
    *in_stack_00000024 = '\0';
  }
  else if ((uVar2 == 0x10000) || (uVar2 == 0x14000)) {
    if ((in_stack_00000020 & 0x301) == 0x301) goto LAB_102864dd;
  }
  else if ((uVar2 == 0x20000) || (uVar2 == 0x24000)) {
LAB_102864dd:
    *in_stack_00000024 = '\x02';
  }
  else if ((uVar2 == 0x40000) || (uVar2 == 0x44000)) {
    *in_stack_00000024 = '\x01';
  }
  if ((in_stack_00000020 & 0x70000) == 0) {
    return 0;
  }
  if ((param_3 & 0x40) != 0) {
    return 0;
  }
  uVar2 = param_4 & 0xc0000000;
  if (uVar2 == 0x40000000) {
LAB_1028651b:
    if ((param_5 != 1) && (param_5 != 2)) {
      if ((param_5 == 3) || (param_5 == 4)) {
        lVar5 = FUN_1027938a(param_2,0,0,2);
        if (lVar5 != 0) {
          lVar5 = FUN_1027938a(param_2,0,0,0);
          if (lVar5 == -1) goto LAB_10286573;
          if ((param_4 & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_10286588;
        }
      }
      else if (param_5 != 5) {
        return 0;
      }
    }
    if (*in_stack_00000024 == '\x01') {
      local_c = 3;
      local_8 = 0xbfbbef;
    }
    else {
      if (*in_stack_00000024 != '\x02') {
        return 0;
      }
      local_8 = 0xfeff;
    }
    while (iVar1 = FUN_1027ea53(param_2,(int)&local_8 + iVar4,local_c - iVar4), iVar1 != -1) {
      iVar4 = iVar4 + iVar1;
      if (local_c <= iVar4) {
        return 0;
      }
    }
    goto LAB_10286573;
  }
  if (uVar2 != 0x80000000) {
    if (uVar2 != 0xc0000000) {
      return 0;
    }
    goto LAB_1028651b;
  }
LAB_10286588:
  local_8 = 0;
  iVar4 = FUN_1027ff42(param_2,&local_8,3);
  if ((iVar4 < 1) && (iVar4 == -1)) goto LAB_10286573;
  if (iVar4 == 2) {
LAB_102865c6:
    if ((local_8 & 0xffff) == 0xfffe) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x16;
      goto LAB_10286573;
    }
    if ((local_8 & 0xffff) == 0xfeff) {
      lVar5 = FUN_1027938a(param_2,2,0,0);
      if (lVar5 != -1) {
        *in_stack_00000024 = '\x02';
        return 0;
      }
      goto LAB_10286573;
    }
  }
  else if (iVar4 == 3) {
    if (local_8 == 0xbfbbef) {
      *in_stack_00000024 = '\x01';
      return 0;
    }
    goto LAB_102865c6;
  }
  lVar5 = FUN_1027938a(param_2,0,0,0);
  if (lVar5 != -1) {
    return 0;
  }
LAB_10286573:
  puVar3 = (undefined4 *)FUN_10268ffd();
  return *puVar3;
}

