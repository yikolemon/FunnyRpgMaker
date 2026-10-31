/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140079c04 */

void FUN_140079c04(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(lVar4 + 0x298);
  lVar5 = *(longlong *)(lVar4 + 0x290);
  uVar9 = (int)param_1[5] + 1;
  uVar11 = *(uint *)(param_1 + 7);
  do {
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    uVar2 = *(uint *)((longlong)param_1 + 0x3c);
    if (uVar9 <= uVar2) {
      iVar3 = (int)param_1[8];
      if (param_1[9] == 0) {
        do {
          uVar11 = uVar9 + iVar3;
          uVar12 = uVar11 & 0xffff;
          if (uVar12 < *(uint *)(lVar4 + 0x10)) {
            uVar8 = uVar9;
            if (uVar12 != 0) goto LAB_140079d12;
          }
          else {
            uVar8 = -iVar3;
            if ((-1 < (int)uVar11 || (int)(iVar3 + uVar2) < 0) &&
               ((0xffff < (int)uVar11 || (uVar8 = 0x10000 - iVar3, (int)(iVar3 + uVar2) < 0x10000)))
               ) break;
          }
          uVar9 = uVar8 + 1;
        } while (uVar9 <= uVar2);
      }
      else {
        puVar7 = (ushort *)(param_1[9] + (ulonglong)((uVar9 - uVar11) * 2));
        if (puVar7 <= (ushort *)((ulonglong)uVar1 + lVar5)) {
          do {
            uVar10 = *puVar7 << 8 | *puVar7 >> 8;
            if ((uVar10 != 0) && (uVar12 = (uint)uVar10 + iVar3 & 0xffff, uVar12 != 0))
            goto LAB_140079d12;
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 <= uVar2);
        }
      }
    }
    uVar6 = FUN_140079ae4(param_1,*(int *)((longlong)param_1 + 0x34) + 1);
    if ((int)uVar6 < 0) {
      uVar12 = 0;
      uVar9 = 0xffffffff;
LAB_140079d12:
      *(uint *)(param_1 + 5) = uVar9;
      *(uint *)((longlong)param_1 + 0x2c) = uVar12;
      return;
    }
    uVar11 = *(uint *)(param_1 + 7);
  } while( true );
}

