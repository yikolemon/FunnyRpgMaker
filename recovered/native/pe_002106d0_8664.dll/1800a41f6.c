/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a41f6 */

short FUN_1800a41f6(longlong param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  code *pcVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  sVar5 = -1;
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    if (param_2 == -1) {
      sVar5 = 0;
    }
    else {
      lVar12 = **(longlong **)(param_1 + 0x40);
      iVar1 = **(int **)(param_1 + 0x58);
      sVar5 = param_2;
      if (lVar12 == 0 || (longlong)iVar1 < 1) {
        lVar3 = **(longlong **)(param_1 + 0x18);
        uVar10 = (lVar12 + (longlong)iVar1 * 2) - lVar3 >> 1;
        if (lVar12 == 0) {
          uVar10 = 0;
        }
        lVar12 = 0x40;
        if (0x1f < uVar10) {
          if (uVar10 < 0x3fffffff) {
            lVar12 = uVar10 * 4;
          }
          else {
            lVar12 = 0xfffffffe;
            if (0x7ffffffe < uVar10) {
              return -1;
            }
          }
        }
        lVar8 = FUN_1800013e0(lVar12);
        lVar11 = uVar10 * 2;
        FUN_1802a82f0(lVar8,lVar3,lVar11);
        *(ulonglong *)(param_1 + 0x68) = lVar8 + uVar10 * 2 + 2;
        **(longlong **)(param_1 + 0x20) = lVar8;
        **(longlong **)(param_1 + 0x40) = lVar8 + uVar10 * 2;
        **(undefined4 **)(param_1 + 0x58) = (int)(lVar12 + uVar10 * -2 >> 1);
        if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
          lVar12 = *(longlong *)(param_1 + 0x68);
          lVar9 = lVar8 + (**(longlong **)(param_1 + 0x38) - lVar3);
          **(longlong **)(param_1 + 0x18) = lVar8;
          **(longlong **)(param_1 + 0x38) = lVar9;
          uVar6 = (undefined4)((ulonglong)(lVar12 - lVar9) >> 1);
        }
        else {
          **(longlong **)(param_1 + 0x18) = lVar8;
          **(longlong **)(param_1 + 0x38) = lVar8;
          uVar6 = 0;
        }
        **(undefined4 **)(param_1 + 0x50) = uVar6;
        uVar7 = *(uint *)(param_1 + 0x70);
        if ((uVar7 & 1) != 0) {
          lVar12 = lVar3;
          if (0x7ff < uVar10) {
            lVar12 = *(longlong *)(lVar3 + -8);
            if (0x1f < (ulonglong)((lVar3 + -8) - lVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            lVar11 = lVar11 + 0x27;
          }
          thunk_FUN_1802464a0(lVar12,lVar11);
          uVar7 = *(uint *)(param_1 + 0x70);
        }
        *(uint *)(param_1 + 0x70) = uVar7 | 1;
        **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
        psVar2 = (short *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(psVar2 + 1);
        *psVar2 = param_2;
      }
      else {
        **(int **)(param_1 + 0x58) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(psVar2 + 1);
        *psVar2 = param_2;
        *(longlong *)(param_1 + 0x68) = lVar12 + 2;
      }
    }
  }
  return sVar5;
}

