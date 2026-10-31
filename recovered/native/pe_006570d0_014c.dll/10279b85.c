/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279b85 */

__acrt_stdio_stream_mode * __thiscall
FUN_10279b85(undefined4 param_1,__acrt_stdio_stream_mode *param_2,short *param_3)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int local_c;
  undefined4 local_8;
  
  *(undefined4 *)param_2 = 0;
  local_c = 2;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = DAT_103a54ac;
  sVar1 = *param_3;
  while (sVar1 == 0x20) {
    param_3 = param_3 + 1;
    sVar1 = *param_3;
  }
  if (sVar1 == 0x61) {
    *(undefined4 *)param_2 = 0x109;
LAB_10279bf1:
    *(undefined4 *)(param_2 + 4) = 2;
  }
  else {
    if (sVar1 != 0x72) {
      local_8 = param_1;
      if (sVar1 != 0x77) goto LAB_10279e00;
      *(undefined4 *)param_2 = 0x301;
      goto LAB_10279bf1;
    }
    *(undefined4 *)(param_2 + 4) = 1;
  }
  puVar8 = (ushort *)(param_3 + 1);
  cVar3 = '\0';
  uVar7 = 1;
  local_8 = 0;
LAB_10279c0a:
  uVar4 = (undefined1)uVar7;
  uVar2 = *puVar8;
  if (uVar2 == 0) {
    uVar7 = (uint)local_8._3_1_ << 8;
    goto LAB_10279d09;
  }
  if (uVar2 < 0x54) {
    if (uVar2 == 0x53) {
      uVar7 = (uint)CONCAT11(local_8._3_1_,uVar4);
      if (cVar3 != '\0') goto LAB_10279c6b;
      *(uint *)param_2 = *(uint *)param_2 | 0x20;
LAB_10279c88:
      cVar3 = '\x01';
      local_8._0_3_ = CONCAT12(1,(undefined2)local_8);
      uVar7 = CONCAT31((int3)(uVar7 >> 8),1);
      goto LAB_10279cf2;
    }
    if (uVar2 != 0x20) {
      if (uVar2 != 0x2b) {
        if (uVar2 == 0x2c) {
          uVar7 = (uint)CONCAT11(1,uVar4);
          local_8 = CONCAT13(1,(undefined3)local_8);
        }
        else {
          if (uVar2 == 0x44) {
            uVar4 = __acrt_stdio_parse_mode_D(param_2);
            goto LAB_10279ce9;
          }
          if (uVar2 == 0x4e) {
            *(uint *)param_2 = *(uint *)param_2 | 0x80;
            uVar4 = 1;
            goto LAB_10279cef;
          }
          if (uVar2 != 0x52) goto LAB_10279e00;
          uVar7 = (uint)CONCAT11(local_8._3_1_,uVar4);
          if (cVar3 == '\0') {
            *(uint *)param_2 = *(uint *)param_2 | 0x10;
            goto LAB_10279c88;
          }
        }
LAB_10279c6b:
        uVar7 = uVar7 & 0xffffff00;
        goto LAB_10279cf2;
      }
      uVar4 = __acrt_stdio_parse_mode_plus(param_2,(bool *)&local_8);
      goto LAB_10279ce9;
    }
  }
  else {
    if (uVar2 == 0x54) {
      uVar4 = __acrt_stdio_parse_mode_T(param_2);
    }
    else if (uVar2 == 0x62) {
      uVar4 = FUN_10279760(param_2);
    }
    else if (uVar2 == 99) {
      uVar4 = __acrt_stdio_parse_mode_c(param_2,(bool *)((int)&local_8 + 1));
    }
    else if (uVar2 == 0x6e) {
      uVar4 = __acrt_stdio_parse_mode_n(param_2,(bool *)((int)&local_8 + 1));
    }
    else {
      if (uVar2 != 0x74) {
        if (uVar2 == 0x78) {
          uVar4 = __acrt_stdio_parse_mode_x(param_2);
          goto LAB_10279ce9;
        }
        goto LAB_10279e00;
      }
      uVar4 = FUN_10279780(param_2);
    }
LAB_10279ce9:
    cVar3 = local_8._2_1_;
  }
LAB_10279cef:
  uVar7 = (uint)CONCAT11(local_8._3_1_,uVar4);
LAB_10279cf2:
  iVar5 = 0;
  if ((char)uVar7 != '\0') {
    iVar5 = local_c;
  }
  puVar8 = (ushort *)((int)puVar8 + iVar5);
  if ((char)uVar7 == '\0') goto LAB_10279d09;
  goto LAB_10279c0a;
LAB_10279d09:
  cVar3 = (char)(uVar7 >> 8);
  puVar9 = puVar8 + 1;
  if (cVar3 == '\0') {
    puVar9 = puVar8;
  }
  uVar2 = *puVar9;
  while (uVar2 == 0x20) {
    puVar9 = puVar9 + 1;
    uVar2 = *puVar9;
  }
  if (cVar3 == '\0') {
    uVar2 = *puVar9;
  }
  else {
    iVar5 = FUN_1027bdc0(puVar9,&DAT_103255ac,3);
    if (iVar5 != 0) goto LAB_10279e00;
    puVar9 = puVar9 + 3;
    uVar2 = *puVar9;
    while (uVar2 == 0x20) {
      puVar9 = puVar9 + 1;
      uVar2 = *puVar9;
    }
    if (uVar2 != 0x3d) goto LAB_10279e00;
    do {
      puVar9 = puVar9 + 1;
    } while (*puVar9 == 0x20);
    iVar5 = FUN_10285770(puVar9,L"UTF-8",5);
    if (iVar5 == 0) {
      *(uint *)param_2 = *(uint *)param_2 | 0x40000;
      iVar5 = 10;
    }
    else {
      iVar5 = FUN_10285770(puVar9,L"UTF-16LEUNICODE",8);
      if (iVar5 == 0) {
        *(uint *)param_2 = *(uint *)param_2 | 0x20000;
        iVar5 = 0x10;
      }
      else {
        iVar5 = FUN_10285770(puVar9,L"UNICODE",7);
        if (iVar5 != 0) goto LAB_10279e00;
        *(uint *)param_2 = *(uint *)param_2 | 0x10000;
        iVar5 = 0xe;
      }
    }
    puVar9 = (ushort *)((int)puVar9 + iVar5);
    uVar2 = *puVar9;
    while (uVar2 == 0x20) {
      puVar9 = puVar9 + 1;
      uVar2 = *puVar9;
    }
  }
  if (uVar2 == 0) {
    param_2[8] = (__acrt_stdio_stream_mode)0x1;
    return param_2;
  }
LAB_10279e00:
  puVar6 = (undefined4 *)FUN_10268ffd();
  *puVar6 = 0x16;
  FUN_10273ea8();
  return param_2;
}

