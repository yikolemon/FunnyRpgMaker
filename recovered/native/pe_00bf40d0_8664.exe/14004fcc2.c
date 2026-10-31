/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004fcc2 */

int FUN_14004fcc2(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_a8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  local_4c = 0;
  uVar3 = *(int *)(param_1 + 0x250) * param_3;
  uVar14 = (uint)((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) - 8U >> 3);
  iVar11 = uVar14 - uVar3;
  iVar4 = 0xa1;
  if (uVar3 <= uVar14) {
    iVar1 = param_3 * 5;
    uVar3 = *(uint *)(param_1 + 0x280);
    uVar14 = *(uint *)(param_1 + 0x284);
    if (uVar14 < uVar3 + iVar1) {
      uVar13 = *(ulonglong *)(param_1 + 0x270);
      uVar7 = *(ulonglong *)(param_1 + 0x278);
      lVar6 = FUN_14001f231(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x10),1,uVar14,
                            uVar14 + iVar1,uVar13,&local_4c);
      *(longlong *)(param_1 + 0x270) = lVar6;
      iVar4 = local_4c;
      if (local_4c != 0) goto LAB_14004ff26;
      uVar3 = *(uint *)(param_1 + 0x280);
      *(ulonglong *)(param_1 + 0x278) = (ulonglong)uVar3 + lVar6;
      *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + iVar1;
      if ((uVar13 != 0) && (lVar6 - uVar13 != 0)) {
        puVar9 = *(ulonglong **)(param_2 + 0x20);
        puVar12 = *(ulonglong **)(param_2 + 0x28);
        if (puVar9 < puVar12) {
          do {
            uVar10 = *puVar9;
            if ((uVar13 <= uVar10) && (uVar10 < uVar7)) {
              *puVar9 = uVar10 + (lVar6 - uVar13);
              puVar12 = *(ulonglong **)(param_2 + 0x28);
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 < puVar12);
          uVar3 = *(uint *)(param_1 + 0x280);
        }
      }
    }
    *(uint *)(param_1 + 0x280) = uVar3 + iVar1;
    uVar3 = iVar11 + param_3;
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      uVar13 = 0;
      uVar14 = uVar3;
      do {
        lVar6 = *(longlong *)(param_1 + 600);
        uVar7 = (ulonglong)(uint)(iVar11 + (int)uVar13);
        iVar4 = FUN_14004f325(param_2,(undefined8 *)(uVar7 * 8 + *(longlong *)(param_2 + 0x20)));
        if (1 < *(uint *)(param_1 + 0x250)) {
          lVar15 = 1;
          do {
            iVar1 = *(int *)(lVar6 + lVar15 * 4);
            uVar10 = (ulonglong)uVar14;
            uVar14 = uVar14 + 1;
            iVar5 = FUN_14004f325(param_2,(undefined8 *)(uVar10 * 8 + *(longlong *)(param_2 + 0x20))
                                 );
            lVar8 = (longlong)iVar5 * (longlong)iVar1;
            iVar4 = iVar4 + (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
            lVar15 = lVar15 + 1;
          } while ((uint)lVar15 < *(uint *)(param_1 + 0x250));
        }
        puVar2 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(*(longlong *)(param_2 + 0x20) + uVar7 * 8) = puVar2;
        *(undefined1 **)(param_1 + 0x278) = puVar2 + 1;
        *puVar2 = 0xff;
        puVar2 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar2 + 1;
        *puVar2 = (char)((uint)iVar4 >> 0x18);
        puVar2 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar2 + 1;
        *puVar2 = (char)((uint)iVar4 >> 0x10);
        puVar2 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar2 + 1;
        *puVar2 = (char)((uint)iVar4 >> 8);
        puVar2 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar2 + 1;
        *puVar2 = (char)iVar4;
        uVar13 = uVar13 + 1;
        iVar4 = local_4c;
      } while (uVar13 != param_3);
    }
    *(ulonglong *)(param_2 + 0x28) = (ulonglong)uVar3 * 8 + *(longlong *)(param_2 + 0x20);
  }
LAB_14004ff26:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return iVar4;
}

