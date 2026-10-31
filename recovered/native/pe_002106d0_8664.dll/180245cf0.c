/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245cf0 */

fpos_t * FUN_180245cf0(longlong param_1,fpos_t *param_2,longlong param_3,int param_4)

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
    cVar2 = FUN_180246160();
    if (cVar2 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar3 = FUN_18027e874(*(undefined8 *)(param_1 + 0x80),param_3,param_4);
        if (iVar3 != 0) goto LAB_180245d97;
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
LAB_180245d97:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

