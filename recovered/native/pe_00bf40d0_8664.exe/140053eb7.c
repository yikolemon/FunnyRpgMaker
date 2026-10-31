/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140053eb7 */

int FUN_140053eb7(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStackY_128 [32];
  int local_f8;
  int local_f4;
  undefined8 local_f0 [19];
  char *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_128;
  lVar10 = *(longlong *)(param_1 + 0x98);
  FUN_140054181((undefined1 (*) [32])local_f0);
  local_f4 = FUN_14005418e((undefined1 (*) [32])local_f0,*(longlong **)(param_1 + 0xa0),lVar10,
                           *(longlong *)(param_1 + 0xe0));
  iVar5 = local_f4;
  if (local_f4 == 0) {
    uVar6 = FUN_1400545c0(param_1,local_f0,local_58,local_50);
    local_f4 = (int)uVar6;
    iVar5 = local_f4;
    if (-1 < param_2 && local_f4 == 0) {
      pauVar7 = FUN_14001c423(lVar10,0x48,&local_f4);
      *(undefined1 (**) [32])(param_1 + 0x1e8) = pauVar7;
      iVar5 = local_f4;
      if (local_f4 == 0) {
        if (local_48 == 0) {
          puVar11 = *(undefined8 **)(param_1 + 0xa0);
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined8 *)*pauVar7 = *puVar11;
            puVar11 = puVar11 + 1;
            pauVar7 = (undefined1 (*) [32])(*pauVar7 + 8);
          }
        }
        else {
          uVar4 = *(int *)(*(undefined8 **)(param_1 + 0xa0) + 1) - local_4c;
          if (uVar4 < local_48) {
            local_48 = uVar4;
          }
          pcVar8 = (char *)FUN_14001e961(lVar10,local_48,&local_f4);
          *(char **)(param_1 + 0x1e0) = pcVar8;
          iVar5 = local_f4;
          if (local_f4 != 0) goto LAB_14005413e;
          uVar9 = FUN_140054738(pcVar8,local_48,local_4c,param_1,&local_f8);
          local_f4 = (int)uVar9;
          iVar5 = local_f4;
          if (local_f4 != 0) goto LAB_14005413e;
          FUN_14001d02c(*(undefined8 **)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0),local_f8)
          ;
          local_4c = 0;
        }
        *(uint *)(param_1 + 0x1c0) = local_4c;
        uVar4 = *(uint *)(param_1 + 0x1a8);
        iVar5 = 3;
        if ((uVar4 != 0) && (uVar4 < 5 && *(uint *)(param_1 + 0x1a4) < 5)) {
          local_4c = *(int *)(*(longlong *)(param_1 + 0x1e8) + 8) - local_4c;
          if ((*(uint *)(param_1 + 0x1a0) <= local_4c) &&
             ((*(uint *)(param_1 + 0x1ac) < 0x20000000 &&
              (*(uint *)(param_1 + 0x1ac) * (*(uint *)(param_1 + 0x1a4) + uVar4) <=
               local_4c - *(uint *)(param_1 + 0x1a0))))) {
            if (*(int *)(param_1 + 0x1b0) != 0) {
              lVar10 = 0x70;
              uVar6 = 0;
              do {
                lVar3 = *(longlong *)(param_1 + 0x1b8);
                if (1000 < *(uint *)(lVar3 + lVar10)) {
                  *(undefined4 *)(lVar3 + lVar10) = 7;
                }
                if (1000 < *(uint *)(lVar3 + 4 + lVar10)) {
                  *(undefined4 *)(lVar3 + 4 + lVar10) = 1;
                }
                uVar4 = *(uint *)(lVar3 + 0x80 + lVar10);
                uVar2 = *(uint *)(lVar3 + 0x88 + lVar10);
                if ((((uVar4 != 0 && uVar2 == 0) || (4 < uVar2)) ||
                    (puVar1 = (uint *)(lVar3 + 0x84 + lVar10), local_4c < *puVar1)) ||
                   ((0x3fffffff < uVar4 || (local_4c - *puVar1 < uVar2 * uVar4))))
                goto LAB_14005413e;
                uVar6 = uVar6 + 1;
                lVar10 = lVar10 + 0xfc;
              } while (uVar6 < *(uint *)(param_1 + 0x1b0));
            }
            iVar5 = FUN_1400548f7(param_1);
          }
        }
      }
    }
  }
LAB_14005413e:
  local_f4 = iVar5;
  thunk_FUN_1400550dd((longlong)local_f0);
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStackY_128)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStackY_128);
  }
  return local_f4;
}

