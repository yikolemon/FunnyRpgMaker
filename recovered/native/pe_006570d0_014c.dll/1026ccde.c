/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ccde */

uint FUN_1026ccde(int *param_1,c_string_character_source<char> *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  char *pcVar10;
  byte *pbVar11;
  int *piVar12;
  uint uVar13;
  c_string_character_source<char> *local_2c;
  byte *local_28;
  byte **local_24;
  int *local_20;
  int *local_1c;
  byte *local_18;
  int local_14;
  int *local_10;
  byte local_a [4];
  byte local_6;
  byte local_5;
  
  cVar1 = FUN_10262835();
  if (cVar1 == '\0') {
    return 7;
  }
  local_18 = *(byte **)param_2;
  local_2c = param_2;
  bVar8 = *local_18;
  *(byte **)param_2 = local_18 + 1;
  local_28 = local_a;
  local_24 = &local_18;
  while( true ) {
    local_a[0] = bVar8;
    iVar4 = FUN_1026379d(bVar8,8,param_1);
    if (iVar4 == 0) break;
    bVar8 = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
  }
  *(bool *)(param_3 + 0xc2) = local_a[0] == 0x2d;
  if ((local_a[0] == 0x2d) || (bVar8 = local_a[0], local_a[0] == 0x2b)) {
    bVar8 = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
    local_a[0] = bVar8;
  }
  if ((bVar8 == 0x49) || (bVar8 == 0x69)) {
    uVar13 = FUN_1026d12c(local_a,param_2,local_18);
    return uVar13;
  }
  if ((bVar8 == 0x4e) || (bVar8 == 0x6e)) {
    uVar13 = FUN_1026d1de(local_a,param_2,local_18);
    return uVar13;
  }
  local_5 = 0;
  if (bVar8 == 0x30) {
    pbVar11 = *(byte **)param_2;
    bVar8 = *pbVar11;
    local_20 = (int *)CONCAT31(local_20._1_3_,bVar8);
    *(byte **)param_2 = pbVar11 + 1;
    if ((bVar8 == 0x78) || (bVar8 == 0x58)) {
      bVar8 = pbVar11[1];
      local_5 = 1;
      *(byte **)param_2 = pbVar11 + 2;
      local_a[0] = bVar8;
      local_18 = pbVar11;
    }
    else {
      __crt_strtox::c_string_character_source<char>::unget(param_2,bVar8);
      bVar8 = local_a[0];
    }
  }
  local_1c = param_3 + 2;
  local_14 = 0;
  local_20 = param_3 + 0xc2;
  uVar13 = (uint)bVar8;
  if (bVar8 == 0x30) {
    uVar13 = 0x100;
    do {
      cVar1 = **(char **)param_2;
      uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar1);
      *(char **)param_2 = *(char **)param_2 + 1;
      local_a[0] = cVar1;
    } while (cVar1 == '0');
  }
  uVar6 = 9;
  local_10 = local_1c;
  if (local_5 != 0) {
    uVar6 = 0xf;
  }
  while( true ) {
    cVar1 = (char)uVar13;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = (int)cVar1 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      uVar5 = (int)cVar1 - 0x57;
    }
    else if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      uVar5 = (int)cVar1 - 0x37;
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar6 < uVar5) break;
    if (local_10 != local_20) {
      *(char *)local_10 = (char)uVar5;
      local_10 = (int *)((int)local_10 + 1);
    }
    local_14 = local_14 + 1;
    local_a[0] = **(undefined1 **)param_2;
    uVar13 = (uint)CONCAT11(1,local_a[0]);
    *(undefined1 **)param_2 = *(undefined1 **)param_2 + 1;
  }
  if (cVar1 == *(char *)**(undefined4 **)(*param_1 + 0x88)) {
    pcVar10 = *(char **)param_2 + 1;
    cVar1 = **(char **)param_2;
    uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar1);
    *(char **)param_2 = pcVar10;
    local_a[0] = cVar1;
    if ((local_10 == local_1c) && (cVar1 == '0')) {
      uVar13 = 0x100;
      do {
        cVar1 = *pcVar10;
        uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar1);
        local_14 = local_14 + -1;
        pcVar10 = pcVar10 + 1;
        local_a[0] = cVar1;
        *(char **)param_2 = pcVar10;
      } while (cVar1 == '0');
    }
    uVar6 = 9;
    if (local_5 != 0) {
      uVar6 = 0xf;
    }
    while( true ) {
      cVar9 = (char)uVar13;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if ((byte)(cVar9 + 0x9fU) < 0x1a) {
          uVar5 = (int)cVar9 - 0x57;
        }
        else if ((byte)(cVar9 + 0xbfU) < 0x1a) {
          uVar5 = (int)cVar9 - 0x37;
        }
        else {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = (int)cVar9 - 0x30;
      }
      if (uVar6 < uVar5) break;
      if (local_10 != local_20) {
        *(char *)local_10 = (char)uVar5;
        local_10 = (int *)((int)local_10 + 1);
      }
      cVar1 = **(char **)param_2;
      uVar13 = (uint)CONCAT11(1,cVar1);
      *(char **)param_2 = *(char **)param_2 + 1;
      local_a[0] = cVar1;
    }
  }
  iVar4 = 0;
  if ((char)(uVar13 >> 8) == '\0') {
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_2c);
    if (!bVar2) {
      return 7;
    }
    if (local_5 == 0) {
      return 7;
    }
    return 2;
  }
  __crt_strtox::c_string_character_source<char>::unget(param_2,local_a[0]);
  local_18 = *(byte **)param_2;
  bVar8 = *local_18;
  *(byte **)param_2 = local_18 + 1;
  if (bVar8 == 0x45) {
LAB_1026cf61:
    bVar3 = local_5 ^ 1;
  }
  else if (bVar8 == 0x50) {
LAB_1026cf5c:
    bVar3 = local_5;
  }
  else {
    if (bVar8 == 0x65) goto LAB_1026cf61;
    bVar3 = 0;
    if (bVar8 == 0x70) goto LAB_1026cf5c;
  }
  local_a[0] = bVar8;
  if (bVar3 != 0) {
    bVar8 = local_18[1];
    pbVar11 = local_18 + 2;
    *(byte **)param_2 = pbVar11;
    if ((bVar8 == 0x2b) || (bVar3 = bVar8, bVar8 == 0x2d)) {
      bVar3 = *pbVar11;
      pbVar11 = local_18 + 3;
      *(byte **)param_2 = pbVar11;
    }
    uVar13 = (uint)CONCAT11(bVar8,bVar3);
    local_6 = 0;
    local_a[0] = bVar3;
    if (bVar3 != 0x30) goto LAB_1026cfb5;
    do {
      local_a[0] = *pbVar11;
      uVar13 = CONCAT31((int3)(uVar13 >> 8),local_a[0]);
      pbVar11 = pbVar11 + 1;
      *(byte **)param_2 = pbVar11;
    } while (local_a[0] == 0x30);
    while( true ) {
      local_6 = 1;
      bVar3 = (byte)uVar13;
LAB_1026cfb5:
      cVar1 = (char)uVar13;
      if (((char)bVar3 < '0') || ('9' < (char)local_a[0])) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar1 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_1026d005;
          uVar6 = (int)cVar1 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar1 - 0x30;
      }
      if (9 < uVar6) goto LAB_1026d005;
      local_6 = 1;
      iVar4 = iVar4 * 10 + uVar6;
      if (0x1450 < iVar4) break;
      local_a[0] = *pbVar11;
      uVar13 = CONCAT31((int3)(uVar13 >> 8),local_a[0]);
      pbVar11 = pbVar11 + 1;
      *(byte **)param_2 = pbVar11;
    }
    iVar4 = 0x1451;
LAB_1026d005:
    do {
      cVar1 = (char)uVar13;
      if ((byte)(cVar1 - 0x30U) < 10) {
        uVar6 = (int)cVar1 - 0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar1 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_1026d042;
        uVar6 = (int)cVar1 - 0x37;
      }
      if (9 < uVar6) goto LAB_1026d042;
      local_a[0] = *pbVar11;
      uVar13 = CONCAT31((int3)(uVar13 >> 8),local_a[0]);
      pbVar11 = pbVar11 + 1;
      *(byte **)param_2 = pbVar11;
    } while( true );
  }
LAB_1026d069:
  __crt_strtox::c_string_character_source<char>::unget(param_2,local_a[0]);
  do {
    piVar12 = local_10;
    if (piVar12 == local_1c) {
      return 2;
    }
    local_10 = (int *)((int)piVar12 + -1);
  } while (*(char *)((int)piVar12 + -1) == '\0');
  if (iVar4 < 0x1451) {
    if (-0x1451 < iVar4) {
      iVar7 = 1;
      if (local_5 != 0) {
        iVar7 = 4;
      }
      iVar4 = iVar4 + iVar7 * local_14;
      if (0x1450 < iVar4) goto LAB_1026d0db;
      if (-0x1451 < iVar4) {
        *param_3 = iVar4;
        param_3[1] = (int)piVar12 - (int)local_1c;
        return (uint)local_5;
      }
    }
    uVar13 = 8;
  }
  else {
LAB_1026d0db:
    uVar13 = 9;
  }
  return uVar13;
LAB_1026d042:
  if ((char)(uVar13 >> 8) == '-') {
    iVar4 = -iVar4;
  }
  if (local_6 == 0) {
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_2c);
    if (!bVar2) {
      return 7;
    }
    local_a[0] = **(byte **)param_2;
    *(byte **)param_2 = *(byte **)param_2 + 1;
  }
  goto LAB_1026d069;
}

