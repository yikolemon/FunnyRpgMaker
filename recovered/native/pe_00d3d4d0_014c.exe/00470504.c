/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00470504 */

undefined4 __fastcall FUN_00470504(int param_1,uint param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = (param_2 - uVar3 >> 1) + uVar3;
    uVar1 = *(ushort *)(param_1 + 4 + uVar2 * 6);
    uVar1 = uVar1 << 8 | uVar1 >> 8;
    if (uVar1 < param_3) {
      uVar3 = uVar2 + 1;
      uVar2 = param_2;
    }
    else if (uVar1 <= param_3) {
      *param_4 = uVar1;
      uVar3 = *(uint *)(param_1 + 6 + uVar2 * 6);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      *(uint *)(param_4 + 2) = uVar3;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    param_2 = uVar2;
  } while (uVar3 < uVar2);
  return 0;
}

