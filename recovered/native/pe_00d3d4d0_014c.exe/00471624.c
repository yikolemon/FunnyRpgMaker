/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471624 */

void __fastcall FUN_00471624(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  *param_1 = *param_2 << 8 | *param_2 >> 8;
  param_1[1] = param_2[1] << 8 | param_2[1] >> 8;
  uVar1 = *(uint *)(param_2 + 2);
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return;
}

