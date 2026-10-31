/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119893 */

void FUN_180119893(float param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    if ((param_1 != 0.0) || (NAN(param_1))) {
      fVar2 = 0.0;
      if (0.0 <= param_2) {
        fVar2 = param_2;
      }
      *(float *)(lVar1 + 0x158) =
           param_1 + (*(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0xd4)) + fVar2 +
           *(float *)(lVar1 + 0x1a4) + *(float *)(lVar1 + 0x1a0);
    }
    else {
      if (param_2 < 0.0) {
        param_2 = *(float *)(DAT_180419160 + 0xe04);
      }
      *(float *)(lVar1 + 0x158) = param_2 + *(float *)(lVar1 + 0x160);
    }
    *(undefined4 *)(lVar1 + 0x15c) = *(undefined4 *)(lVar1 + 0x164);
    *(undefined8 *)(lVar1 + 0x180) = *(undefined8 *)(lVar1 + 0x188);
    *(undefined4 *)(lVar1 + 400) = *(undefined4 *)(lVar1 + 0x194);
    *(undefined1 *)(lVar1 + 0x198) = 1;
  }
  return;
}

