/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022c4a4 */

undefined8 FUN_18022c4a4(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_1 + 6);
  iVar7 = uVar1 - param_2;
  if (param_2 <= uVar1 && iVar7 != 0) {
    uVar5 = (ulonglong)(uVar1 * 2);
    uVar6 = (ulonglong)(uVar1 * 2 + 2);
    uVar2 = (ulonglong)param_2;
    uVar3 = uVar2 * 2;
    do {
      lVar10 = param_1[3] + 0xe + (uVar3 & 0xffffffff);
      uVar4 = *(ushort *)(param_1[3] + 0xe + (uVar3 & 0xffffffff));
      uVar11 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
      *(uint *)((longlong)param_1 + 0x3c) = uVar11;
      uVar4 = *(ushort *)(uVar6 + lVar10);
      lVar10 = lVar10 + uVar6;
      uVar9 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
      *(uint *)(param_1 + 7) = uVar9;
      *(uint *)(param_1 + 8) =
           (int)(short)((ushort)*(byte *)(uVar5 + lVar10) << 8) |
           (uint)*(byte *)(uVar5 + 1 + lVar10);
      uVar4 = *(ushort *)(uVar5 + uVar5 + lVar10);
      lVar10 = uVar5 + lVar10 + uVar5;
      uVar4 = uVar4 << 8 | uVar4 >> 8;
      if (((uVar1 - 1 <= uVar2) && (uVar9 == 0xffff)) && (uVar11 == 0xffff)) {
        lVar8 = 0;
        if (uVar4 == 0) goto LAB_18022c5ae;
        if ((ulonglong)*(uint *)(*param_1 + 0x298) + *(longlong *)(*param_1 + 0x290) <
            (ulonglong)uVar4 + lVar10 + 2) {
          *(undefined4 *)(param_1 + 8) = 1;
          lVar8 = 0;
          goto LAB_18022c5ae;
        }
      }
      if (uVar4 != 0xffff) {
        lVar8 = 0;
        if (uVar4 != 0) {
          lVar8 = lVar10 + (ulonglong)uVar4;
        }
LAB_18022c5ae:
        param_1[9] = lVar8;
        *(int *)((longlong)param_1 + 0x34) = (int)uVar2;
        return 0;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0xffffffff;
}

