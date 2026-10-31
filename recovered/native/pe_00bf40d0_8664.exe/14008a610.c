/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008a610 */

fpos_t * FUN_14008a610(basic_filebuf<char,std::char_traits<char>_> *param_1,fpos_t *param_2,
                      LARGE_INTEGER param_3,uint param_4)

{
  fpos_t fVar1;
  char cVar2;
  int iVar3;
  fpos_t local_res8 [4];
  
  if ((((basic_filebuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x38) ==
        param_1 + 0x70) && (param_4 == 1)) && (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3.QuadPart = param_3.QuadPart + -1;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar2 = FUN_14008aae0((longlong *)param_1);
    if (cVar2 != '\0') {
      if ((param_3.QuadPart != 0) || (param_4 != 1)) {
        iVar3 = FUN_140095fc8(*(longlong **)(param_1 + 0x80),param_3,param_4);
        if (iVar3 != 0) goto LAB_14008a6b6;
      }
      iVar3 = fgetpos(*(FILE **)(param_1 + 0x80),local_res8);
      if (iVar3 == 0) {
        std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(param_1);
        fVar1 = *(fpos_t *)(param_1 + 0x74);
        *param_2 = local_res8[0];
        param_2[1] = 0;
        param_2[2] = fVar1;
        return param_2;
      }
    }
  }
LAB_14008a6b6:
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

