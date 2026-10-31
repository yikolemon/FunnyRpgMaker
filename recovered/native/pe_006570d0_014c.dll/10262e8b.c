/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10262e8b */

uint FUN_10262e8b(int param_1,char *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint local_10;
  char local_8;
  
  uVar4 = param_4;
  cVar2 = FUN_10262835();
  pcVar1 = param_2;
  if (cVar2 == '\0') {
LAB_10262ed0:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((uVar4 != 0) && (((int)uVar4 < 2 || (0x24 < (int)uVar4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_1);
    goto LAB_10262ed0;
  }
  local_10 = 0;
  local_8 = *param_2;
  pcVar6 = param_2 + 1;
  bVar5 = param_5 | 2;
  if ((local_8 == '-') || (bVar5 = param_5, local_8 == '+')) {
    local_8 = *pcVar6;
    pcVar6 = param_2 + 2;
  }
  param_2 = pcVar6;
  if ((uVar4 != 0) && (uVar7 = uVar4, uVar4 != 0x10)) goto LAB_10262f98;
  if ((byte)(local_8 - 0x30U) < 10) {
    iVar3 = local_8 + -0x30;
LAB_10262f56:
    if (iVar3 != 0) goto LAB_10262f8e;
    cVar2 = *pcVar6;
    param_2 = pcVar6 + 1;
    if ((cVar2 == 'x') || (cVar2 == 'X')) {
      local_8 = *param_2;
      param_2 = pcVar6 + 2;
      uVar7 = 0x10;
      if (uVar4 != 0) {
        uVar7 = uVar4;
      }
      goto LAB_10262f98;
    }
    __crt_strtox::c_string_character_source<char>::unget
              ((c_string_character_source<char> *)&param_2,cVar2);
    uVar7 = 8;
  }
  else {
    if ((byte)(local_8 + 0x9fU) < 0x1a) {
      iVar3 = local_8 + -0x57;
      goto LAB_10262f56;
    }
    if ((byte)(local_8 + 0xbfU) < 0x1a) {
      iVar3 = local_8 + -0x37;
      goto LAB_10262f56;
    }
LAB_10262f8e:
    uVar7 = 10;
  }
  if (uVar4 != 0) {
    uVar7 = uVar4;
  }
LAB_10262f98:
  while( true ) {
    if ((byte)(local_8 - 0x30U) < 10) {
      uVar4 = (int)local_8 - 0x30;
    }
    else if ((byte)(local_8 + 0x9fU) < 0x1a) {
      uVar4 = (int)local_8 - 0x57;
    }
    else if ((byte)(local_8 + 0xbfU) < 0x1a) {
      uVar4 = (int)local_8 - 0x37;
    }
    else {
      uVar4 = 0xffffffff;
    }
    if (uVar7 <= uVar4) break;
    uVar4 = local_10 * uVar7 + uVar4;
    bVar5 = bVar5 | (uVar4 < local_10 * uVar7 || (uint)(0xffffffff / (ulonglong)uVar7) < local_10)
                    << 2 | 8U;
    local_8 = *param_2;
    param_2 = param_2 + 1;
    local_10 = uVar4;
  }
  __crt_strtox::c_string_character_source<char>::unget
            ((c_string_character_source<char> *)&param_2,local_8);
  if ((bVar5 & 8) == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    *param_3 = pcVar1;
    return 0;
  }
  cVar2 = FUN_10263750(bVar5,local_10);
  if (cVar2 == '\0') {
    if ((bVar5 & 2) != 0) {
      local_10 = -local_10;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x22;
    if ((bVar5 & 1) != 0) {
      if ((bVar5 & 2) == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = param_2;
        }
        return 0x7fffffff;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
      }
      return 0x80000000;
    }
    local_10 = 0xffffffff;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
    return local_10;
  }
  return local_10;
}

