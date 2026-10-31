/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e139 */

longlong FUN_18011e139(float *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(DAT_180419160 + 0x2178) != 0) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(DAT_180419160 + 0x2180) + lVar3);
      if (((((*(ushort *)(lVar1 + 4) & 0x1080) == 0) && (*(float *)(lVar1 + 8) <= *param_1)) &&
          (*(float *)(lVar1 + 0xc) <= param_1[1])) &&
         ((((*param_1 < *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0x10) &&
            (param_1[1] < *(float *)(lVar1 + 0xc) + *(float *)(lVar1 + 0x14))) &&
           ((lVar2 == 0 || (*(int *)(lVar2 + 0x88) < *(int *)(lVar1 + 0x88))))) &&
          (*(char *)(lVar1 + 0x70) != '\0')))) {
        lVar2 = lVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(DAT_180419160 + 0x2178) * 8 != lVar3);
    return lVar2;
  }
  return 0;
}

