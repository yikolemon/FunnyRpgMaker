/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180117869 */

undefined8 FUN_180117869(float *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
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

