/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140319202 */

undefined8 FUN_140319202(float *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  if (((((*(float *)(lVar1 + 700) <= param_1[3] && param_1[3] != *(float *)(lVar1 + 700)) &&
        (param_1[1] <= *(float *)(lVar1 + 0x2c4) && *(float *)(lVar1 + 0x2c4) != param_1[1])) &&
       (*(float *)(lVar1 + 0x2b8) <= param_1[2] && param_1[2] != *(float *)(lVar1 + 0x2b8))) &&
      (*param_1 <= *(float *)(lVar1 + 0x2c0) && *(float *)(lVar1 + 0x2c0) != *param_1)) ||
     (((param_2 != 0 &&
       (((param_2 == *(int *)(DAT_14062a630 + 0x167c) ||
         (param_2 == *(int *)(DAT_14062a630 + 0x16a8))) ||
        ((param_2 == *(int *)(DAT_14062a630 + 0x21f8) ||
         (param_2 == *(int *)(DAT_14062a630 + 0x2214))))))) ||
      (uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
      *(char *)(DAT_14062a630 + 0x167a) == '\x01')))) {
    uVar2 = 0;
  }
  return uVar2;
}

