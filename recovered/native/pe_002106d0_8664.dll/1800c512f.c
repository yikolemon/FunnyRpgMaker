/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c512f */

void FUN_1800c512f(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  LPCVOID lpBaseAddress;
  SIZE_T nSize;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  LPVOID lpBuffer;
  BOOL BVar11;
  HMODULE pHVar12;
  HANDLE hProcess;
  ulonglong *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  ulonglong *puStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  LPVOID pvStack_c8;
  longlong *plStack_c0;
  SIZE_T SStack_b8;
  ulonglong *puStack_b0;
  ulonglong *puStack_a8;
  ulonglong *puStack_a0;
  ulonglong *puStack_98;
  longlong lStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  
  if ((DAT_180417a10 < 0x30257) && (DAT_180417a10 < 0x30000)) {
    FUN_1800c5af5();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  pHVar12 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_1800c9a2b(&puStack_a8,pHVar12);
  FUN_1800c9b62(&puStack_108,&puStack_a8);
  FUN_1800010ec(&puStack_a8);
  puStack_a8 = (ulonglong *)0x0;
  puStack_a0 = (ulonglong *)0x0;
  puStack_98 = (ulonglong *)0x0;
  plStack_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  for (puVar15 = puStack_108; puVar15 != puStack_100; puVar15 = puVar15 + 3) {
    if ((*(char *)(puVar15 + 2) == '\x01') && (*(char *)((longlong)puVar15 + 0x11) == '\x01')) {
      uStack_68 = puVar15[1];
      uStack_70 = thunk_FUN_180239630();
      pvStack_c8 = (LPVOID)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_1800c594e(&pvStack_c8,uStack_70);
      lpBuffer = pvStack_c8;
      SStack_b8 = 0;
      lpBaseAddress = (LPCVOID)*puVar15;
      nSize = puVar15[1];
      hProcess = GetCurrentProcess();
      BVar11 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,&SStack_b8);
      if ((BVar11 != 0) && (SStack_b8 == puVar15[1])) {
        if (puStack_a0 == puStack_98) {
          FUN_180064b72(&puStack_a8,puStack_a0,puVar15);
        }
        else {
          puStack_a0[2] = puVar15[2];
          uVar8 = *(undefined4 *)((longlong)puVar15 + 4);
          uVar9 = *(undefined4 *)(puVar15 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar15 + 0xc);
          *(undefined4 *)puStack_a0 = *(undefined4 *)puVar15;
          *(undefined4 *)((longlong)puStack_a0 + 4) = uVar8;
          *(undefined4 *)(puStack_a0 + 1) = uVar9;
          *(undefined4 *)((longlong)puStack_a0 + 0xc) = uVar10;
          puStack_a0 = puStack_a0 + 3;
        }
        FUN_18009dc8a(&plStack_e8,&pvStack_c8);
      }
      plVar14 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
    }
  }
  puStack_b0 = puStack_a0;
  if (puStack_a8 != puStack_a0) {
    uStack_70 = DAT_180417a18;
    lVar17 = ((longlong)puStack_a0 - (longlong)puStack_a8 >> 3) * -0x5555555555555555;
    puVar3 = puStack_a8 + 1;
    puVar13 = puStack_a8;
    do {
      puStack_f0 = puVar13;
      uVar19 = *puStack_f0;
      uVar16 = puStack_f0[1] + uVar19;
      uVar4 = DAT_180417a18;
      uVar5 = uStack_70;
      if (uVar19 < uVar16) {
LAB_1800c5512:
        puVar13 = puVar3;
        plVar14 = plStack_e8;
        lVar18 = lVar17;
        do {
          uVar4 = puVar13[-1];
          if ((uVar4 <= uVar19) && (uVar19 + 0x50 <= uVar4 + *puVar13)) {
            if (*plVar14 != 0) {
              lVar20 = *plVar14 + (uVar19 - uVar4);
              uVar4 = *(ulonglong *)(lVar20 + 8);
              puVar13 = puVar3;
              plVar14 = plStack_e8;
              lVar18 = lVar17;
              goto code_r0x0001800c5579;
            }
            break;
          }
          plVar14 = plVar14 + 2;
          puVar13 = puVar13 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        goto LAB_1800c5542;
      }
LAB_1800c5774:
      uStack_70 = uVar5;
      DAT_180417a18 = uVar4;
      puVar13 = puStack_f0 + 3;
    } while (puStack_f0 + 3 != puStack_a0);
  }
  FUN_180042932(&plStack_e8);
  FUN_180004cea(&puStack_a8);
  FUN_180004cea(&puStack_108);
  return;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5579:
    uVar5 = puVar13[-1];
    if ((uVar5 <= uVar4) && (uVar4 + 0x50 <= *puVar13 + uVar5)) {
      if (lVar20 == (uVar4 - uVar5) + *plVar14) {
        uStack_68 = *(ulonglong *)(lVar20 + 0x10);
        plVar14 = plStack_e8;
        lVar18 = lVar17;
        puVar13 = puVar3;
        goto code_r0x0001800c55c2;
      }
      break;
    }
  }
  goto LAB_1800c5542;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c55c2:
    uVar5 = puVar13[-1];
    if ((uVar5 <= uStack_68) && (uStack_68 + 0x50 <= *puVar13 + uVar5)) {
      if (*plVar14 != 0) {
        lStack_88 = *plVar14 + (uStack_68 - uVar5);
        uVar5 = *(ulonglong *)(lStack_88 + 0x10);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = plStack_e8;
        goto code_r0x0001800c5618;
      }
      break;
    }
  }
  goto LAB_1800c5542;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5618:
    uVar6 = puVar13[-1];
    if ((uVar6 <= uVar5) && (uVar5 + 0x50 <= *puVar13 + uVar6)) {
      if (lStack_88 == (uVar5 - uVar6) + *plVar14) {
        uVar6 = *(ulonglong *)(lVar20 + 0x18);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = plStack_e8;
        goto code_r0x0001800c5670;
      }
      break;
    }
  }
  goto LAB_1800c5542;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5670:
    uVar7 = puVar13[-1];
    if ((uVar7 <= uVar6) && (uVar6 + 0x50 <= *puVar13 + uVar7)) {
      if (*plVar14 != 0) {
        lStack_78 = *plVar14 + (uVar6 - uVar7);
        uStack_80 = *(ulonglong *)(lStack_78 + 0x18);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = plStack_e8;
        goto code_r0x0001800c56cb;
      }
      break;
    }
  }
  goto LAB_1800c5542;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c56cb:
    uVar7 = puVar13[-1];
    if ((uVar7 <= uStack_80) && (uStack_80 + 0x50 <= *puVar13 + uVar7)) {
      if ((((lStack_78 == (uStack_80 - uVar7) + *plVar14) &&
           ((((uVar4 == *(ulonglong *)(lStack_88 + 8) && (uStack_68 == uVar5)) &&
             (uVar4 == *(ulonglong *)(lStack_78 + 8))) &&
            ((uStack_68 == *(ulonglong *)(lStack_78 + 0x10) &&
             (uVar6 == *(ulonglong *)(lStack_88 + 0x18))))))) && (uVar19 != 0)) &&
         (uVar4 = uVar19, uVar5 = uVar19, uVar6 == uStack_80)) goto LAB_1800c5774;
      break;
    }
  }
LAB_1800c5542:
  uVar4 = DAT_180417a18;
  uVar5 = uStack_70;
  if ((uStack_70 != 0) || (uVar19 = uVar19 + 8, uVar16 <= uVar19)) goto LAB_1800c5774;
  goto LAB_1800c5512;
}

