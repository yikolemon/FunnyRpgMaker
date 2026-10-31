/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a799c */

void FUN_1400a799c(wchar_t *param_1)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStackY_c8 [32];
  WCHAR local_98 [64];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_1400a1528();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar4 = FUN_1400a1e0c((ushort *)param_1,
                        (-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,local_98,0x40);
  iVar9 = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_140096a70(*(WCHAR **)(lVar5 + 0xa0),local_98);
    lVar8 = -1;
    if (iVar4 != 0) goto LAB_1400a7af6;
    iVar4 = FUN_1400a1e0c((ushort *)param_1,
                          (-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_98,0x40
                         );
    if (iVar4 == 0) goto LAB_1400a7a02;
    iVar4 = FUN_140096a70((WCHAR *)*plVar1,local_98);
    if (iVar4 == 0) {
      lVar10 = -1;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
      do {
        lVar10 = lVar10 + 1;
      } while (param_1[lVar10] != L'\0');
LAB_1400a7ad7:
      iVar4 = FUN_1400a6f60((short *)(lVar5 + 0x2f0),0x55,(longlong)param_1,lVar10 + 1);
      if (iVar4 != 0) goto LAB_1400a7c79;
    }
    else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
      if ((*(int *)(lVar5 + 0xac) == 0) ||
         (uVar6 = FUN_1400b1e30((WCHAR *)*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)),
         (int)uVar6 != 0)) {
        if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar4 = FUN_1400a7f7c(param_1), iVar4 == 0))
        goto LAB_1400a7af6;
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (param_1[lVar10] != L'\0');
      }
      else {
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (param_1[lVar10] != L'\0');
      }
      goto LAB_1400a7ad7;
    }
LAB_1400a7af6:
    if ((*(uint *)(lVar5 + 0xa8) & 0x300) == 0x300) goto LAB_1400a7c2e;
    iVar4 = FUN_1400a1e0c((ushort *)param_1,
                          (-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_98,0x40
                         );
    if (iVar4 != 0) {
      iVar4 = FUN_140096a70((WCHAR *)*plVar1,local_98);
      if (iVar4 != 0) goto LAB_1400a7c2e;
      uVar3 = *(uint *)(lVar5 + 0xa8);
      *(uint *)(lVar5 + 0xa8) = uVar3 | 0x200;
      if (*(int *)(lVar5 + 0xb0) == 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (*(short *)(*plVar1 + lVar10 * 2) != 0);
          if ((int)lVar10 == *(int *)(lVar5 + 0xac)) {
            iVar4 = FUN_1400a7f7c(param_1);
            if (iVar4 == 0) {
              psVar7 = (short *)*plVar1;
              iVar4 = 0;
              if (psVar7 != (short *)0x0) {
                while( true ) {
                  iVar9 = iVar4;
                  sVar2 = *psVar7;
                  psVar7 = psVar7 + 1;
                  if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
                  iVar4 = iVar9 + 1;
                }
              }
              lVar10 = -1;
              do {
                lVar10 = lVar10 + 1;
              } while (*(short *)(*plVar1 + lVar10 * 2) != 0);
              if (iVar9 == (int)lVar10) goto LAB_1400a7c2e;
            }
            *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
            if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1400a7c2e;
            do {
              lVar8 = lVar8 + 1;
            } while (param_1[lVar8] != L'\0');
            goto LAB_1400a7c0e;
          }
        }
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1400a7c2e;
        do {
          lVar8 = lVar8 + 1;
        } while (param_1[lVar8] != L'\0');
      }
      else {
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1400a7c2e;
        do {
          lVar8 = lVar8 + 1;
        } while (param_1[lVar8] != L'\0');
      }
LAB_1400a7c0e:
      iVar4 = FUN_1400a6f60((short *)(lVar5 + 0x2f0),0x55,(longlong)param_1,lVar8 + 1);
      if (iVar4 != 0) {
LAB_1400a7c79:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1400a7c2e;
    }
  }
LAB_1400a7a02:
  *(undefined4 *)(lVar5 + 0xa8) = 0;
LAB_1400a7c2e:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_c8);
}

