/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266262 */

void FUN_10266262(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,__crt_locale_pointers *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  char *unaff_ESI;
  int local_9c;
  char local_98 [8];
  char local_90;
  int local_8c;
  int local_88;
  int local_84;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> local_80 [120];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((param_3 == 0) || (param_5 == 0)) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else {
    iVar2 = FUN_10272090(param_3,param_4);
    FUN_1025be8b(param_6);
    local_88 = param_3 + iVar2;
    local_8c = param_3;
    local_84 = param_3;
    __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
    input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
              (local_80,(string_input_adapter<char> *)&local_8c,CONCAT44(param_5,param_2),local_98,
               param_7,unaff_ESI);
    FUN_10266aae();
    if (local_90 != '\0') {
      *(uint *)(local_9c + 0x350) = *(uint *)(local_9c + 0x350) & 0xfffffffd;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

