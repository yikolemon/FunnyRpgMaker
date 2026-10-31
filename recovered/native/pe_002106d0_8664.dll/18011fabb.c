/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011fabb */

longlong FUN_18011fabb(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0xd4) & 1) != 0) {
    if (*(float *)(param_1 + 0x48) <= (float)param_2) {
      fVar1 = (float)((ulonglong)param_2 >> 0x20);
      if (fVar1 < *(float *)(param_1 + 0x4c)) {
        return 0;
      }
      if (*(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x50) <= (float)param_2) {
        return 0;
      }
      if (*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x54) <= fVar1) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        return param_1;
      }
      lVar2 = FUN_18011fabb(*(longlong *)(param_1 + 0x20),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      lVar2 = FUN_18011fabb(*(undefined8 *)(param_1 + 0x28),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      return param_1;
    }
  }
  return 0;
}

