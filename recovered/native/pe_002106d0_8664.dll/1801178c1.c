/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801178c1 */

undefined8 FUN_1801178c1(float *param_1,float *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if (((param_1[1] <= *(float *)(lVar1 + 0x2c4) && *(float *)(lVar1 + 0x2c4) != param_1[1]) &&
      (*(float *)(lVar1 + 700) <= param_2[1] && param_2[1] != *(float *)(lVar1 + 700))) &&
     (*param_1 <= *(float *)(lVar1 + 0x2c0) && *(float *)(lVar1 + 0x2c0) != *param_1)) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    *(float *)(lVar1 + 0x2b8) <= *param_2 && *param_2 != *(float *)(lVar1 + 0x2b8));
  }
  return 0;
}

