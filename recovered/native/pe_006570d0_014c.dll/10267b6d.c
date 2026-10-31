/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267b6d */

uint FUN_10267b6d(int *param_1,
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  int *piVar12;
  int *piVar13;
  int local_14;
  byte local_b [4];
  byte local_7;
  char local_6;
  byte local_5;
  
  cVar3 = FUN_1026703a();
  if (cVar3 == '\0') {
    return 7;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = FUN_1026705b();
  while( true ) {
    local_b[0] = uVar4;
    iVar6 = FUN_1026379d(uVar4,8,param_1);
    if (iVar6 == 0) break;
    uVar4 = FUN_1026705b();
  }
  piVar12 = param_3 + 0xc2;
  *(bool *)piVar12 = local_b[0] == 0x2d;
  if ((local_b[0] == 0x2d) || (bVar5 = local_b[0], local_b[0] == 0x2b)) {
    bVar5 = FUN_1026705b();
    local_b[0] = bVar5;
  }
  if ((bVar5 == 0x49) || (bVar5 == 0x69)) {
    uVar8 = FUN_10268088(local_b,param_2,uVar2,uVar1);
    return uVar8;
  }
  if ((bVar5 == 0x4e) || (bVar5 == 0x6e)) {
    uVar8 = FUN_10268143(local_b,param_2,uVar2,uVar1);
    return uVar8;
  }
  local_5 = 0;
  if (bVar5 == 0x30) {
    cVar3 = FUN_1026705b();
    if ((cVar3 == 'x') || (cVar3 == 'X')) {
      local_5 = 1;
      bVar5 = FUN_1026705b();
      local_b[0] = bVar5;
    }
    else {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar3);
      bVar5 = local_b[0];
    }
  }
  piVar13 = param_3 + 2;
  local_14 = 0;
  local_6 = '\0';
  if (bVar5 == 0x30) {
    local_6 = '\x01';
    do {
      bVar5 = FUN_1026705b();
      local_b[0] = bVar5;
    } while (bVar5 == 0x30);
  }
  uVar8 = 9;
  if (local_5 != 0) {
    uVar8 = 0xf;
  }
  while( true ) {
    if ((byte)(bVar5 - 0x30) < 10) {
      uVar7 = (int)(char)bVar5 - 0x30;
    }
    else if ((byte)(bVar5 + 0x9f) < 0x1a) {
      uVar7 = (int)(char)bVar5 - 0x57;
    }
    else if ((byte)(bVar5 + 0xbf) < 0x1a) {
      uVar7 = (int)(char)bVar5 - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar8 < uVar7) break;
    local_6 = '\x01';
    if (piVar13 != piVar12) {
      *(char *)piVar13 = (char)uVar7;
      piVar13 = (int *)((int)piVar13 + 1);
    }
    local_14 = local_14 + 1;
    bVar5 = FUN_1026705b();
    local_b[0] = bVar5;
  }
  if (bVar5 == *(byte *)**(undefined4 **)(*param_1 + 0x88)) {
    cVar3 = FUN_1026705b();
    local_b[0] = cVar3;
    if ((piVar13 == param_3 + 2) && (cVar3 == '0')) {
      local_6 = '\x01';
      do {
        local_14 = local_14 + -1;
        cVar3 = FUN_1026705b();
        local_b[0] = cVar3;
      } while (cVar3 == '0');
    }
    while( true ) {
      if ((cVar3 < '0') || ('9' < cVar3)) {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          uVar7 = (int)cVar3 - 0x57;
        }
        else if ((byte)(cVar3 + 0xbfU) < 0x1a) {
          uVar7 = (int)cVar3 - 0x37;
        }
        else {
          uVar7 = 0xffffffff;
        }
      }
      else {
        uVar7 = (int)cVar3 - 0x30;
      }
      if (uVar8 < uVar7) break;
      local_6 = '\x01';
      if (piVar13 != piVar12) {
        *(char *)piVar13 = (char)uVar7;
        piVar13 = (int *)((int)piVar13 + 1);
      }
      cVar3 = FUN_1026705b();
      local_b[0] = cVar3;
    }
  }
  iVar6 = 0;
  if (local_6 == '\0') {
    cVar3 = FID_conflict_operator__();
    if (cVar3 == '\0') {
      return 7;
    }
    if (local_5 == 0) {
      return 7;
    }
    return 2;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  bVar5 = FUN_1026705b();
  if (bVar5 == 0x45) {
LAB_10267e15:
    bVar10 = local_5 ^ 1;
  }
  else if (bVar5 == 0x50) {
LAB_10267e10:
    bVar10 = local_5;
  }
  else {
    if (bVar5 == 0x65) goto LAB_10267e15;
    bVar10 = 0;
    if (bVar5 == 0x70) goto LAB_10267e10;
  }
  local_b[0] = bVar5;
  if (bVar10 != 0) {
    bVar5 = FUN_1026705b();
    local_7 = bVar5;
    if ((bVar5 == 0x2b) || (uVar11 = CONCAT11(bVar5,bVar5), bVar5 == 0x2d)) {
      local_b[0] = bVar5;
      bVar5 = FUN_1026705b();
      uVar11 = CONCAT11(bVar5,bVar5);
    }
    local_6 = '\0';
    local_b[0] = bVar5;
    if (bVar5 != 0x30) goto LAB_10267e72;
    local_6 = '\x01';
    local_b[0] = 0x30;
    do {
      local_b[0] = FUN_1026705b();
      uVar11 = CONCAT11(local_b[0],local_b[0]);
    } while (local_b[0] == 0x30);
    while( true ) {
      bVar5 = (byte)uVar11;
LAB_10267e72:
      cVar3 = (char)uVar11;
      if (((char)bVar5 < '0') || ('9' < (char)(uVar11 >> 8))) {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          uVar8 = (int)cVar3 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar3 + 0xbfU)) goto LAB_10267eca;
          uVar8 = (int)cVar3 - 0x37;
        }
      }
      else {
        uVar8 = (int)cVar3 - 0x30;
      }
      if (9 < uVar8) goto LAB_10267eca;
      local_6 = '\x01';
      iVar6 = iVar6 * 10 + uVar8;
      if (0x1450 < iVar6) break;
      local_b[0] = FUN_1026705b();
      uVar11 = CONCAT11(local_b[0],local_b[0]);
    }
    iVar6 = 0x1451;
LAB_10267eca:
    do {
      cVar3 = (char)uVar11;
      if ((byte)(cVar3 - 0x30U) < 10) {
        uVar8 = (int)cVar3 - 0x30;
      }
      else if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        uVar8 = (int)cVar3 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar3 + 0xbfU)) goto LAB_10267f0b;
        uVar8 = (int)cVar3 - 0x37;
      }
      if (9 < uVar8) goto LAB_10267f0b;
      local_b[0] = FUN_1026705b();
      uVar11 = (ushort)local_b[0];
    } while( true );
  }
LAB_10267f33:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,local_b[0]);
  do {
    piVar12 = piVar13;
    if (piVar12 == param_3 + 2) {
      return 2;
    }
    piVar13 = (int *)((int)piVar12 + -1);
  } while (*(char *)((int)piVar12 + -1) == '\0');
  if (iVar6 < 0x1451) {
    if (-0x1451 < iVar6) {
      iVar9 = 1;
      if (local_5 != 0) {
        iVar9 = 4;
      }
      iVar6 = iVar6 + iVar9 * local_14;
      if (0x1450 < iVar6) goto LAB_10267fa9;
      if (-0x1451 < iVar6) {
        *param_3 = iVar6;
        param_3[1] = (int)piVar12 - (int)(param_3 + 2);
        return (uint)local_5;
      }
    }
    uVar8 = 8;
  }
  else {
LAB_10267fa9:
    uVar8 = 9;
  }
  return uVar8;
LAB_10267f0b:
  if (local_7 == 0x2d) {
    iVar6 = -iVar6;
  }
  if (local_6 == '\0') {
    cVar3 = FID_conflict_operator__();
    if (cVar3 == '\0') {
      return 7;
    }
    local_b[0] = FUN_1026705b();
  }
  goto LAB_10267f33;
}

