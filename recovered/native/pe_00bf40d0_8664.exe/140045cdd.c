/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045cdd */

undefined8 FUN_140045cdd(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(param_1 + 0xd8);
  iVar1 = (int)plVar3[0x43];
  if (0 < iVar1) {
    FUN_1400b3550(*(undefined8 **)(param_1 + 0xa8),*(undefined8 **)(param_1 + 0xb0),
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  if (param_2 == '\0') {
    *(undefined4 *)(plVar3 + 0x2c) = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 4);
    *(undefined4 *)((longlong)plVar3 + 0x164) = *(undefined4 *)(*(longlong *)(lVar2 + 0x40) + 8);
  }
  else {
    plVar3[0x2c] = 0x1000000010000;
    FUN_1400b3550(*(undefined8 **)(param_1 + 0xb8),*(undefined8 **)(param_1 + 0xb0),
                  (ulonglong)*(ushort *)(param_1 + 0xa0) << 3);
  }
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0x20 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8)
       + 0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0x18 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8)
       + 0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -0xc + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -0xc + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) +
       0x20U & 0xffffffc0;
  *(uint *)(*(longlong *)(param_1 + 0xb0) + -4 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (ulonglong)*(ushort *)(param_1 + 0xa0) * 8) +
       0x20U & 0xffffffc0;
  if (0 < iVar1) {
    FUN_140043ae2((longlong)plVar3,3,plVar3[0x44],iVar1);
    *(char *)((longlong)plVar3 + 0x2c5) = param_2;
    lVar5 = *(longlong *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xb0);
    lVar7 = *(longlong *)(param_1 + 0xb8);
    lVar8 = *(longlong *)(param_1 + 0xc0);
    lVar9 = *(longlong *)(param_1 + 200);
    plVar3[0x1d] = *(longlong *)(param_1 + 0xa0);
    plVar3[0x1e] = lVar5;
    plVar3[0x1f] = lVar6;
    plVar3[0x20] = lVar7;
    plVar3[0x21] = lVar8;
    plVar3[0x22] = lVar9;
    plVar3[0x23] = *(longlong *)(param_1 + 0xd0);
    uVar10 = FUN_140043b1d(plVar3,lVar2);
    if (((int)uVar10 != 0) && (*(char *)((longlong)plVar3 + 0x2c6) != '\0')) {
      return uVar10;
    }
    pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x18) + 0x70);
    *pbVar4 = *(char *)((longlong)plVar3 + 0x1d4) << 5 | *pbVar4 | 4;
  }
  if (*(int *)((longlong)plVar3 + 0x324) == 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    uVar11 = (ulonglong)*(ushort *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + -0x20 + uVar11 * 8);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar2 + -0x18 + uVar11 * 8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar2 + -0x10 + uVar11 * 8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar2 + -8 + uVar11 * 8);
  }
  return 0;
}

