/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268088 */

int FUN_10268088(char *param_1,
                input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  while ((*param_1 == (&DAT_10324b80)[iVar3] || (*param_1 == (&DAT_10324b84)[iVar3]))) {
    cVar1 = FUN_1026705b();
    iVar3 = iVar3 + 1;
    *param_1 = cVar1;
    if (iVar3 == 3) {
      __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
      unget(param_2,cVar1);
      cVar1 = FUN_1026705b();
      *param_1 = cVar1;
      while ((cVar1 == "INITY"[iVar4] || (cVar1 == "inity"[iVar4]))) {
        cVar1 = FUN_1026705b();
        iVar4 = iVar4 + 1;
        *param_1 = cVar1;
        if (iVar4 == 5) {
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                    (param_2,cVar1);
          return 3;
        }
      }
      uVar2 = FID_conflict_operator__();
      return (uVar2 & 0xff ^ 1) * 4 + 3;
    }
  }
  FID_conflict_operator__();
  return 7;
}

