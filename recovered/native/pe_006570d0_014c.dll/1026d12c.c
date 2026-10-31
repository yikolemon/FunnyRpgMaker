/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d12c */

char FUN_1026d12c(char *param_1,c_string_character_source<char> *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  c_string_character_source<char> *local_14;
  char *local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;
  
  local_c = &param_3;
  iVar4 = 0;
  local_14 = param_2;
  local_10 = param_1;
  iVar3 = 0;
  while ((*param_1 == (&DAT_10324e88)[iVar3] || (*param_1 == (&DAT_10324e8c)[iVar3]))) {
    cVar2 = **(char **)param_2;
    iVar3 = iVar3 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    _local_8 = CONCAT31(uStack_7,cVar2);
    *param_1 = cVar2;
    if (iVar3 == 3) {
      __crt_strtox::c_string_character_source<char>::unget(param_2,cVar2);
      param_3 = *(char **)param_2;
      cVar2 = *param_3;
      *(char **)param_2 = param_3 + 1;
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[iVar4] || (cVar2 == "inity"[iVar4]))) {
        cVar2 = **(char **)param_2;
        iVar4 = iVar4 + 1;
        *(char **)param_2 = *(char **)param_2 + 1;
        _local_8 = CONCAT31(uStack_7,cVar2);
        *param_1 = cVar2;
        if (iVar4 == 5) {
          __crt_strtox::c_string_character_source<char>::unget(param_2,cVar2);
          return '\x03';
        }
      }
      bVar1 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                        ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
      return !bVar1 * '\x04' + '\x03';
    }
  }
  <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
            ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
  return '\a';
}

