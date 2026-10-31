/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140772726 */

ulonglong FUN_140772726(float param_1,float param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong in_RCX;
  float *pfVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if ((*(byte *)(in_RCX + 0xac) & 1) != 0) {
    pfVar3 = (float *)(ulonglong)((int)&stack0xfffffffffffffff8 - 8);
    uVar4 = in_RCX & 0xffffffff;
    if ((((*(float *)(in_RCX + 0x34) <= param_1) && (*(float *)(uVar4 + 0x38) <= param_2)) &&
        (param_1 < *(float *)(in_RCX + 0x34) + *(float *)(uVar4 + 0x3c))) &&
       ((uVar2 = 0, param_2 < *(float *)(uVar4 + 0x38) + *(float *)(uVar4 + 0x40) &&
        (uVar2 = uVar4, *(int *)(uVar4 + 0x1c) != 0)))) {
      pfVar3[1] = param_2;
      *pfVar3 = param_1;
      pfVar3[-2] = 3.8617847;
      pfVar3[-1] = 1.4013e-45;
      uVar2 = FUN_140772726();
      if ((int)uVar2 == 0) {
        pfVar3[-2] = 3.8617902;
        pfVar3[-1] = 1.4013e-45;
        uVar1 = FUN_140772726(*pfVar3,pfVar3[1]);
        uVar2 = (ulonglong)uVar1;
        if (uVar1 == 0) {
          uVar2 = uVar4;
        }
      }
    }
  }
  return uVar2;
}

