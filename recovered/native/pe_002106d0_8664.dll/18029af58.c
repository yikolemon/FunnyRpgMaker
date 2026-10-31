/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029af58 */

void FUN_18029af58(longlong param_1)

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
  
  local_18 = DAT_180402640 ^ (ulonglong)auStackY_c8;
  lVar5 = FUN_1802910d8();
  plVar1 = (longlong *)(lVar5 + 0x98);
  iVar4 = FUN_180291b20(param_1,(-(uint)(*(int *)(lVar5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                        local_98,0x40);
  iVar8 = 0;
  if (iVar4 != 0) {
    iVar4 = FUN_180280970(*(undefined8 *)(lVar5 + 0xa0),local_98);
    lVar7 = -1;
    if (iVar4 != 0) goto LAB_18029b0b2;
    iVar4 = FUN_180291b20(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar4 == 0) goto LAB_18029afbe;
    iVar4 = FUN_180280970(*plVar1,local_98);
    if (iVar4 == 0) {
      lVar9 = -1;
      *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x304;
      do {
        lVar9 = lVar9 + 1;
      } while (*(short *)(param_1 + lVar9 * 2) != 0);
LAB_18029b093:
      iVar4 = FUN_18029a580();
      if (iVar4 != 0) goto LAB_18029b235;
    }
    else if ((*(uint *)(lVar5 + 0xa8) & 2) == 0) {
      if ((*(int *)(lVar5 + 0xac) == 0) ||
         (iVar4 = FUN_1802a55c0(*plVar1,local_98,(longlong)*(int *)(lVar5 + 0xac)), iVar4 != 0)) {
        if (((*(byte *)(lVar5 + 0xa8) & 1) != 0) || (iVar4 = FUN_18029b538(param_1), iVar4 == 0))
        goto LAB_18029b0b2;
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
      goto LAB_18029b093;
    }
LAB_18029b0b2:
    if ((*(uint *)(lVar5 + 0xa8) & 0x300) == 0x300) goto LAB_18029b1ea;
    iVar4 = FUN_180291b20(param_1,(-(uint)(*(int *)(lVar5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                          local_98,0x40);
    if (iVar4 != 0) {
      iVar4 = FUN_180280970(*plVar1,local_98);
      if (iVar4 != 0) goto LAB_18029b1ea;
      uVar3 = *(uint *)(lVar5 + 0xa8);
      *(uint *)(lVar5 + 0xa8) = uVar3 | 0x200;
      if (*(int *)(lVar5 + 0xb0) == 0) {
        if (*(int *)(lVar5 + 0xac) != 0) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(short *)(*plVar1 + lVar9 * 2) != 0);
          if ((int)lVar9 == *(int *)(lVar5 + 0xac)) {
            iVar4 = FUN_18029b538(param_1);
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
              if (iVar8 == (int)lVar9) goto LAB_18029b1ea;
            }
            *(uint *)(lVar5 + 0xa8) = *(uint *)(lVar5 + 0xa8) | 0x100;
            if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_18029b1ea;
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(param_1 + lVar7 * 2) != 0);
            goto LAB_18029b1ca;
          }
        }
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_18029b1ea;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
      }
      else {
        *(uint *)(lVar5 + 0xa8) = uVar3 | 0x300;
        if (*(short *)(lVar5 + 0x2f0) != 0) goto LAB_18029b1ea;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(param_1 + lVar7 * 2) != 0);
      }
LAB_18029b1ca:
      iVar4 = FUN_18029a580();
      if (iVar4 != 0) {
LAB_18029b235:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_18029b1ea;
    }
  }
LAB_18029afbe:
  *(undefined4 *)(lVar5 + 0xa8) = 0;
LAB_18029b1ea:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStackY_c8);
}

