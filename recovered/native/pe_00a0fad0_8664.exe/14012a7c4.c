/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012a7c4 */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *in_RDX;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(undefined4 *)(param_1 + 4) = DAT_140354b58;
  cVar6 = *in_RDX;
  while (cVar6 == ' ') {
    in_RDX = in_RDX + 1;
    cVar6 = *in_RDX;
  }
  if (cVar6 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_14012a824:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_14012aa62;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_14012a824;
    }
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pcVar12 = in_RDX + 1;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = false;
  bVar4 = true;
LAB_14012a838:
  if (*pcVar12 == '\0') goto LAB_14012a987;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar1) goto LAB_14012a969;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_14012a8ea:
      bVar1 = true;
      bVar4 = true;
      goto LAB_14012a975;
    }
    if (cVar6 == ' ') goto LAB_14012a975;
    if (cVar6 == '+') {
      if (!bVar2) {
        bVar2 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar4 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
          goto LAB_14012a975;
        }
      }
    }
    else if (cVar6 == ',') {
      bVar5 = true;
    }
    else {
      if (cVar6 != 'D') {
        if (cVar6 == 'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_14012a973:
          bVar4 = true;
          goto LAB_14012a975;
        }
        if (cVar6 == 'R') {
          if (!bVar1) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_14012a8ea;
          }
          goto LAB_14012a969;
        }
        goto LAB_14012aa62;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar7 = *(uint *)param_1 | 0x40;
        goto LAB_14012a971;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_14012a971;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_14012a971;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_14012a94a:
      bVar3 = true;
      bVar4 = true;
      goto LAB_14012a975;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_14012a94a;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_14012a971;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_14012aa62;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_14012a971:
      *(uint *)param_1 = uVar7;
      goto LAB_14012a973;
    }
  }
LAB_14012a969:
  bVar4 = false;
LAB_14012a975:
  pcVar12 = pcVar12 + bVar4;
  if (!bVar4) goto LAB_14012a987;
  goto LAB_14012a838;
LAB_14012a987:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 != 0) goto LAB_14012aa62;
    for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 != '=') goto LAB_14012aa62;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 == ' ');
    lVar10 = 5;
    iVar8 = FUN_140133250(pcVar11,"UTF-8",5);
    if (iVar8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVar10 = 8;
      iVar8 = FUN_140133250(pcVar11,"UTF-16LEUNICODE",8);
      if (iVar8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVar10 = 7;
        iVar8 = FUN_140133250(pcVar11,"UNICODE",7);
        if (iVar8 != 0) goto LAB_14012aa62;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (pcVar11 = pcVar11 + lVar10; cVar6 = *pcVar11, cVar6 == ' '; pcVar11 = pcVar11 + 1) {
    }
  }
  else {
    cVar6 = *pcVar11;
  }
  if (cVar6 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_14012aa62:
  puVar9 = (undefined4 *)FUN_140113dd4();
  *puVar9 = 0x16;
  FUN_140120ee8();
  return param_1;
}

