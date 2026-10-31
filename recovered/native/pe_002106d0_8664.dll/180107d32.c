/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107d32 */

undefined8 FUN_180107d32(float *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if (((((*(float *)(lVar1 + 700) <= param_1[3] && param_1[3] != *(float *)(lVar1 + 700)) &&
        (param_1[1] <= *(float *)(lVar1 + 0x2c4) && *(float *)(lVar1 + 0x2c4) != param_1[1])) &&
       (*(float *)(lVar1 + 0x2b8) <= param_1[2] && param_1[2] != *(float *)(lVar1 + 0x2b8))) &&
      (*param_1 <= *(float *)(lVar1 + 0x2c0) && *(float *)(lVar1 + 0x2c0) != *param_1)) ||
     (((param_2 != 0 &&
       (((param_2 == *(int *)(DAT_180419160 + 0x167c) ||
         (param_2 == *(int *)(DAT_180419160 + 0x16a8))) ||
        ((param_2 == *(int *)(DAT_180419160 + 0x21f8) ||
         (param_2 == *(int *)(DAT_180419160 + 0x2214))))))) ||
      (uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
      *(char *)(DAT_180419160 + 0x167a) == '\x01')))) {
    uVar2 = 0;
  }
  return uVar2;
}

