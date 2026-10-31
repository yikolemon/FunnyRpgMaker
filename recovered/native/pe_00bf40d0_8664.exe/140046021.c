/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046021 */

undefined8 FUN_140046021(longlong param_1,ushort param_2,ushort param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  
  if ((param_2 < *(ushort *)(param_1 + 0xb0)) && (param_3 < *(ushort *)(param_1 + 0x78))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_3 * 8);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)param_3 * 8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 8);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + (ulonglong)param_2 * 8);
    uVar10 = iVar2 - iVar4;
    bVar6 = iVar2 == iVar4;
    bVar7 = iVar1 == iVar3;
    uVar8 = 0x4000;
    if (!bVar6 || !bVar7) {
      uVar8 = iVar1 - iVar3;
    }
    bVar11 = (*(byte *)(param_1 + 0x1f0) & 1) != 0;
    uVar5 = uVar10;
    if (bVar11 && (!bVar6 || !bVar7)) {
      uVar5 = uVar8;
    }
    uVar10 = -uVar10;
    if (!bVar11 || bVar6 && bVar7) {
      uVar10 = uVar8;
    }
    FUN_1400460bc(uVar10,uVar5,param_4);
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  return uVar9;
}

