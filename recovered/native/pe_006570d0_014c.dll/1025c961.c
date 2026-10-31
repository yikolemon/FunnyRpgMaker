/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c961 */

void * FUN_1025c961(void)

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
  int local_30;
  int local_2c;
  char local_24;
  uint local_20;
  undefined4 *local_1c;
  void *local_18;
  char *local_10;
  int local_c;
  
  FUN_1025be8b(0);
  local_10 = (char *)0x0;
  pcVar10 = (char *)0x164;
  local_18 = (void *)0x0;
  local_c = 0;
  puVar4 = *(undefined4 **)(local_2c + 0x9c);
  do {
    pcVar11 = pcVar10;
    if (local_c == 1) {
      _Dst = (void *)FUN_10274170(pcVar10);
      local_18 = (void *)0x0;
      if (_Dst == (void *)0x0) break;
      _memset(_Dst,0,(size_t)pcVar10);
      pcVar11 = (char *)0x164;
      local_18 = _Dst;
      local_10 = pcVar10;
    }
    local_1c = (undefined4 *)0x0;
    iVar6 = (int)local_18 - (int)puVar4;
    puVar9 = puVar4;
    do {
      if (local_c == 1) {
        *(char **)(iVar6 + (int)puVar9) = (char *)((int)local_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
                             *puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      local_1c = (undefined4 *)((int)local_1c + 1);
      puVar9 = puVar9 + 1;
    } while (local_1c < 7);
    puVar9 = puVar4 + 7;
    local_20 = 0;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)local_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
                             *puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      local_20 = local_20 + 1;
      puVar9 = puVar9 + 1;
    } while (local_20 < 7);
    puVar9 = puVar4 + 0xe;
    local_20 = 0;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)local_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
                             *puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      local_20 = local_20 + 1;
      puVar9 = puVar9 + 1;
    } while (local_20 < 0xc);
    puVar9 = puVar4 + 0x1a;
    local_20 = 0;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)local_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
                             *puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      local_20 = local_20 + 1;
      puVar9 = puVar9 + 1;
    } while (local_20 < 0xc);
    puVar9 = puVar4 + 0x26;
    local_20 = 0;
    do {
      if (local_c == 1) {
        *(char **)((int)puVar9 + iVar6) = (char *)((int)local_18 + (int)pcVar11);
        iVar5 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
                             *puVar9);
        if (iVar5 != 0) goto LAB_1025d0b0;
      }
      pcVar7 = (char *)*puVar9;
      pcVar10 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar10));
      local_20 = local_20 + 1;
      puVar9 = puVar9 + 1;
    } while (local_20 < 2);
    if (local_c == 1) {
      *(char **)((int)local_18 + 0xa0) = (char *)((int)local_18 + (int)pcVar11);
      iVar6 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
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
    if (local_c == 1) {
      *(char **)((int)local_18 + 0xa4) = (char *)((int)local_18 + (int)pcVar7);
      iVar6 = FUN_102733f0((char *)((int)local_18 + (int)pcVar7),(int)local_10 - (int)pcVar7,
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
    if (local_c == 1) {
      *(char **)((int)local_18 + 0xa8) = (char *)((int)local_18 + (int)pcVar11);
      iVar6 = FUN_102733f0((char *)((int)local_18 + (int)pcVar11),(int)local_10 - (int)pcVar11,
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
    if (local_c == 1) {
      *(undefined4 *)((int)local_18 + 0xac) = puVar4[0x2b];
      *(undefined4 *)((int)local_18 + 0xb0) = 0;
    }
    local_20 = 0;
    puVar9 = puVar4 + 0x2d;
    local_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (local_c == 1) {
        iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)local_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = local_1c;
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
      local_20 = local_20 + 1;
      local_1c = puVar9;
    } while (local_20 < 7);
    local_20 = 0;
    puVar9 = puVar4 + 0x34;
    local_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (local_c == 1) {
        iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)local_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = local_1c;
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
      local_20 = local_20 + 1;
      local_1c = puVar9;
    } while (local_20 < 7);
    local_20 = 0;
    puVar9 = puVar4 + 0x3b;
    local_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (local_c == 1) {
        iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)local_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = local_1c;
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
      local_20 = local_20 + 1;
      local_1c = puVar9;
    } while (local_20 < 0xc);
    local_20 = 0;
    puVar9 = puVar4 + 0x47;
    local_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (local_c == 1) {
        iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)local_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = local_1c;
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
      local_20 = local_20 + 1;
      local_1c = puVar9;
    } while (local_20 < 0xc);
    local_20 = 0;
    puVar9 = puVar4 + 0x53;
    local_1c = puVar9;
    do {
      for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
      }
      if (local_c == 1) {
        iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
        *(int *)((int)puVar9 + ((int)local_18 - (int)puVar4)) = iVar6;
        iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,*puVar9);
        puVar9 = local_1c;
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
      local_20 = local_20 + 1;
      local_1c = puVar9;
    } while (local_20 < 2);
    for (; ((uint)pcVar10 & 1) != 0; pcVar10 = pcVar10 + 1) {
    }
    if (local_c == 1) {
      iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)local_18 + 0x154) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,puVar4[0x55]);
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
    if (local_c == 1) {
      iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)local_18 + 0x158) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,puVar4[0x56]);
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
    if (local_c == 1) {
      iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)local_18 + 0x15c) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,puVar4[0x57]);
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
    if (local_c == 1) {
      iVar6 = (int)local_18 + ((uint)pcVar10 & 0xfffffffe);
      *(int *)((int)local_18 + 0x160) = iVar6;
      iVar6 = FUN_102749e0(iVar6,(uint)((int)local_10 - (int)pcVar10) >> 1,puVar4[0x58]);
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
    local_c = local_c + 1;
  } while (local_c < 2);
  if (local_24 != '\0') {
    *(uint *)(local_30 + 0x350) = *(uint *)(local_30 + 0x350) & 0xfffffffd;
  }
  return local_18;
}

