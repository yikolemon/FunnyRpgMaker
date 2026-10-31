/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279944 */

__acrt_stdio_stream_mode * __thiscall
FUN_10279944(undefined4 param_1,__acrt_stdio_stream_mode *param_2,char *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  undefined4 local_8;
  
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 4) = DAT_103a54ac;
  for (; cVar7 = *param_3, cVar7 == ' '; param_3 = param_3 + 1) {
  }
  if (cVar7 == 'a') {
    *(undefined4 *)param_2 = 0x109;
LAB_10279992:
    *(undefined4 *)(param_2 + 4) = 2;
  }
  else {
    if (cVar7 != 'r') {
      local_8 = param_1;
      if (cVar7 != 'w') goto LAB_10279b6e;
      *(undefined4 *)param_2 = 0x301;
      goto LAB_10279992;
    }
    *(undefined4 *)(param_2 + 4) = 1;
  }
  cVar7 = '\0';
  param_3 = param_3 + 1;
  local_8 = 0;
  uVar6 = 1;
LAB_102799ae:
  uVar2 = (undefined1)uVar6;
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    uVar6 = (uint)local_8._3_1_ << 8;
    goto LAB_10279aaf;
  }
  if (cVar1 < 'T') {
    if (cVar1 == 'S') {
      uVar6 = (uint)CONCAT11(local_8._3_1_,uVar2);
      if (cVar7 != '\0') goto LAB_10279a11;
      *(uint *)param_2 = *(uint *)param_2 | 0x20;
LAB_10279a2f:
      cVar7 = '\x01';
      local_8._0_3_ = CONCAT12(1,(undefined2)local_8);
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      goto LAB_10279a99;
    }
    if (cVar1 != ' ') {
      if (cVar1 != '+') {
        if (cVar1 == ',') {
          uVar6 = (uint)CONCAT11(1,uVar2);
          local_8 = CONCAT13(1,(undefined3)local_8);
        }
        else {
          if (cVar1 == 'D') {
            uVar2 = __acrt_stdio_parse_mode_D(param_2);
            goto LAB_10279a90;
          }
          if (cVar1 == 'N') {
            *(uint *)param_2 = *(uint *)param_2 | 0x80;
            uVar2 = 1;
            goto LAB_10279a96;
          }
          if (cVar1 != 'R') goto LAB_10279b6e;
          uVar6 = (uint)CONCAT11(local_8._3_1_,uVar2);
          if (cVar7 == '\0') {
            *(uint *)param_2 = *(uint *)param_2 | 0x10;
            goto LAB_10279a2f;
          }
        }
LAB_10279a11:
        uVar6 = uVar6 & 0xffffff00;
        goto LAB_10279a99;
      }
      uVar2 = __acrt_stdio_parse_mode_plus(param_2,(bool *)&local_8);
      goto LAB_10279a90;
    }
  }
  else {
    if (cVar1 == 'T') {
      uVar2 = __acrt_stdio_parse_mode_T(param_2);
    }
    else if (cVar1 == 'b') {
      uVar2 = FUN_10279760(param_2);
    }
    else if (cVar1 == 'c') {
      uVar2 = __acrt_stdio_parse_mode_c(param_2,(bool *)((int)&local_8 + 1));
    }
    else if (cVar1 == 'n') {
      uVar2 = __acrt_stdio_parse_mode_n(param_2,(bool *)((int)&local_8 + 1));
    }
    else {
      if (cVar1 == 't') {
        uVar2 = FUN_10279780(param_2);
        goto LAB_10279a90;
      }
      if (cVar1 != 'x') goto LAB_10279b6e;
      uVar2 = __acrt_stdio_parse_mode_x(param_2);
    }
LAB_10279a90:
    cVar7 = local_8._2_1_;
  }
LAB_10279a96:
  uVar6 = (uint)CONCAT11(local_8._3_1_,uVar2);
LAB_10279a99:
  param_3 = param_3 + ((char)uVar6 != '\0');
  if ((char)uVar6 == '\0') goto LAB_10279aaf;
  goto LAB_102799ae;
LAB_10279aaf:
  cVar7 = (char)(uVar6 >> 8);
  pcVar8 = param_3 + 1;
  if (cVar7 == '\0') {
    pcVar8 = param_3;
  }
  for (; *pcVar8 == ' '; pcVar8 = pcVar8 + 1) {
  }
  if (cVar7 == '\0') {
    cVar7 = *pcVar8;
  }
  else {
    iVar3 = _strncmp(pcVar8,"ccs",3);
    if (iVar3 != 0) goto LAB_10279b6e;
    for (pcVar8 = pcVar8 + 3; *pcVar8 == ' '; pcVar8 = pcVar8 + 1) {
    }
    if (*pcVar8 != '=') goto LAB_10279b6e;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 == ' ');
    iVar3 = 5;
    iVar4 = FUN_102859f0(pcVar8,"UTF-8",5);
    if (iVar4 == 0) {
      *(uint *)param_2 = *(uint *)param_2 | 0x40000;
    }
    else {
      iVar3 = 8;
      iVar4 = FUN_102859f0(pcVar8,"UTF-16LEUNICODE",8);
      if (iVar4 == 0) {
        *(uint *)param_2 = *(uint *)param_2 | 0x20000;
      }
      else {
        iVar3 = 7;
        iVar4 = FUN_102859f0(pcVar8,"UNICODE",7);
        if (iVar4 != 0) goto LAB_10279b6e;
        *(uint *)param_2 = *(uint *)param_2 | 0x10000;
      }
    }
    for (pcVar8 = pcVar8 + iVar3; cVar7 = *pcVar8, cVar7 == ' '; pcVar8 = pcVar8 + 1) {
    }
  }
  if (cVar7 == '\0') {
    param_2[8] = (__acrt_stdio_stream_mode)0x1;
    return param_2;
  }
LAB_10279b6e:
  puVar5 = (undefined4 *)FUN_10268ffd();
  *puVar5 = 0x16;
  FUN_10273ea8();
  return param_2;
}

