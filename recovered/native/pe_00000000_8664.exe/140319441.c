/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140319441 */

longlong FUN_140319441(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar3 = DAT_14062a630;
  lVar4 = *(longlong *)(param_1 + 0xb8 + param_2 * 8);
  if (lVar4 == 0) {
    lVar4 = FUN_14030fcc8(0xe0);
    FUN_14039f826(lVar4,lVar3 + 0x1338);
    *(undefined8 *)(lVar4 + 0xd8) = param_3;
    *(longlong *)(param_1 + 0xb8 + param_2 * 8) = lVar4;
  }
  fVar1 = *(float *)(param_1 + 0xac + param_2 * 4);
  if ((fVar1 != (float)*(double *)(lVar3 + 0x18)) ||
     (NAN(fVar1) || NAN((float)*(double *)(lVar3 + 0x18)))) {
    FUN_14039fe72(lVar4);
    lVar2 = *(longlong *)(lVar3 + 0x68);
    local_38 = *(undefined4 *)(lVar2 + 0x28);
    uStack_34 = *(undefined4 *)(lVar2 + 0x2c);
    uStack_30 = *(undefined4 *)(lVar2 + 0x30);
    uStack_2c = *(undefined4 *)(lVar2 + 0x34);
    FUN_1403a0c5e(lVar4);
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x10) + (float)*(undefined8 *)(param_1 + 8)
                       );
    FUN_1403a0a74(lVar4,param_1 + 8,&local_40,0);
    *(float *)(param_1 + 0xac + param_2 * 4) = (float)*(double *)(lVar3 + 0x18);
  }
  return lVar4;
}

