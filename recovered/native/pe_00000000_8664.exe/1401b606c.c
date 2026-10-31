/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b606c */

void FUN_1401b606c(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_1401aecc8();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar4 = FUN_1401af6c0(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                        local_98,0x40);
  iVar8 = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_1401a0500(*(undefined8 *)(lVar5 + 0xa0),local_98);
    lVar7 = -1;
    if (iVar4 != 0) goto LAB_1401b61c6;
    iVar4 = FUN_1401af6c0(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar4 == 0) goto LAB_1401b60d2;
    iVar4 = FUN_1401a0500(*plVar1,local_98);
    if (iVar4 == 0) {
      lVar9 = -1;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(param_1 + lVar9 * 2) != 0);
LAB_1401b61a7:
      iVar4 = FUN_1401b5630();
      if (iVar4 != 0) goto LAB_1401b6349;
    }
    else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
      if ((*(int *)(lVar5 + 0xac) == 0) ||
         (iVar4 = FUN_1401c2430(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar4 != 0)) {
        if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar4 = FUN_1401b664c(param_1), iVar4 == 0))
        goto LAB_1401b61c6;
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 1;
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(short *)(param_1 + lVar9 * 2) != 0);
      }
      else {
        *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 2;
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(short *)(param_1 + lVar9 * 2) != 0);
      }
      goto LAB_1401b61a7;
    }
LAB_1401b61c6:
    if ((*(uint *)(lVar5 + 0xa8) & 0x300) == 0x300) goto LAB_1401b62fe;
    iVar4 = FUN_1401af6c0(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar4 != 0) {
      iVar4 = FUN_1401a0500(*plVar1,local_98);
      if (iVar4 != 0) goto LAB_1401b62fe;
      uVar3 = *(uint *)(lVar5 + 0xa8);
      *(uint *)(lVar5 + 0xa8) = uVar3 | 0x200;
      if (*(int *)(lVar5 + 0xb0) == 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
          if ((int)lVar9 == *(int *)(lVar5 + 0xac)) {
            iVar4 = FUN_1401b664c(param_1);
            if (iVar4 == 0) {
              psVar6 = (short *)*plVar1;
              iVar4 = 0;
              if (psVar6 != (short *)0x0) {
                while( true ) {
                  iVar8 = iVar4;
                  sVar2 = *psVar6;
                  psVar6 = psVar6 + 1;
                  if ((0x19 < (ushort)(sVar2 - 0x41U)) && (0x19 < (ushort)(sVar2 - 0x61U))) break;
                  iVar4 = iVar8 + 1;
                }
              }
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
              if (iVar8 == (int)lVar9) goto LAB_1401b62fe;
            }
            *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
            if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1401b62fe;
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
            goto LAB_1401b62de;
          }
        }
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1401b62fe;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
      }
      else {
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_1401b62fe;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
      }
LAB_1401b62de:
      iVar4 = FUN_1401b5630();
      if (iVar4 != 0) {
LAB_1401b6349:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_1401b62fe;
    }
  }
LAB_1401b60d2:
  *(undefined4 *)(lVar5 + 0xa8) = 0;
LAB_1401b62fe:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStackY_c8);
}

