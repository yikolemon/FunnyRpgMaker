/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180297e3c */

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
  *(undefined4 *)(param_1 + 2) = DAT_1804218c0;
  sVar7 = *in_RDX;
  while (sVar7 == 0x20) {
    in_RDX = in_RDX + 1;
    sVar7 = *in_RDX;
  }
  if (sVar7 == 0x61) {
    param_1[0] = L'ĉ';
    param_1[1] = L'\0';
LAB_180297eb2:
    param_1[2] = L'\x02';
    param_1[3] = L'\0';
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto LAB_180298110;
      param_1[0] = L'́';
      param_1[1] = L'\0';
      goto LAB_180297eb2;
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
LAB_180297ed0:
  if (*pwVar13 == L'\0') goto LAB_180298022;
  wVar1 = *pwVar13;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_180298000;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_180297f81:
      bVar2 = true;
      bVar6 = true;
      goto LAB_18029800d;
    }
    if (wVar1 == L' ') goto LAB_18029800d;
    if (wVar1 == L'+') {
      if (!bVar5) {
        bVar5 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar6 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffc | 4;
          goto LAB_18029800d;
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
LAB_18029800b:
          bVar6 = true;
          goto LAB_18029800d;
        }
        if (wVar1 == L'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_180297f81;
          }
          goto LAB_180298000;
        }
        goto LAB_180298110;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar8 = *(uint *)param_1 | 0x40;
        goto LAB_180298009;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar8 = *(uint *)param_1 | 0x1000;
      goto LAB_180298009;
    }
  }
  else if (wVar1 == L'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x8000;
      goto LAB_180298009;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x800;
LAB_180297fe1:
      bVar3 = true;
      bVar6 = true;
      goto LAB_18029800d;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffff7ff;
      goto LAB_180297fe1;
    }
  }
  else if (wVar1 == L't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar8 = *(uint *)param_1 | 0x4000;
      goto LAB_180298009;
    }
  }
  else {
    if (wVar1 != L'x') goto LAB_180298110;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar8 = *(uint *)param_1 | 0x400;
LAB_180298009:
      *(uint *)param_1 = uVar8;
      goto LAB_18029800b;
    }
  }
LAB_180298000:
  bVar6 = false;
LAB_18029800d:
  pwVar13 = (wchar_t *)((longlong)pwVar13 + (ulonglong)(-(uint)bVar6 & 2));
  if (!bVar6) goto LAB_180298022;
  goto LAB_180297ed0;
LAB_180298022:
  pwVar11 = pwVar13 + 1;
  if (!bVar4) {
    pwVar11 = pwVar13;
  }
  for (; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
  }
  if (bVar4) {
    iVar9 = wcsncmp(pwVar11,L"ccs",3);
    if (iVar9 != 0) goto LAB_180298110;
    for (pwVar11 = pwVar11 + 3; *pwVar11 == L' '; pwVar11 = pwVar11 + 1) {
    }
    if (*pwVar11 != L'=') goto LAB_180298110;
    do {
      pwVar11 = pwVar11 + 1;
    } while (*pwVar11 == L' ');
    iVar9 = FUN_1802a55c0(pwVar11,L"UTF-8",5);
    if (iVar9 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_1802a55c0(pwVar11,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
        lVar12 = 0x10;
      }
      else {
        iVar9 = FUN_1802a55c0(pwVar11,L"UNICODE",7);
        if (iVar9 != 0) goto LAB_180298110;
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
LAB_180298110:
  puVar10 = (undefined4 *)FUN_18027e66c();
  *puVar10 = 0x16;
  FUN_180290a50();
  return param_1;
}

