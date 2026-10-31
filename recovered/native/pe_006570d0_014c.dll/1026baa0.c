/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026baa0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1026baa0(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  ushort *puVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined4 local_2c8;
  undefined4 local_2c4;
  wchar_t *local_2c0;
  undefined1 local_2bc [172];
  ushort local_210 [128];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar8 = FUN_102743cd();
  puVar9 = (undefined4 *)(iVar8 + 0x278);
  iVar10 = FUN_1026b4dc(param_3,local_110,0x83,local_2bc,0x55,&local_2c8);
  if (iVar10 != 0) {
    iVar10 = param_2 + 2;
    puVar11 = local_110;
    puVar15 = *(ushort **)(param_1 + iVar10 * 0x10);
    do {
      local_2c0 = (wchar_t *)0x0;
      bVar17 = *puVar11 < *puVar15;
      if (*puVar11 != *puVar15) {
LAB_1026bb68:
        uVar12 = -(uint)bVar17 | 1;
        goto LAB_1026bb6d;
      }
      if (*puVar11 == 0) break;
      uVar1 = puVar11[1];
      bVar17 = uVar1 < puVar15[1];
      local_2c4 = CONCAT22(uVar1,(undefined2)local_2c4);
      if (uVar1 != puVar15[1]) goto LAB_1026bb68;
      puVar11 = puVar11 + 2;
      puVar15 = puVar15 + 2;
    } while (uVar1 != 0);
    uVar12 = 0;
LAB_1026bb6d:
    if (uVar12 != 0) {
      puVar11 = local_110;
      do {
        uVar1 = *puVar11;
        puVar11 = puVar11 + 1;
      } while (uVar1 != 0);
      local_2c4 = ((int)puVar11 - (int)(local_110 + 1) >> 1) + 1;
      puVar13 = (undefined4 *)FUN_10274170(local_2c4 * 2 + 4);
      if (puVar13 != (undefined4 *)0x0) {
        puVar2 = *(undefined2 **)(param_1 + iVar10 * 0x10);
        uVar3 = *(undefined4 *)(param_1 + 0xa0 + param_2 * 4);
        uVar4 = *(undefined4 *)(param_1 + 8);
        iVar14 = FUN_102749e0(puVar13 + 1,local_2c4,local_110);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson(local_2c0,local_2c0,local_2c0,(uint)local_2c0,(uintptr_t)local_2c0);
        }
        *(undefined4 **)(param_1 + iVar10 * 0x10) = puVar13 + 1;
        if ((local_110[0] != 0x43) || (pwVar16 = local_2c0, local_110[1] != 0)) {
          pwVar16 = (wchar_t *)FUN_1026b3ee(local_2bc);
        }
        *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = pwVar16;
        if (param_2 == 2) {
          *(undefined4 *)(param_1 + 8) = local_2c8;
          pwVar16 = local_2c0;
          local_2c8 = *(undefined4 *)(iVar8 + 0x29c);
          local_2c4 = *(int *)(iVar8 + 0x298);
          do {
            if (*(int *)(param_1 + 8) == puVar9[(int)pwVar16 * 2]) {
              if (pwVar16 != (wchar_t *)0x0) {
                uVar5 = *(undefined4 *)(iVar8 + 0x27c + (int)pwVar16 * 8);
                *puVar9 = puVar9[(int)pwVar16 * 2];
                *(undefined4 *)(iVar8 + 0x27c) = uVar5;
                puVar9[(int)pwVar16 * 2] = local_2c4;
                *(undefined4 *)(iVar8 + 0x27c + (int)pwVar16 * 8) = local_2c8;
              }
              break;
            }
            iVar10 = puVar9[(int)pwVar16 * 2];
            uVar5 = *(undefined4 *)(iVar8 + 0x27c + (int)pwVar16 * 8);
            puVar9[(int)pwVar16 * 2] = local_2c4;
            *(undefined4 *)(iVar8 + 0x27c + (int)pwVar16 * 8) = local_2c8;
            pwVar16 = (wchar_t *)((int)pwVar16 + 1);
            local_2c8 = uVar5;
            local_2c4 = iVar10;
          } while ((int)pwVar16 < 5);
          if (pwVar16 == (wchar_t *)0x5) {
            iVar10 = FUN_10276080(local_2c0,1,&DAT_10324dc0,0x7f,local_210,
                                  *(undefined4 *)(param_1 + 8),1);
            pwVar16 = local_2c0;
            if (iVar10 != 0) {
              do {
                local_210[(int)pwVar16] = local_210[(int)pwVar16] & 0x1ff;
                pwVar16 = (wchar_t *)((int)pwVar16 + 1);
              } while (pwVar16 < (wchar_t *)0x7f);
              iVar10 = FUN_102595e0(local_210,PTR_DAT_1039b378,0xfe);
              pwVar16 = (wchar_t *)(uint)(iVar10 == 0);
            }
            *(wchar_t **)(iVar8 + 0x27c) = pwVar16;
            *puVar9 = *(undefined4 *)(param_1 + 8);
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar8 + 0x27c);
        }
        else if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x10) = local_2c8;
        }
        else if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x14) = local_2c8;
        }
        pcVar6 = (code *)(&PTR_LAB_10324e48)[param_2 * 3];
        (*(code *)PTR_guard_check_icall_1035d810)(param_1);
        iVar8 = (*pcVar6)();
        if (iVar8 == 0) {
          if (puVar2 != &DAT_1039b4c8) {
            piVar7 = *(int **)(param_1 + 0x28 + param_2 * 0x10);
            LOCK();
            iVar8 = *piVar7 + -1;
            *piVar7 = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              FUN_10274120(*(undefined4 *)(param_1 + 0x28 + param_2 * 0x10));
              FUN_10274120(*(undefined4 *)(param_1 + 0x24 + param_2 * 0x10));
              FUN_10274120(*(undefined4 *)(param_1 + 0xa0 + param_2 * 4));
              *(wchar_t **)(param_1 + (param_2 + 2) * 0x10) = local_2c0;
              *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = local_2c0;
            }
          }
          *puVar13 = 1;
          *(undefined4 **)(param_1 + 0x28 + param_2 * 0x10) = puVar13;
        }
        else {
          *(undefined2 **)(param_1 + (param_2 + 2) * 0x10) = puVar2;
          FUN_10274120(*(undefined4 *)(param_1 + 0xa0 + param_2 * 4));
          *(undefined4 *)(param_1 + 0xa0 + param_2 * 4) = uVar3;
          FUN_10274120(puVar13);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

