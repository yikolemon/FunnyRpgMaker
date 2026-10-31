/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b8208 */

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
  *(undefined4 *)(param_1 + 4) = DAT_140f3272c;
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
LAB_1401b8268:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_1401b84a6;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_1401b8268;
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
LAB_1401b827c:
  if (*pcVar12 == '\0') goto LAB_1401b83cb;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar1) goto LAB_1401b83ad;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_1401b832e:
      bVar1 = true;
      bVar4 = true;
      goto LAB_1401b83b9;
    }
    if (cVar6 == ' ') goto LAB_1401b83b9;
    if (cVar6 == '+') {
      if (!bVar2) {
        bVar2 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar4 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
          goto LAB_1401b83b9;
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
LAB_1401b83b7:
          bVar4 = true;
          goto LAB_1401b83b9;
        }
        if (cVar6 == 'R') {
          if (!bVar1) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_1401b832e;
          }
          goto LAB_1401b83ad;
        }
        goto LAB_1401b84a6;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar7 = *(uint *)param_1 | 0x40;
        goto LAB_1401b83b5;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_1401b83b5;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_1401b83b5;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_1401b838e:
      bVar3 = true;
      bVar4 = true;
      goto LAB_1401b83b9;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_1401b838e;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_1401b83b5;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_1401b84a6;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_1401b83b5:
      *(uint *)param_1 = uVar7;
      goto LAB_1401b83b7;
    }
  }
LAB_1401b83ad:
  bVar4 = false;
LAB_1401b83b9:
  pcVar12 = pcVar12 + bVar4;
  if (!bVar4) goto LAB_1401b83cb;
  goto LAB_1401b827c;
LAB_1401b83cb:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 != 0) goto LAB_1401b84a6;
    for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 != '=') goto LAB_1401b84a6;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 == ' ');
    lVar10 = 5;
    iVar8 = FUN_1401c2c40(pcVar11,"UTF-8",5);
    if (iVar8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVar10 = 8;
      iVar8 = FUN_1401c2c40(pcVar11,"UTF-16LEUNICODE",8);
      if (iVar8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVar10 = 7;
        iVar8 = FUN_1401c2c40(pcVar11,"UNICODE",7);
        if (iVar8 != 0) goto LAB_1401b84a6;
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
LAB_1401b84a6:
  puVar9 = (undefined4 *)FUN_14019e8cc();
  *puVar9 = 0x16;
  FUN_1401ae640();
  return param_1;
}

