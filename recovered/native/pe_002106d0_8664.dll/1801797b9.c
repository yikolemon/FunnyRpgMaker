/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801797b9 */

longlong FUN_1801797b9(longlong param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  ulonglong uVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  
  lVar1 = *(longlong *)(param_2 + 2);
  if (lVar1 == 0) {
    iVar3 = FUN_180179cf2(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = *param_2;
    iVar4 = param_2[1];
    iVar5 = FUN_180178f1f(4,iVar3,iVar4,0);
    if (iVar5 == 0) {
      pcVar17 = "too large";
      goto LAB_180179c1f;
    }
    iVar3 = iVar3 * iVar4;
    lVar19 = (longlong)(iVar3 * 4);
    lVar10 = FUN_18012be7d(lVar19);
    *(longlong *)(param_2 + 2) = lVar10;
    lVar11 = FUN_18012be7d(lVar19);
    *(longlong *)(param_2 + 4) = lVar11;
    lVar20 = (longlong)iVar3;
    lVar12 = FUN_18012be7d(lVar20);
    *(longlong *)(param_2 + 6) = lVar12;
    pcVar17 = "outofmem";
    if (((lVar10 == 0) || (lVar11 == 0)) || (lVar12 == 0)) goto LAB_180179c1f;
    FUN_1802a89a0(lVar10,0,lVar19);
    FUN_1802a89a0(lVar11,0,lVar19);
    FUN_1802a89a0(lVar12,0,lVar20);
  }
  else {
    iVar3 = *param_2;
    iVar4 = param_2[1];
    lVar12 = lVar1;
    if (0 < iVar4 * iVar3 && (param_2[0xc] & 0x18U) == 8) {
      uVar14 = 0;
      do {
        if (*(char *)(*(longlong *)(param_2 + 6) + uVar14) != '\0') {
          *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar14 * 4) =
               *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
        }
        uVar14 = uVar14 + 1;
      } while ((uint)(iVar4 * iVar3) != uVar14);
      lVar12 = *(longlong *)(param_2 + 2);
      iVar3 = *param_2;
      iVar4 = param_2[1];
    }
    FUN_1802a82f0(*(undefined8 *)(param_2 + 4),lVar12,(longlong)(iVar4 * iVar3 * 4));
    lVar12 = *(longlong *)(param_2 + 6);
    lVar20 = (longlong)param_2[1] * (longlong)*param_2;
  }
  FUN_1802a89a0(lVar12,0,lVar20);
  pcVar17 = "unknown code";
LAB_18017986c:
  pcVar8 = *(char **)(param_1 + 0xc0);
  if (*(char **)(param_1 + 200) <= pcVar8) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179c1f;
    FUN_180176673(param_1);
    pcVar8 = *(char **)(param_1 + 0xc0);
  }
  pcVar15 = pcVar8 + 1;
  *(char **)(param_1 + 0xc0) = pcVar15;
  cVar13 = *pcVar8;
  if (cVar13 == '!') {
    if (*(char **)(param_1 + 200) <= pcVar15) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1801799ed;
      FUN_180176673(param_1);
      pcVar15 = *(char **)(param_1 + 0xc0);
    }
    pcVar8 = pcVar15 + 1;
    *(char **)(param_1 + 0xc0) = pcVar8;
    if (*pcVar15 != -7) goto LAB_1801799ed;
    if (pcVar8 < *(char **)(param_1 + 200)) {
LAB_180179900:
      *(char **)(param_1 + 0xc0) = pcVar8 + 1;
      cVar13 = *pcVar8;
      if (cVar13 == '\x04') {
        if (pcVar8 + 1 < *(char **)(param_1 + 200)) {
          *(char **)(param_1 + 0xc0) = pcVar8 + 2;
          bVar2 = pcVar8[1];
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          bVar2 = 0;
        }
        else {
          FUN_180176673(param_1);
          pbVar9 = *(byte **)(param_1 + 0xc0);
          *(byte **)(param_1 + 0xc0) = pbVar9 + 1;
          bVar2 = *pbVar9;
        }
        param_2[0xc] = (uint)bVar2;
        iVar3 = FUN_18017918c(param_1);
        param_2[0x221a] = iVar3 * 10;
        if (-1 < (longlong)param_2[0xb]) {
          *(undefined1 *)((longlong)param_2 + (longlong)param_2[0xb] * 4 + 0x37) = 0xff;
        }
        if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
          FUN_180177488(param_1,1);
          param_2[0xb] = -1;
          goto LAB_1801799ed;
        }
        pbVar9 = *(byte **)(param_1 + 0xc0);
        if (pbVar9 < *(byte **)(param_1 + 200)) {
LAB_1801799cb:
          *(byte **)(param_1 + 0xc0) = pbVar9 + 1;
          bVar2 = *pbVar9;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            FUN_180176673(param_1);
            pbVar9 = *(byte **)(param_1 + 0xc0);
            goto LAB_1801799cb;
          }
          bVar2 = 0;
        }
        param_2[0xb] = (uint)bVar2;
        *(undefined1 *)((longlong)param_2 + (ulonglong)bVar2 * 4 + 0x37) = 0;
LAB_1801799ed:
        do {
          pcVar8 = *(char **)(param_1 + 0xc0);
          if (*(char **)(param_1 + 200) <= pcVar8) {
            if (*(int *)(param_1 + 0x30) == 0) goto LAB_18017986c;
            FUN_180176673(param_1);
            pcVar8 = *(char **)(param_1 + 0xc0);
          }
          *(char **)(param_1 + 0xc0) = pcVar8 + 1;
          if (*pcVar8 == '\0') goto LAB_18017986c;
          FUN_180177488(param_1);
        } while( true );
      }
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar8 = *(char **)(param_1 + 0xc0);
        goto LAB_180179900;
      }
      cVar13 = '\0';
    }
    FUN_180177488(param_1,cVar13);
    goto LAB_18017986c;
  }
  if (cVar13 == ';') {
    return param_1;
  }
  if (cVar13 != ',') goto LAB_180179c1f;
  iVar3 = FUN_18017918c(param_1);
  iVar4 = FUN_18017918c(param_1);
  iVar5 = FUN_18017918c(param_1);
  iVar6 = FUN_18017918c(param_1);
  pcVar17 = "bad Image Descriptor";
  if ((*param_2 < iVar5 + iVar3) || (param_2[1] < iVar6 + iVar4)) goto LAB_180179c1f;
  iVar16 = *param_2 * 4;
  param_2[0x2219] = iVar16;
  param_2[0x2213] = iVar3 << 2;
  param_2[0x2214] = iVar4 * iVar16;
  param_2[0x2215] = (iVar5 + iVar3) * 4;
  iVar6 = (iVar6 + iVar4) * iVar16;
  param_2[0x2216] = iVar6;
  param_2[0x2217] = iVar3 << 2;
  if (iVar5 != 0) {
    iVar6 = iVar4 * iVar16;
  }
  param_2[0x2218] = iVar6;
  pbVar9 = *(byte **)(param_1 + 0xc0);
  if (pbVar9 < *(byte **)(param_1 + 200)) {
LAB_180179afa:
    *(byte **)(param_1 + 0xc0) = pbVar9 + 1;
    bVar2 = *pbVar9;
    param_2[0x2212] = (uint)bVar2;
    iVar16 = param_2[0x2219] * 8;
    if ((bVar2 & 0x40) == 0) {
      iVar16 = param_2[0x2219];
    }
    uVar7 = (int)((uint)bVar2 << 0x19) >> 0x1f & 3;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pbVar9 = *(byte **)(param_1 + 0xc0);
      goto LAB_180179afa;
    }
    param_2[0x2212] = 0;
    uVar7 = 0;
    bVar2 = 0;
  }
  param_2[0x2211] = iVar16;
  param_2[0x2210] = uVar7;
  if (bVar2 < 0x80) {
    if ((*(byte *)(param_2 + 8) & 0x80) == 0) {
      pcVar17 = "missing color table";
LAB_180179c1f:
      FUN_1801765d0(pcVar17);
      return 0;
    }
    piVar18 = param_2 + 0xd;
  }
  else {
    iVar3 = -1;
    if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
      iVar3 = param_2[0xb];
    }
    piVar18 = param_2 + 0x10d;
    FUN_180179fb0(param_1,piVar18,2 << (bVar2 & 7),iVar3);
  }
  *(int **)(param_2 + 0x220e) = piVar18;
  lVar12 = FUN_18017a0a8(param_1,param_2);
  if (lVar12 == 0) {
    return 0;
  }
  if (lVar1 == 0) {
    iVar3 = param_2[1];
    iVar4 = *param_2;
    if (0 < iVar3 * iVar4 && 0 < param_2[9]) {
      uVar14 = 0;
      do {
        if (*(char *)(*(longlong *)(param_2 + 6) + uVar14) == '\0') {
          *(undefined1 *)((longlong)param_2 + (longlong)param_2[9] * 4 + 0x37) = 0xff;
          *(int *)(*(longlong *)(param_2 + 2) + uVar14 * 4) = param_2[(longlong)param_2[9] + 0xd];
        }
        uVar14 = uVar14 + 1;
      } while ((uint)(iVar3 * iVar4) != uVar14);
      return lVar12;
    }
    return lVar12;
  }
  return lVar12;
}

