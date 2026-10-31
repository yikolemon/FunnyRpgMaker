/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017bcb0 */

void FUN_14017bcb0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(lVar4 + 0x298);
  lVar5 = *(longlong *)(lVar4 + 0x290);
  uVar9 = (int)param_1[5] + 1;
  uVar2 = *(uint *)(param_1 + 7);
  do {
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    uVar3 = *(uint *)((longlong)param_1 + 0x3c);
    if (uVar9 <= uVar3) {
      iVar6 = (int)param_1[8];
      if (param_1[9] == 0) {
        do {
          uVar2 = uVar9 + iVar6;
          uVar11 = uVar2 & 0xffff;
          if (uVar11 < *(uint *)(lVar4 + 0x10)) {
            uVar8 = uVar9;
            if (uVar11 != 0) goto LAB_14017bdbe;
          }
          else {
            uVar8 = -iVar6;
            if ((-1 < (int)uVar2 || (int)(iVar6 + uVar3) < 0) &&
               ((0xffff < (int)uVar2 || (uVar8 = 0x10000 - iVar6, (int)(iVar6 + uVar3) < 0x10000))))
            break;
          }
          uVar9 = uVar8 + 1;
        } while (uVar9 <= uVar3);
      }
      else {
        puVar7 = (ushort *)(param_1[9] + (ulonglong)((uVar9 - uVar2) * 2));
        if (puVar7 <= (ushort *)((ulonglong)uVar1 + lVar5)) {
          do {
            uVar10 = *puVar7 << 8 | *puVar7 >> 8;
            if ((uVar10 != 0) && (uVar11 = (uint)uVar10 + iVar6 & 0xffff, uVar11 != 0))
            goto LAB_14017bdbe;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 <= uVar3);
        }
      }
    }
    iVar6 = FUN_14017bb90(param_1,*(int *)((longlong)param_1 + 0x34) + 1);
    if (iVar6 < 0) {
      uVar11 = 0;
      uVar9 = 0xffffffff;
LAB_14017bdbe:
      *(uint *)(param_1 + 5) = uVar9;
      *(uint *)((longlong)param_1 + 0x2c) = uVar11;
      return;
    }
    uVar2 = *(uint *)(param_1 + 7);
  } while( true );
}

