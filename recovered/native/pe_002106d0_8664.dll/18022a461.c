/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022a461 */

undefined8 FUN_18022a461(longlong param_1,byte *param_2,uint *param_3,undefined1 param_4)

{
  ushort uVar1;
  
  if (((*(byte **)(param_1 + 0x40) <= param_2) &&
      (param_2 <=
       (byte *)(*(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) + -3))) &&
     (*param_2 < 3)) {
    *param_3 = (uint)*param_2;
    uVar1 = *(ushort *)(param_2 + 1);
    param_3[2] = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    *(byte **)(param_3 + 4) = param_2 + 3;
    param_3[3] = 0;
    *(undefined1 *)(param_3 + 6) = param_4;
    return CONCAT71((uint7)(byte)uVar1,1);
  }
  return 0;
}

