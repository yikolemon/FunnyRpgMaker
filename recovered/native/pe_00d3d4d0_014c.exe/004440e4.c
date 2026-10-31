/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004440e4 */

undefined4 __fastcall FUN_004440e4(int param_1,int param_2,ushort param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_EAX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  if (((ushort)param_2 < *(ushort *)(param_1 + 0x60)) &&
     (in_EAX = (uint)param_3, param_3 < *(ushort *)(param_1 + 0x44))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + (uint)param_3 * 8);
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 4 + (uint)param_3 * 8);
    iVar3 = *(int *)(*(int *)(param_1 + 0x68) + param_2 * 8);
    iVar4 = *(int *)(*(int *)(param_1 + 0x68) + 4 + param_2 * 8);
    uVar8 = iVar2 - iVar4;
    bVar5 = iVar2 != iVar4;
    bVar6 = iVar1 != iVar3;
    uVar7 = 0x4000;
    if (bVar5 || bVar6) {
      uVar7 = iVar1 - iVar3;
    }
    bVar10 = (*(byte *)(param_1 + 0x148) & 1) == 0;
    uVar9 = uVar8;
    if (!bVar10 && (bVar5 || bVar6)) {
      uVar9 = uVar7;
    }
    uVar8 = -uVar8;
    if (bVar10 || !bVar5 && !bVar6) {
      uVar8 = uVar7;
    }
    FUN_00444168(uVar8,uVar9,param_4);
    return 0;
  }
  if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

