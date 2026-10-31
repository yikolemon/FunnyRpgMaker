/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a6c1 */

undefined8 FUN_18021a6c1(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar8 = *(int *)(param_1 + 0x20) * param_3;
  uVar2 = FUN_18021a8ee(param_2);
  uVar5 = 0xa1;
  if (uVar8 <= uVar2) {
    if (param_3 != 0) {
      iVar10 = (uVar2 - uVar8) + param_3;
      iVar9 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x28);
        iVar3 = FUN_18021a8fb(param_2);
        if (1 < *(uint *)(param_1 + 0x20)) {
          lVar7 = 1;
          iVar4 = iVar10;
          do {
            iVar10 = iVar4 + 1;
            iVar4 = FUN_18021a8fb(param_2,iVar4);
            lVar6 = (longlong)iVar4 * (longlong)*(int *)(lVar1 + lVar7 * 4);
            iVar3 = iVar3 + (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
            lVar7 = lVar7 + 1;
            iVar4 = iVar10;
          } while ((uint)lVar7 < *(uint *)(param_1 + 0x20));
        }
        FUN_18021b184(param_2,iVar9 + (uVar2 - uVar8),iVar3);
        iVar9 = iVar9 + 1;
      } while (iVar9 != param_3);
    }
    FUN_18021b3d7(param_2,uVar8 - param_3);
    uVar5 = 0;
  }
  return uVar5;
}

