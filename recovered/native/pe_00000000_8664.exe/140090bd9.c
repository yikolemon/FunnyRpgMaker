/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090bd9 */

undefined8 FUN_140090bd9(float *param_1,float *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (((param_1[1] <= *(float *)(lVar1 + 0x2c4) && *(float *)(lVar1 + 0x2c4) != param_1[1]) &&
      (*(float *)(lVar1 + 700) <= param_2[1] && param_2[1] != *(float *)(lVar1 + 700))) &&
     (*param_1 <= *(float *)(lVar1 + 0x2c0) && *(float *)(lVar1 + 0x2c0) != *param_1)) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    *(float *)(lVar1 + 0x2b8) <= *param_2 && *param_2 != *(float *)(lVar1 + 0x2b8));
  }
  return 0;
}

