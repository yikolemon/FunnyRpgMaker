/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105030 */

fpos_t * FUN_140105030(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

{
  fpos_t fVar1;
  char cVar2;
  int iVar3;
  fpos_t local_res8 [4];
  
  if (((**(longlong **)(param_1 + 0x38) == param_1 + 0x70) && (param_4 == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -2;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar2 = FUN_1401054a0();
    if (cVar2 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar3 = FUN_140113fe4(*(undefined8 *)(param_1 + 0x80),param_3,param_4);
        if (iVar3 != 0) goto LAB_1401050d7;
      }
      iVar3 = fgetpos(*(FILE **)(param_1 + 0x80),local_res8);
      if (iVar3 == 0) {
        Reset_back(param_1);
        fVar1 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_res8[0];
        param_2[1] = 0;
        param_2[2] = fVar1;
        return param_2;
      }
    }
  }
LAB_1401050d7:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

