/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090b81 */

undefined8 FUN_140090b81(float *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (((*(float *)(lVar1 + 0x15c) < *(float *)(lVar1 + 0x2c4)) &&
      (fVar2 = *(float *)(lVar1 + 0x15c) + param_1[1],
      *(float *)(lVar1 + 700) <= fVar2 && fVar2 != *(float *)(lVar1 + 700))) &&
     (*(float *)(lVar1 + 0x158) < *(float *)(lVar1 + 0x2c0))) {
    fVar2 = *(float *)(lVar1 + 0x158) + *param_1;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    *(float *)(lVar1 + 0x2b8) <= fVar2 && fVar2 != *(float *)(lVar1 + 0x2b8));
  }
  return 0;
}

