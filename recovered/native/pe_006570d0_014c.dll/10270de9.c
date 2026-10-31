/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270de9 */

/* WARNING: Removing unreachable block (ram,0x10270fb1) */
/* WARNING: Removing unreachable block (ram,0x10270fc6) */

ulonglong FUN_10270de9(int param_1,char *param_2,int *param_3,uint param_4,byte param_5)

{
  byte bVar1;
  ulonglong uVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  char local_8;
  
  uVar6 = param_4;
  cVar4 = FUN_10262835();
  pcVar3 = param_2;
  if (cVar4 == '\0') {
LAB_10270e2f:
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
    return 0;
  }
  if ((uVar6 != 0) && (((int)uVar6 < 2 || (0x24 < (int)uVar6)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_1);
    goto LAB_10270e2f;
  }
  local_8 = *param_2;
  param_2 = param_2 + 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_1025ec50();
  }
  while (iVar5 = FUN_1026379d(local_8,8,param_1 + 0xc), iVar5 != 0) {
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  bVar1 = param_5 | 2;
  if ((local_8 == '-') || (bVar1 = param_5, local_8 == '+')) {
    local_8 = *param_2;
    param_2 = param_2 + 1;
  }
  if ((uVar6 != 0) && (uVar9 = uVar6, uVar6 != 0x10)) goto LAB_10270f34;
  if ((byte)(local_8 - 0x30U) < 10) {
    iVar5 = local_8 + -0x30;
LAB_10270ef2:
    if (iVar5 != 0) goto LAB_10270f2a;
    cVar4 = *param_2;
    if ((cVar4 == 'x') || (cVar4 == 'X')) {
      local_8 = param_2[1];
      param_2 = param_2 + 2;
      uVar9 = 0x10;
      if (uVar6 != 0) {
        uVar9 = uVar6;
      }
      goto LAB_10270f34;
    }
    param_2 = param_2 + 1;
    __crt_strtox::c_string_character_source<char>::unget
              ((c_string_character_source<char> *)&param_2,cVar4);
    uVar9 = 8;
  }
  else {
    if ((byte)(local_8 + 0x9fU) < 0x1a) {
      iVar5 = local_8 + -0x57;
      goto LAB_10270ef2;
    }
    if ((byte)(local_8 + 0xbfU) < 0x1a) {
      iVar5 = local_8 + -0x37;
      goto LAB_10270ef2;
    }
LAB_10270f2a:
    uVar9 = 10;
  }
  if (uVar6 != 0) {
    uVar9 = uVar6;
  }
LAB_10270f34:
  uVar7 = __aulldiv(0xffffffff,0xffffffff,uVar9,(int)uVar9 >> 0x1f);
  uVar2 = 0;
  while( true ) {
    if ((byte)(local_8 - 0x30U) < 10) {
      uVar6 = (int)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9fU) < 0x1a) {
      uVar6 = (int)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbfU) < 0x1a) {
      uVar6 = (int)local_8 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar9 <= uVar6) break;
    uVar8 = __allmul(uVar9,(int)uVar9 >> 0x1f,uVar2);
    bVar1 = bVar1 | (uVar8 + uVar6 < uVar8 || uVar7 < uVar2) << 2 | 8U;
    local_8 = *param_2;
    param_2 = param_2 + 1;
    uVar2 = uVar8 + uVar6;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_8);
  if ((bVar1 & 8) == 0) {
    if (param_3 == (int *)0x0) {
      return 0;
    }
    *param_3 = (int)pcVar3;
    return 0;
  }
  cVar4 = FUN_10267b2c(bVar1,uVar2);
  if (cVar4 == '\0') {
    if ((bVar1 & 2) != 0) {
      uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x22;
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 2) == 0) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (int)param_2;
      }
      return 0x8000000000000000;
    }
    uVar2 = 0xffffffffffffffff;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)param_2;
    return uVar2;
  }
  return uVar2;
}

