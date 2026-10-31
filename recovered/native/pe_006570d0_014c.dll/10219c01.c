/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10219c01 */

undefined4 __fastcall FUN_10219c01(int param_1,byte *param_2,uint *param_3,undefined1 param_4)

{
  ushort uVar1;
  
  if (((*(byte **)(param_1 + 0x24) <= param_2) &&
      (param_2 <= (byte *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) + -3))) &&
     (*param_2 < 3)) {
    *param_3 = (uint)*param_2;
    uVar1 = *(ushort *)(param_2 + 1);
    param_3[1] = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    param_3[3] = (uint)(param_2 + 3);
    param_3[2] = 0;
    *(undefined1 *)(param_3 + 4) = param_4;
    return CONCAT31((uint3)(byte)uVar1,1);
  }
  return 0;
}

