/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5af5 */

void FUN_1800c5af5(void)

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
  undefined8 *local_108;
  undefined8 *local_100;
  ulonglong *local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  LPVOID local_c8;
  longlong *plStack_c0;
  SIZE_T local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  ulonglong *puStack_a0;
  ulonglong *local_98;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  pHVar12 = GetModuleHandleW((LPCWSTR)0x0);
  FUN_1800c9a2b(&local_a8,pHVar12);
  FUN_1800c9b62(&local_108,&local_a8);
  FUN_1800010ec(&local_a8);
  local_a8 = (ulonglong *)0x0;
  puStack_a0 = (ulonglong *)0x0;
  local_98 = (ulonglong *)0x0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  for (puVar15 = local_108; puVar15 != local_100; puVar15 = puVar15 + 3) {
    if ((*(char *)(puVar15 + 2) == '\x01') && (*(char *)((longlong)puVar15 + 0x11) == '\x01')) {
      local_68 = puVar15[1];
      local_70 = thunk_FUN_180239630();
      local_c8 = (LPVOID)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_1800c594e(&local_c8,local_70);
      lpBuffer = local_c8;
      local_b8 = 0;
      lpBaseAddress = (LPCVOID)*puVar15;
      nSize = puVar15[1];
      hProcess = GetCurrentProcess();
      BVar11 = ReadProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,&local_b8);
      if ((BVar11 != 0) && (local_b8 == puVar15[1])) {
        if (puStack_a0 == local_98) {
          FUN_180064b72(&local_a8,puStack_a0,puVar15);
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
        FUN_18009dc8a(&local_e8,&local_c8);
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
  local_b0 = puStack_a0;
  if (local_a8 != puStack_a0) {
    local_70 = DAT_180417a18;
    lVar17 = ((longlong)puStack_a0 - (longlong)local_a8 >> 3) * -0x5555555555555555;
    puVar3 = local_a8 + 1;
    puVar13 = local_a8;
    do {
      local_f0 = puVar13;
      uVar19 = *local_f0;
      uVar16 = local_f0[1] + uVar19;
      uVar4 = DAT_180417a18;
      uVar5 = local_70;
      if (uVar19 < uVar16) {
LAB_1800c5ccf:
        puVar13 = puVar3;
        plVar14 = local_e8;
        lVar18 = lVar17;
        do {
          uVar4 = puVar13[-1];
          if ((uVar4 <= uVar19) && (uVar19 + 0x60 <= uVar4 + *puVar13)) {
            if (*plVar14 != 0) {
              lVar20 = *plVar14 + (uVar19 - uVar4);
              uVar4 = *(ulonglong *)(lVar20 + 8);
              puVar13 = puVar3;
              plVar14 = local_e8;
              lVar18 = lVar17;
              goto code_r0x0001800c5d36;
            }
            break;
          }
          plVar14 = plVar14 + 2;
          puVar13 = puVar13 + 3;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        goto LAB_1800c5cff;
      }
LAB_1800c5f31:
      local_70 = uVar5;
      DAT_180417a18 = uVar4;
      puVar13 = local_f0 + 3;
    } while (local_f0 + 3 != puStack_a0);
  }
  FUN_180042932(&local_e8);
  FUN_180004cea(&local_a8);
  FUN_180004cea(&local_108);
  return;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5d36:
    uVar5 = puVar13[-1];
    if ((uVar5 <= uVar4) && (uVar4 + 0x60 <= *puVar13 + uVar5)) {
      if (lVar20 == (uVar4 - uVar5) + *plVar14) {
        local_68 = *(ulonglong *)(lVar20 + 0x10);
        plVar14 = local_e8;
        lVar18 = lVar17;
        puVar13 = puVar3;
        goto code_r0x0001800c5d7f;
      }
      break;
    }
  }
  goto LAB_1800c5cff;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5d7f:
    uVar5 = puVar13[-1];
    if ((uVar5 <= local_68) && (local_68 + 0x60 <= *puVar13 + uVar5)) {
      if (*plVar14 != 0) {
        local_88 = *plVar14 + (local_68 - uVar5);
        uVar5 = *(ulonglong *)(local_88 + 0x10);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = local_e8;
        goto code_r0x0001800c5dd5;
      }
      break;
    }
  }
  goto LAB_1800c5cff;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5dd5:
    uVar6 = puVar13[-1];
    if ((uVar6 <= uVar5) && (uVar5 + 0x60 <= *puVar13 + uVar6)) {
      if (local_88 == (uVar5 - uVar6) + *plVar14) {
        uVar6 = *(ulonglong *)(lVar20 + 0x18);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = local_e8;
        goto code_r0x0001800c5e2d;
      }
      break;
    }
  }
  goto LAB_1800c5cff;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5e2d:
    uVar7 = puVar13[-1];
    if ((uVar7 <= uVar6) && (uVar6 + 0x60 <= *puVar13 + uVar7)) {
      if (*plVar14 != 0) {
        local_78 = *plVar14 + (uVar6 - uVar7);
        local_80 = *(ulonglong *)(local_78 + 0x18);
        lVar18 = lVar17;
        puVar13 = puVar3;
        plVar14 = local_e8;
        goto code_r0x0001800c5e88;
      }
      break;
    }
  }
  goto LAB_1800c5cff;
  while( true ) {
    plVar14 = plVar14 + 2;
    puVar13 = puVar13 + 3;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) break;
code_r0x0001800c5e88:
    uVar7 = puVar13[-1];
    if ((uVar7 <= local_80) && (local_80 + 0x60 <= *puVar13 + uVar7)) {
      if ((((local_78 == (local_80 - uVar7) + *plVar14) &&
           ((((uVar4 == *(ulonglong *)(local_88 + 8) && (local_68 == uVar5)) &&
             (uVar4 == *(ulonglong *)(local_78 + 8))) &&
            ((local_68 == *(ulonglong *)(local_78 + 0x10) &&
             (uVar6 == *(ulonglong *)(local_88 + 0x18))))))) && (uVar19 != 0)) &&
         (uVar4 = uVar19, uVar5 = uVar19, uVar6 == local_80)) goto LAB_1800c5f31;
      break;
    }
  }
LAB_1800c5cff:
  uVar4 = DAT_180417a18;
  uVar5 = local_70;
  if ((local_70 != 0) || (uVar19 = uVar19 + 8, uVar16 <= uVar19)) goto LAB_1800c5f31;
  goto LAB_1800c5ccf;
}

