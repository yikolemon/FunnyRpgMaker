/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012aa88 */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

wchar_t * __cdecl __acrt_stdio_parse_mode<wchar_t>(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  short *in_RDX;
  longlong lVar12;
  wchar_t *pwVar13;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  *(undefined4 *)(param_1 + 2) = DAT_140354b58;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_14012aafe:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_14012ad5c;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_14012aafe;
    }
    param_1[2] = L'\x01';
    param_1[3] = L'\0';
  }
  pwVar13 = in_RDX + 1;
  bVar6 = true;
  bVar2 = false;
  bVar5 = false;
  lVar12 = 10;
  bVar3 = bVar2;
  bVar4 = bVar2;
LAB_14012ab1c:
  if (*pwVar13 == L'\0') goto LAB_14012ac6e;
  wVar1 = *pwVar13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_14012ac4c;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_14012abcd:
      bVar2 = true;
      bVar6 = true;
      goto LAB_14012ac59;
    }
    if (wVar1 == L' ') goto LAB_14012ac59;
    if (wVar1 == L'+') {
      if (!bVar5) {
        bVar5 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar6 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_14012ac59;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar4 = true;
    }
    else {
      if (wVar1 != L'D') {
        if (wVar1 == L'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_14012ac57:
          bVar6 = true;
          goto LAB_14012ac59;
        }
        if (wVar1 == L'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_14012abcd;
          }
          goto LAB_14012ac4c;
        }
        goto LAB_14012ad5c;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar8 = *(uint *)param_1 | 0x40;
        goto LAB_14012ac55;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_14012ac55;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_14012ac55;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_14012ac2d:
      bVar3 = true;
      bVar6 = true;
      goto LAB_14012ac59;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_14012ac2d;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_14012ac55;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_14012ad5c;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_14012ac55:
      *(uint *)param_1 = uVar8;
      goto LAB_14012ac57;
    }
  }
LAB_14012ac4c:
  bVar6 = false;
LAB_14012ac59:
  pwVar13 = (wchar_t *)((longlong)pwVar13 + (ulonglong)(-(uint)bVar6 & 2));
  if (!bVar6) goto LAB_14012ac6e;
  goto LAB_14012ab1c;
LAB_14012ac6e:
  pwVar11 = pwVar13 + 1;
  if (!bVar4) {
    pwVar11 = pwVar13;
  }
  for (; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
  }
  if (bVar4) {
    iVar9 = wcsncmp(pwVar11,L"ccs",3);
    if (iVar9 != 0) goto LAB_14012ad5c;
    for (pwVar11 = pwVar11 + 3; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
    }
    if (*pwVar11 != L'=') goto LAB_14012ad5c;
    do {
      pwVar11 = pwVar11 + 1;
    } while (*pwVar11 == L' ');
    iVar9 = FUN_140132620(pwVar11,L"UTF-8",5);
    if (iVar9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_140132620(pwVar11,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar12 = 0x10;
      }
      else {
        iVar9 = FUN_140132620(pwVar11,L"UNICODE",7);
        if (iVar9 != 0) goto LAB_14012ad5c;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
        lVar12 = 0xe;
      }
    }
    for (pwVar11 = (wchar_t *)((longlong)pwVar11 + lVar12); wVar1 = *pwVar11, wVar1 == L' ';
        pwVar11 = pwVar11 + 1) {
    }
  }
  else {
    wVar1 = *pwVar11;
  }
  if (wVar1 == L'\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    return param_1;
  }
LAB_14012ad5c:
  puVar10 = (undefined4 *)FUN_140113dd4();
  *puVar10 = 0x16;
  FUN_140120ee8();
  return param_1;
}

