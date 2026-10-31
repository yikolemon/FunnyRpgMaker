/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f8dc7 */

undefined8
FUN_1801f8dc7(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = (*(byte *)(param_1 + 0x1f0) & 1) == 0;
  lVar6 = 0x40;
  if (bVar8) {
    lVar6 = 0x78;
  }
  uVar1 = *(ushort *)(param_1 + 0x18e + (ulonglong)bVar8 * 2);
  if (uVar1 < *(ushort *)(param_1 + lVar6)) {
    if (param_5 != (uint *)0x0) {
      uVar7 = 0xffffffff;
      if (param_4 == *(longlong *)(param_1 + 0x10 + lVar6)) {
        uVar7 = (uint)uVar1;
      }
      *param_5 = uVar7;
    }
    lVar2 = *(longlong *)(param_1 + 8 + lVar6);
    lVar6 = *(longlong *)(param_1 + 0x10 + lVar6);
    lVar4 = (ulonglong)uVar1 * 8;
    iVar3 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(lVar6 + lVar4) - *(int *)(lVar2 + lVar4),
                       *(int *)(lVar6 + 4 + lVar4) - *(int *)(lVar2 + 4 + lVar4));
    lVar6 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)iVar3;
    *param_2 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    lVar6 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)iVar3;
    *param_3 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  return uVar5;
}

