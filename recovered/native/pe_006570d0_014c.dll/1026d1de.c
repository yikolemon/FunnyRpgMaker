/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d1de */

undefined4 FUN_1026d1de(char *param_1,c_string_character_source<char> *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
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
  do {
    if ((*param_1 != (&DAT_10324ea0)[iVar4]) && (*param_1 != (&DAT_10324ea4)[iVar4])) {
      <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
      return 7;
    }
    cVar1 = **(char **)param_2;
    iVar4 = iVar4 + 1;
    *(char **)param_2 = *(char **)param_2 + 1;
    _local_8 = CONCAT31(uStack_7,cVar1);
    *param_1 = cVar1;
  } while (iVar4 != 3);
  __crt_strtox::c_string_character_source<char>::unget(param_2,cVar1);
  param_3 = *(char **)param_2;
  cVar1 = *param_3;
  *(char **)param_2 = param_3 + 1;
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = **(char **)param_2;
    *(char **)param_2 = *(char **)param_2 + 1;
    *param_1 = cVar1;
    bVar2 = __crt_strtox::
            parse_floating_point_possible_nan_is_snan<char,__crt_strtox::c_string_character_source<char>_>
                      (param_1,param_2);
    if (bVar2) {
      __crt_strtox::c_string_character_source<char>::unget(param_2,*param_1);
      uVar3 = 5;
    }
    else {
      bVar2 = __crt_strtox::
              parse_floating_point_possible_nan_is_ind<char,__crt_strtox::c_string_character_source<char>_>
                        (param_1,param_2);
      cVar1 = *param_1;
      if (bVar2) {
        __crt_strtox::c_string_character_source<char>::unget(param_2,cVar1);
        uVar3 = 6;
      }
      else {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_1026d23b;
          cVar1 = **(char **)param_2;
          *(char **)param_2 = *(char **)param_2 + 1;
          *param_1 = cVar1;
        }
        uVar3 = 4;
      }
    }
  }
  else {
LAB_1026d23b:
    bVar2 = <lambda_32aa245da1b5b882fa96db788295c8b2>::operator()
                      ((<lambda_32aa245da1b5b882fa96db788295c8b2> *)&local_14);
    uVar3 = 7;
    if (bVar2) {
      uVar3 = 4;
    }
  }
  return uVar3;
}

