/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031389a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14031389a(float *param_1,longlong param_2,longlong param_3,char param_4,
                     undefined4 param_5)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = DAT_14062a630;
  if (param_4 != '\0') {
    param_3 = FUN_140313264(param_2,param_3);
  }
  fVar2 = *(float *)(lVar1 + 0x1320);
  if (param_2 == param_3) {
    param_1[1] = fVar2;
    fVar2 = 0.0;
  }
  else {
    FUN_1403ac952(*(undefined8 *)(lVar1 + 0x1310),param_1,fVar2,DAT_1404efa34,param_5,param_2,
                  param_3,0);
    fVar2 = (float)(int)(*param_1 + _DAT_1404efaf0);
  }
  *param_1 = fVar2;
  return param_1;
}

