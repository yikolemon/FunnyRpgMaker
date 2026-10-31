/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004704a0 */

undefined4 __fastcall FUN_004704a0(int param_1,uint param_2,uint param_3,ushort *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = (param_2 - uVar2 >> 1) + uVar2;
      iVar1 = uVar3 * 6;
      uVar4 = *(ushort *)(param_1 + iVar1) << 8 | *(ushort *)(param_1 + iVar1) >> 8;
      if (uVar4 < param_3) {
        uVar2 = uVar3 + 1;
        uVar3 = param_2;
      }
      else if (uVar4 <= param_3) {
        *param_4 = uVar4;
        uVar4 = *(ushort *)(param_1 + 2 + iVar1);
        param_4[1] = uVar4 << 8 | uVar4 >> 8;
        uVar4 = *(ushort *)(param_1 + 4 + iVar1);
        param_4[2] = uVar4 << 8 | uVar4 >> 8;
        return CONCAT31((uint3)(byte)uVar4,1);
      }
      param_2 = uVar3;
    } while (uVar2 < uVar3);
  }
  return 0;
}

