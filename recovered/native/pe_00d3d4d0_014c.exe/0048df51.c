/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048df51 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048df51(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  UINT UVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  bool bVar16;
  undefined4 uVar17;
  int local_2d0;
  UINT in_stack_fffffd38;
  UINT UVar18;
  ushort local_2bc [86];
  uint local_210 [64];
  ushort local_110 [132];
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  iVar12 = param_2;
  FUN_004961ad();
  iVar7 = FUN_0048d98d(param_3,(short *)local_110,0x83,(short *)local_2bc,0x55,
                       (UINT *)&stack0xfffffd38);
  if (iVar7 != 0) {
    iVar7 = param_2 + 2;
    local_2d0 = 4;
    puVar8 = local_110;
    puVar14 = *(ushort **)(param_1 + iVar7 * 0x10);
    do {
      bVar16 = *puVar8 < *puVar14;
      if (*puVar8 != *puVar14) {
LAB_0048e019:
        uVar13 = -(uint)bVar16 | 1;
        goto LAB_0048e01e;
      }
      if (*puVar8 == 0) break;
      uVar1 = puVar8[1];
      bVar16 = uVar1 < puVar14[1];
      if (uVar1 != puVar14[1]) goto LAB_0048e019;
      puVar8 = puVar8 + 2;
      puVar14 = puVar14 + 2;
    } while (uVar1 != 0);
    uVar13 = 0;
LAB_0048e01e:
    if (uVar13 != 0) {
      puVar8 = local_110;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
      } while (uVar1 != 0);
      iVar10 = ((int)puVar8 - (int)(local_110 + 1) >> 1) + 1;
      iVar15 = iVar12;
      puVar9 = FUN_00495f50(iVar10 * 2 + 4);
      if (puVar9 != (undefined4 *)0x0) {
        puVar2 = *(undefined2 **)(param_1 + iVar7 * 0x10);
        puVar8 = local_110;
        iVar10 = FUN_00496780((short *)(puVar9 + 1),iVar10,(int)puVar8);
        if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(param_1 + iVar7 * 0x10) = puVar9 + 1;
        if ((local_110[0] == 0x43) && (local_110[1] == 0)) {
          psVar11 = (short *)0x0;
        }
        else {
          puVar8 = local_2bc;
          psVar11 = FUN_0048d83d((short *)puVar8);
        }
        *(short **)(param_1 + 0xa0 + iVar12 * 4) = psVar11;
        if (iVar12 == 2) {
          iVar7 = 0;
          *(UINT *)(param_1 + 8) = in_stack_fffffd38;
          UVar18 = *(UINT *)(puVar8 + 0x12);
          uVar17 = *(undefined4 *)(puVar8 + 0x10);
          do {
            if (*(int *)(param_1 + 8) == *(int *)(puVar8 + iVar7 * 4)) {
              iVar15 = iVar12;
              if (iVar7 != 0) {
                uVar3 = *(undefined4 *)(puVar8 + iVar7 * 4 + 2);
                *(undefined4 *)puVar8 = *(undefined4 *)(puVar8 + iVar7 * 4);
                *(undefined4 *)(puVar8 + 2) = uVar3;
                *(undefined4 *)(puVar8 + iVar7 * 4) = uVar17;
                *(UINT *)(puVar8 + iVar7 * 4 + 2) = UVar18;
              }
              break;
            }
            uVar3 = *(undefined4 *)(puVar8 + iVar7 * 4);
            UVar4 = *(UINT *)(puVar8 + iVar7 * 4 + 2);
            *(undefined4 *)(puVar8 + iVar7 * 4) = uVar17;
            *(UINT *)(puVar8 + iVar7 * 4 + 2) = UVar18;
            iVar7 = iVar7 + 1;
            iVar12 = iVar15;
            UVar18 = UVar4;
            uVar17 = uVar3;
          } while (iVar7 < 5);
          if (iVar7 == 5) {
            iVar12 = FUN_00497350((int *)0x0,1,
                                  "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                  ,0x7f,(LPWORD)local_210,*(uint *)(param_1 + 8),1);
            if (iVar12 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                puVar14 = (ushort *)((int)local_210 + uVar13 * 2);
                *puVar14 = *puVar14 & 0x1ff;
                uVar13 = uVar13 + 1;
              } while (uVar13 < 0x7f);
              local_2d0 = 0x48e1d4;
              iVar12 = FUN_00485bd0(local_210,(uint *)PTR_DAT_0051adf0,0xfe);
              uVar13 = (uint)(iVar12 == 0);
            }
            *(uint *)((int)puVar8 + local_2d0) = uVar13;
            *(undefined4 *)puVar8 = *(undefined4 *)(param_1 + 8);
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(puVar8 + 2);
          iVar12 = iVar15;
        }
        else if (iVar12 == 1) {
          *(UINT *)(param_1 + 0x10) = in_stack_fffffd38;
        }
        else if (iVar12 == 5) {
          *(UINT *)(param_1 + 0x14) = in_stack_fffffd38;
        }
        pcVar5 = (code *)(&PTR_FUN_004f90e8)[iVar12 * 3];
        (*(code *)PTR_guard_check_icall_00508898)();
        iVar7 = (*pcVar5)();
        if (iVar7 == 0) {
          if (puVar2 != &DAT_0051af48) {
            piVar6 = *(int **)(param_1 + 0x28 + iVar12 * 0x10);
            LOCK();
            iVar7 = *piVar6 + -1;
            *piVar6 = iVar7;
            UNLOCK();
            if (iVar7 == 0) {
              FUN_00495f00(*(LPVOID *)(param_1 + 0x28 + iVar12 * 0x10));
              FUN_00495f00(*(LPVOID *)(param_1 + 0x24 + iVar12 * 0x10));
              FUN_00495f00(*(LPVOID *)(param_1 + 0xa0 + iVar12 * 4));
              *(undefined4 *)(param_1 + (iVar12 + 2) * 0x10) = 0;
              *(undefined4 *)(param_1 + 0xa0 + iVar12 * 4) = 0;
            }
          }
          *puVar9 = 1;
          *(undefined4 **)(param_1 + 0x28 + iVar12 * 0x10) = puVar9;
        }
        else {
          *(undefined2 **)(param_1 + (iVar12 + 2) * 0x10) = puVar2;
          uVar17 = 0x48e24f;
          FUN_00495f00(*(LPVOID *)(param_1 + 0xa0 + iVar12 * 4));
          *(undefined4 *)(param_1 + 0xa0 + iVar12 * 4) = uVar17;
          uVar17 = 0x48e268;
          FUN_00495f00(puVar9);
          *(undefined4 *)(param_1 + 8) = uVar17;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

