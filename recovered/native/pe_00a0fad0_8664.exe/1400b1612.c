/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b1612 */

undefined4 FUN_1400b1612(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  uint3 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar2 = *param_1;
  if ((param_2 != (byte *)0x0) && (iVar8 = param_1[1] + -9, iVar8 != 0)) {
    bVar1 = *(byte *)(param_1 + 2);
    puVar7 = (uint3 *)((longlong)param_1 + 9);
    uVar10 = 0;
    do {
      while (bVar5 = (byte)*puVar7, bVar5 == bVar1) {
        bVar5 = *(byte *)((longlong)puVar7 + 1);
        if (bVar5 == bVar1) {
          iVar3 = -2;
          lVar6 = 2;
          bVar5 = bVar1;
          goto LAB_1400b167a;
        }
        uVar4 = (uint)bVar5 - (uint)(bVar1 < bVar5);
        uVar9 = uVar4 >> 3;
        if ((uVar4 & 4) == 0) {
          puVar7 = (uint3 *)((longlong)puVar7 + 2);
          iVar8 = iVar8 + -2;
        }
        else {
          uVar9 = uVar9 | (uint)*(byte *)((longlong)puVar7 + 2) << 5;
          puVar7 = (uint3 *)((longlong)puVar7 + 3);
          iVar8 = iVar8 + -3;
        }
        switch(uVar4 & 3) {
        case 0:
          uVar10 = (uint)(byte)*puVar7;
          puVar7 = (uint3 *)((longlong)puVar7 + 1);
          iVar8 = iVar8 + -1;
          break;
        case 1:
          uVar10 = (uint)(ushort)*puVar7;
          puVar7 = (uint3 *)((longlong)puVar7 + 2);
          iVar8 = iVar8 + -2;
          break;
        case 2:
          uVar10 = (uint)*puVar7;
          puVar7 = (uint3 *)((longlong)puVar7 + 3);
          iVar8 = iVar8 + -3;
        }
        uVar9 = uVar9 + 4;
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
        if (uVar10 < uVar9) {
          do {
            uVar11 = (ulonglong)uVar4;
            FUN_140135ff0(param_2,(longlong)param_2 - uVar11,uVar11);
            param_2 = param_2 + uVar11;
            uVar9 = uVar9 - uVar4;
            uVar4 = uVar4 * 2;
          } while (uVar4 < uVar9);
          if (uVar9 != 0) goto LAB_1400b1728;
        }
        else {
LAB_1400b1728:
          FUN_140135ff0(param_2,(longlong)param_2 - (ulonglong)uVar4,(ulonglong)uVar9);
          param_2 = param_2 + uVar9;
        }
        if (iVar8 == 0) {
          return uVar2;
        }
      }
      iVar3 = -1;
      lVar6 = 1;
LAB_1400b167a:
      *param_2 = bVar5;
      puVar7 = (uint3 *)((longlong)puVar7 + lVar6);
      param_2 = param_2 + 1;
      iVar8 = iVar8 + iVar3;
    } while (iVar8 != 0);
  }
  return uVar2;
}

