/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087d60 */

fpos_t * FUN_140087d60(longlong *param_1,fpos_t *param_2,LARGE_INTEGER param_3,uint param_4)

{
  fpos_t fVar1;
  char cVar2;
  int iVar3;
  fpos_t local_res8 [4];
  
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3.QuadPart = param_3.QuadPart + -2;
  }
  if (param_1[0x10] != 0) {
    cVar2 = FUN_1400881d0(param_1);
    if (cVar2 != '\0') {
      if ((param_3.QuadPart != 0) || (param_4 != 1)) {
        iVar3 = FUN_140095fc8((longlong *)param_1[0x10],param_3,param_4);
        if (iVar3 != 0) goto LAB_140087e07;
      }
      iVar3 = fgetpos((FILE *)param_1[0x10],local_res8);
      if (iVar3 == 0) {
        Reset_back((longlong)param_1);
        fVar1 = *(fpos_t *)((longlong)param_1 + 0x74);
        *param_2 = local_res8[0];
        param_2[1] = 0;
        param_2[2] = fVar1;
        return param_2;
      }
    }
  }
LAB_140087e07:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

