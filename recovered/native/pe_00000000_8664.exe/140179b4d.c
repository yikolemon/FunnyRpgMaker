/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179b4d */

undefined8 FUN_140179b4d(longlong param_1,byte *param_2,uint *param_3,undefined1 param_4)

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

