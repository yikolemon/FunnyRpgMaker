/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180111992 */

void FUN_180111992(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if ((((*(char *)(param_1 + 0x10c) == '\x01') && (*(char *)(param_1 + 0x128) < '\x01')) &&
      (*(char *)(param_1 + 0x129) < '\x01')) ||
     (((*(char *)(param_1 + 0x111) == '\x01' && (*(char *)(param_1 + 300) == '\0')) &&
      ('\0' < *(char *)(param_1 + 299))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x88);
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      fVar1 = (float)(longlong)(*(float *)(param_1 + 0x170) - *(float *)(param_1 + 0x168));
    }
    *param_2 = fVar1;
    fVar1 = *(float *)(param_1 + 0x8c);
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      fVar1 = (float)(longlong)(*(float *)(param_1 + 0x174) - *(float *)(param_1 + 0x16c));
    }
    param_2[1] = fVar1;
    fVar1 = *(float *)(param_1 + 0x88);
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      fVar1 = (float)FUN_180102463(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178)
                                  );
      fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 0x168));
    }
    *param_3 = fVar1;
    fVar1 = *(float *)(param_1 + 0x8c);
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      fVar1 = (float)FUN_180102463(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x17c)
                                  );
      fVar1 = (float)(longlong)(fVar1 - *(float *)(param_1 + 0x16c));
    }
    param_3[1] = fVar1;
  }
  return;
}

