/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268143 */

undefined4
FUN_10268143(char *param_1,
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((*param_1 != (&DAT_10324b98)[iVar4]) && (*param_1 != (&DAT_10324b9c)[iVar4])) {
      FID_conflict_operator__();
      return 7;
    }
    cVar1 = FUN_1026705b();
    iVar4 = iVar4 + 1;
    *param_1 = cVar1;
  } while (iVar4 != 3);
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
  unget(param_2,cVar1);
  cVar1 = FUN_1026705b();
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = FUN_1026705b();
    *param_1 = cVar1;
    cVar1 = parse_floating_point_possible_nan_is_snan<>(param_1,param_2);
    if (cVar1 == '\0') {
      cVar2 = parse_floating_point_possible_nan_is_ind<>(param_1,param_2);
      cVar1 = *param_1;
      if (cVar2 == '\0') {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_102681a4;
          cVar1 = FUN_1026705b();
          *param_1 = cVar1;
        }
        uVar3 = 4;
      }
      else {
        __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
        ::unget(param_2,cVar1);
        uVar3 = 6;
      }
    }
    else {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,*param_1);
      uVar3 = 5;
    }
  }
  else {
LAB_102681a4:
    cVar1 = FID_conflict_operator__();
    uVar3 = 7;
    if (cVar1 != '\0') {
      uVar3 = 4;
    }
  }
  return uVar3;
}

