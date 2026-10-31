/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10150b5b */

float * FUN_10150b5b(float *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  FUN_100fdb2e(&local_1c,param_2,0,1,0xbf800000);
  fVar3 = DAT_1028b430;
  if (param_3 != '\0') {
    fVar3 = *(float *)(iVar1 + 0xd24) + *(float *)(iVar1 + 0x1228);
  }
  local_24 = local_1c + *(float *)(iVar1 + 0xd0c) + fVar3 + *(float *)(iVar1 + 0xd0c);
  local_20 = *(float *)(iVar1 + 0xd10) + *(float *)(iVar1 + 0xd10) + local_18;
  FUN_101515b5();
  fVar2 = (float10)FUN_100ea38a(local_24,local_18);
  *param_1 = (float)fVar2;
  param_1[1] = local_20;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

