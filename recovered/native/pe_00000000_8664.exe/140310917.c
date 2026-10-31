/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140310917 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140310917(float param_1,float param_2,float param_3,uint *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_88 [44];
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  fVar2 = 0.0;
  local_5c = param_1;
  local_58 = param_2;
  local_54 = param_3;
  if (param_2 < param_3) {
    FUN_140310a47(&local_58,&local_54);
    fVar2 = DAT_1404ccdb0;
  }
  if (param_1 < local_58) {
    FUN_140310a47(&local_5c,&local_58);
    fVar2 = DAT_1404efad0 - fVar2;
    param_1 = local_5c;
  }
  fVar1 = DAT_1404efad8;
  fVar3 = local_58;
  if (local_54 <= local_58) {
    fVar3 = local_54;
  }
  *param_4 = (uint)((local_58 - local_54) / (DAT_1404efad4 * (param_1 - fVar3) + DAT_1404efad8) +
                   fVar2) & _DAT_1404bda20;
  *param_5 = (param_1 - fVar3) / (fVar1 + param_1);
  *param_6 = param_1;
  if (ram0x000140613b10 == (local_50 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_50 ^ (ulonglong)auStack_88);
}

