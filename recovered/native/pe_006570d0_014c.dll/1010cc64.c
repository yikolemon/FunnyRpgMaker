/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010cc64 */

void __fastcall FUN_1010cc64(int param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float fVar2;
  
  if ((((*(char *)(param_1 + 0xfc) == '\x01') && (*(char *)(param_1 + 0x118) < '\x01')) &&
      (*(char *)(param_1 + 0x119) < '\x01')) ||
     (((*(char *)(param_1 + 0x101) == '\x01' && (*(char *)(param_1 + 0x11c) == '\0')) &&
      ('\0' < *(char *)(param_1 + 0x11b))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x78);
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      fVar2 = (float)(longlong)ROUND(*(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x154));
    }
    *param_2 = fVar2;
    fVar2 = *(float *)(param_1 + 0x7c);
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      fVar2 = (float)(longlong)ROUND(*(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x158));
    }
    param_2[1] = fVar2;
    fVar2 = *(float *)(param_1 + 0x78);
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      fVar1 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0x15c),
                                    *(undefined4 *)(param_1 + 0x164));
      fVar2 = (float)(longlong)ROUND((float)fVar1 - *(float *)(param_1 + 0x154));
    }
    *param_3 = fVar2;
    fVar2 = *(float *)(param_1 + 0x7c);
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      fVar1 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0x160),
                                    *(undefined4 *)(param_1 + 0x168));
      fVar2 = (float)(longlong)ROUND((float)fVar1 - *(float *)(param_1 + 0x158));
    }
    param_3[1] = fVar2;
  }
  return;
}

