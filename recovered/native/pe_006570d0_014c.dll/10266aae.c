/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266aae */

int __fastcall
FUN_10266aae(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  cVar1 = FUN_10266a13();
  if (cVar1 != '\0') {
    cVar1 = FUN_10266360();
    if (cVar1 != '\0') {
      do {
        bVar2 = __crt_stdio_input::format_string_parser<char>::advance
                          ((format_string_parser<char> *)(param_1 + 0x18));
        if (!bVar2) break;
        bVar2 = __crt_stdio_input::
                input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_state
                          (param_1);
      } while (bVar2);
      iVar5 = *(int *)(param_1 + 0x70);
      if ((iVar5 == 0) && (*(int *)(param_1 + 0x28) != 1)) {
        iVar3 = __crt_stdio_input::string_input_adapter<char>::get
                          ((string_input_adapter<char> *)(param_1 + 8));
        if (iVar3 == -1) {
          iVar5 = -1;
        }
        __crt_stdio_input::string_input_adapter<char>::unget
                  ((string_input_adapter<char> *)(param_1 + 8),iVar3);
      }
      if ((*(uint *)param_1 & 1) == 0) {
        return iVar5;
      }
      iVar3 = *(int *)(param_1 + 0x24);
      if (iVar3 == 0) {
        return iVar5;
      }
      piVar4 = (int *)FUN_10268ffd();
      *piVar4 = iVar3;
      FUN_10273ea8();
      return iVar5;
    }
  }
  return -1;
}

