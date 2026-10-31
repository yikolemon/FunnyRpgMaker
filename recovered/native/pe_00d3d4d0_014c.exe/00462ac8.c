/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462ac8 */

undefined4 __fastcall FUN_00462ac8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_2c;
  
  uVar10 = *(int *)(param_1 + 0x14) * param_3;
  uVar4 = FUN_00462cbd(param_2);
  uVar5 = 0xa1;
  if (uVar10 <= uVar4) {
    if (param_3 != 0) {
      local_2c = (uVar4 - uVar10) + param_3;
      iVar8 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x18);
        uVar1 = iVar8 + (uVar4 - uVar10);
        iVar6 = FUN_00462cc7(param_2,uVar1);
        if (1 < *(uint *)(param_1 + 0x14)) {
          uVar9 = 1;
          do {
            iVar7 = FUN_00462cc7(param_2,(local_2c + uVar9) - 1);
            lVar3 = (longlong)iVar7 * (longlong)*(int *)(iVar2 + uVar9 * 4);
            iVar7 = (int)(lVar3 >> 0x3f);
            lVar3 = lVar3 + CONCAT44(iVar7,iVar7) + 0x8000;
            iVar6 = iVar6 + ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x14));
          local_2c = local_2c + uVar9 + -1;
        }
        FUN_0046343f(param_2,uVar1,iVar6);
        iVar8 = iVar8 + 1;
      } while (iVar8 != param_3);
    }
    FUN_00463629(param_2,uVar10 - param_3);
    uVar5 = 0;
  }
  return uVar5;
}

