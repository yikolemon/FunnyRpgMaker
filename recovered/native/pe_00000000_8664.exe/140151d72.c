/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140151d72 */

int FUN_140151d72(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  int *local_80;
  uint local_6c;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  local_4c = 0;
  uVar4 = *(int *)(param_1 + 0x250) * param_3;
  uVar11 = (uint)((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) - 8U >> 3);
  local_68 = (ulonglong)(uVar11 - uVar4);
  iVar5 = 0xa1;
  if (uVar4 <= uVar11) {
    iVar1 = param_3 * 5;
    uVar4 = *(uint *)(param_1 + 0x280);
    uVar11 = *(uint *)(param_1 + 0x284);
    if (uVar11 < uVar4 + iVar1) {
      uVar13 = *(ulonglong *)(param_1 + 0x270);
      uVar10 = *(ulonglong *)(param_1 + 0x278);
      local_80 = &local_4c;
      local_88 = uVar13;
      lVar7 = FUN_14012b8aa(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x10),1,uVar11,
                            uVar11 + iVar1);
      *(longlong *)(param_1 + 0x270) = lVar7;
      iVar5 = local_4c;
      if (local_4c != 0) goto LAB_140151fd6;
      uVar4 = *(uint *)(param_1 + 0x280);
      *(ulonglong *)(param_1 + 0x278) = (ulonglong)uVar4 + lVar7;
      *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + iVar1;
      if ((uVar13 != 0) && (lVar7 - uVar13 != 0)) {
        puVar9 = *(ulonglong **)(param_2 + 0x20);
        puVar12 = *(ulonglong **)(param_2 + 0x28);
        if (puVar9 < puVar12) {
          do {
            uVar2 = *puVar9;
            if ((uVar13 <= uVar2) && (uVar2 < uVar10)) {
              *puVar9 = uVar2 + (lVar7 - uVar13);
              puVar12 = *(ulonglong **)(param_2 + 0x28);
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 < puVar12);
          uVar4 = *(uint *)(param_1 + 0x280);
        }
      }
    }
    *(uint *)(param_1 + 0x280) = uVar4 + iVar1;
    uVar4 = (int)local_68 + param_3;
    if (param_3 == 0) {
      uVar11 = uVar4;
      iVar5 = 0;
    }
    else {
      local_60 = (ulonglong)param_3;
      uVar13 = 0;
      local_6c = uVar4;
      do {
        lVar7 = *(longlong *)(param_1 + 600);
        local_58 = (ulonglong)(uint)((int)local_68 + (int)uVar13);
        iVar5 = FUN_1401513d5(param_2,local_58 * 8 + *(longlong *)(param_2 + 0x20));
        if (1 < *(uint *)(param_1 + 0x250)) {
          lVar14 = 1;
          do {
            iVar1 = *(int *)(lVar7 + lVar14 * 4);
            uVar10 = (ulonglong)uVar4;
            uVar4 = uVar4 + 1;
            iVar6 = FUN_1401513d5(param_2,uVar10 * 8 + *(longlong *)(param_2 + 0x20));
            lVar8 = (longlong)iVar6 * (longlong)iVar1;
            iVar5 = iVar5 + (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
            lVar14 = lVar14 + 1;
          } while ((uint)lVar14 < *(uint *)(param_1 + 0x250));
        }
        puVar3 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(*(longlong *)(param_2 + 0x20) + local_58 * 8) = puVar3;
        *(undefined1 **)(param_1 + 0x278) = puVar3 + 1;
        *puVar3 = 0xff;
        puVar3 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar3 + 1;
        *puVar3 = (char)((uint)iVar5 >> 0x18);
        puVar3 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar3 + 1;
        *puVar3 = (char)((uint)iVar5 >> 0x10);
        puVar3 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar3 + 1;
        *puVar3 = (char)((uint)iVar5 >> 8);
        puVar3 = *(undefined1 **)(param_1 + 0x278);
        *(undefined1 **)(param_1 + 0x278) = puVar3 + 1;
        *puVar3 = (char)iVar5;
        uVar13 = uVar13 + 1;
        uVar11 = local_6c;
        iVar5 = local_4c;
      } while (uVar13 != local_60);
    }
    *(ulonglong *)(param_2 + 0x28) = (ulonglong)uVar11 * 8 + *(longlong *)(param_2 + 0x20);
  }
LAB_140151fd6:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar5;
}

