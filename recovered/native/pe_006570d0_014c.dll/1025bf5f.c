/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025bf5f */

void * thunk_FUN_1025c961(void)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  char *pcVar7;
  short *psVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  int iStack_30;
  int iStack_2c;
  char cStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  void *pvStack_18;
  char *pcStack_10;
  int iStack_c;
  
  FUN_1025be8b(0);
  pcStack_10 = (char *)0x0;
  pcVar10 = (char *)0x164;
  pvStack_18 = (void *)0x0;
  iStack_c = 0;
  puVar4 = *(undefined4 **)(iStack_2c + 0x9c);
  do {
    pcVar11 = pcVar10;
    if (iStack_c == 1) {
      _Dst = (void *)FUN_10274170(pcVar10);
      pvStack_18 = (void *)0x0;
      if (_Dst == (void *)0x0) break;
      _memset(_Dst,0,(size_t)pcVar10);
      pcVar11 = (char *)0x164;
      pvStack_18 = _Dst;
      pcStack_10 = pcVar10;
    }
    puStack_1c = (undefined4 *)0x0;
    iVar6 = (int)pvStack_18 - (int)puVar4;
    puVar9 = puVar4;
    do {
      if (iStack_c == 1) {
        *(char **)(iVar6 + (int)puVar9) = (char *)((int)pvStack_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11
                             ,*puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      puStack_1c = (undefined4 *)((int)puStack_1c + 1);
      puVar9 = puVar9 + 1;
    } while (puStack_1c < 7);
    puVar9 = puVar4 + 7;
    uStack_20 = 0;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)pvStack_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11
                             ,*puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      uStack_20 = uStack_20 + 1;
      puVar9 = puVar9 + 1;
    } while (uStack_20 < 7);
    puVar9 = puVar4 + 0xe;
    uStack_20 = 0;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)pvStack_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11
                             ,*puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      uStack_20 = uStack_20 + 1;
      puVar9 = puVar9 + 1;
    } while (uStack_20 < 0xc);
    puVar9 = puVar4 + 0x1a;
    uStack_20 = 0;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)pvStack_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11
                             ,*puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      uStack_20 = uStack_20 + 1;
      puVar9 = puVar9 + 1;
    } while (uStack_20 < 0xc);
    puVar9 = puVar4 + 0x26;
    uStack_20 = 0;
    do {
      if (iStack_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)pvStack_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11
                             ,*puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      uStack_20 = uStack_20 + 1;
      puVar9 = puVar9 + 1;
    } while (uStack_20 < 2);
    if (iStack_c == 1) {
      *(char **)((int)pvStack_18 + 0xa0) = (char *)((int)pvStack_18 + (int)pcVar11);
      iVar6 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11,
                           puVar4[0x28]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    pcVar7 = (char *)puVar4[0x28];
    pcVar10 = pcVar7 + 1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcVar7 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
    if (iStack_c == 1) {
      *(char **)((int)pvStack_18 + 0xa4) = (char *)((int)pvStack_18 + (int)pcVar7);
      iVar6 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar7),(int)pcStack_10 - (int)pcVar7,
                           puVar4[0x29]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    pcVar11 = (char *)puVar4[0x29];
    pcVar10 = pcVar11 + 1;
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + (int)(pcVar7 + (1 - (int)pcVar10));
    if (iStack_c == 1) {
      *(char **)((int)pvStack_18 + 0xa8) = (char *)((int)pvStack_18 + (int)pcVar11);
      iVar6 = FUN_102733f0((char *)((int)pvStack_18 + (int)pcVar11),(int)pcStack_10 - (int)pcVar11,
                           puVar4[0x2a]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    pcVar10 = (char *)puVar4[0x2a];
    pcVar7 = pcVar10 + 1;
    do {
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + (int)(pcVar11 + (1 - (int)pcVar7));
    if (iStack_c == 1) {
      *(undefined4 *)((int)pvStack_18 + 0xac) = puVar4[0x2b];
      *(undefined4 *)((int)pvStack_18 + 0xb0) = 0;
    }
    uStack_20 = 0;
    puVar9 = puVar4 + 0x2d;
    puStack_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (iStack_c == 1) {
        iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)pvStack_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = puStack_1c;
        if (iVar6 != 0) goto LAB_1025d0b0;
      }
      psVar8 = (short *)*puVar9;
      psVar1 = psVar8 + 1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2;
      uStack_20 = uStack_20 + 1;
      puStack_1c = puVar9;
    } while (uStack_20 < 7);
    uStack_20 = 0;
    puVar9 = puVar4 + 0x34;
    puStack_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (iStack_c == 1) {
        iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)pvStack_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = puStack_1c;
        if (iVar6 != 0) goto LAB_1025d0b0;
      }
      psVar8 = (short *)*puVar9;
      psVar1 = psVar8 + 1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2;
      uStack_20 = uStack_20 + 1;
      puStack_1c = puVar9;
    } while (uStack_20 < 7);
    uStack_20 = 0;
    puVar9 = puVar4 + 0x3b;
    puStack_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (iStack_c == 1) {
        iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)pvStack_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = puStack_1c;
        if (iVar6 != 0) goto LAB_1025d0b0;
      }
      psVar8 = (short *)*puVar9;
      psVar1 = psVar8 + 1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2;
      uStack_20 = uStack_20 + 1;
      puStack_1c = puVar9;
    } while (uStack_20 < 0xc);
    uStack_20 = 0;
    puVar9 = puVar4 + 0x47;
    puStack_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (iStack_c == 1) {
        iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)pvStack_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = puStack_1c;
        if (iVar6 != 0) goto LAB_1025d0b0;
      }
      psVar8 = (short *)*puVar9;
      psVar1 = psVar8 + 1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2;
      uStack_20 = uStack_20 + 1;
      puStack_1c = puVar9;
    } while (uStack_20 < 0xc);
    uStack_20 = 0;
    puVar9 = puVar4 + 0x53;
    puStack_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (iStack_c == 1) {
        iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)pvStack_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = puStack_1c;
        if (iVar6 != 0) goto LAB_1025d0b0;
      }
      psVar8 = (short *)*puVar9;
      psVar1 = psVar8 + 1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2;
      uStack_20 = uStack_20 + 1;
      puStack_1c = puVar9;
    } while (uStack_20 < 2);
    for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
    }
    if (iStack_c == 1) {
      iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)pvStack_18 + 0x154) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,puVar4[0x55]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    psVar8 = (short *)puVar4[0x55];
    psVar1 = psVar8 + 1;
    do {
      sVar3 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    for (pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar10 & 1) != 0;
        pcVar10 = pcVar10 + 1) {
    }
    if (iStack_c == 1) {
      iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)pvStack_18 + 0x158) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,puVar4[0x56]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    psVar8 = (short *)puVar4[0x56];
    psVar1 = psVar8 + 1;
    do {
      sVar3 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    for (pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar10 & 1) != 0;
        pcVar10 = pcVar10 + 1) {
    }
    if (iStack_c == 1) {
      iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)pvStack_18 + 0x15c) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,puVar4[0x57]);
      if (iVar6 != 0) goto LAB_1025d0b0;
    }
    psVar8 = (short *)puVar4[0x57];
    psVar1 = psVar8 + 1;
    do {
      sVar3 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    for (pcVar10 = pcVar10 + ((int)psVar8 - (int)psVar1 >> 1) * 2 + 2; ((uint)pcVar10 & 1) != 0;
        pcVar10 = pcVar10 + 1) {
    }
    if (iStack_c == 1) {
      iVar6 = (int)pvStack_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)pvStack_18 + 0x160) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)pcStack_10 - (int)pcVar10) >> 1,puVar4[0x58]);
      if (iVar6 != 0) {
LAB_1025d0b0:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    psVar8 = (short *)puVar4[0x58];
    psVar1 = psVar8 + 1;
    do {
      sVar3 = *psVar8;
      psVar8 = psVar8 + 1;
    } while (sVar3 != 0);
    pcVar10 = pcVar10 + (((int)psVar8 - (int)psVar1 >> 1) + 1) * 2;
    iStack_c = iStack_c + 1;
  } while (iStack_c < 2);
  if (cStack_24 != '\0') {
    *(uint *)(iStack_30 + 0x350) = *(uint *)(iStack_30 + 0x350) & 0xfffffffd;
  }
  return pvStack_18;
}

