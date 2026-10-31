/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102672d0 */

uint __thiscall
FUN_102672d0(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1,
            int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *local_24;
  undefined8 local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  pwVar6 = (wchar_t *)0x0;
  if (param_1[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    puVar3 = *(undefined4 **)(param_1 + 0x6c);
    *(undefined4 **)(param_1 + 0x6c) = puVar3 + 1;
    pwVar6 = (wchar_t *)*puVar3;
    if (pwVar6 == (wchar_t *)0x0) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x16;
      puVar3 = (undefined4 *)FUN_10273ea8();
      goto LAB_10267305;
    }
    if ((*(uint *)param_1 & 1) == 0) goto LAB_10267349;
    *(undefined4 **)(param_1 + 0x6c) = puVar3 + 2;
    uVar5 = puVar3[1];
    if (uVar5 == 0) {
      if ((*(uint *)param_1 & 4) != 0) {
        __crt_stdio_input::string_input_adapter<char>::get
                  ((string_input_adapter<char> *)(param_1 + 8));
        *pwVar6 = L'\0';
      }
LAB_1026733c:
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0xc;
      goto LAB_10267305;
    }
  }
  else {
LAB_10267349:
    uVar5 = 0xffffffff;
  }
  local_14 = *(uint *)(param_1 + 0x30);
  local_18 = *(uint *)(param_1 + 0x34);
  local_10 = uVar5;
  if ((param_2 != 0) && (uVar5 != 0xffffffff)) {
    local_10 = uVar5 - 1;
  }
  local_20 = 0;
  local_20._4_4_ = 0;
  local_20._0_4_ = 0;
  local_8 = local_20._4_4_;
  local_c = (uint)local_20;
  local_24 = pwVar6;
  while( true ) {
    if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
    goto LAB_10267405;
    iVar4 = __crt_stdio_input::string_input_adapter<char>::get
                      ((string_input_adapter<char> *)(param_1 + 8));
    local_20 = CONCAT44(iVar4,(uint)local_20);
    cVar1 = FUN_10266d3f(param_2,iVar4);
    if (cVar1 == '\0') break;
    if (param_1[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
    {
      if (local_10 == 0) {
        if (uVar5 != 0xffffffff) {
          *pwVar6 = L'\0';
        }
        goto LAB_1026733c;
      }
      bVar2 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character
                        (param_1,pwVar6,uVar5,&local_24,&local_10,
                         (char)((ulonglong)local_20 >> 0x20));
      if (!bVar2) goto LAB_10267405;
    }
    bVar2 = 0xfffffffe < local_c;
    local_c = local_c + 1;
    local_8 = local_8 + bVar2;
  }
  __crt_stdio_input::string_input_adapter<char>::unget
            ((string_input_adapter<char> *)(param_1 + 8),local_20._4_4_);
LAB_10267405:
  uVar5 = local_c | local_8;
  puVar3 = (undefined4 *)0x0;
  if (uVar5 == 0) {
LAB_10267305:
    return (uint)puVar3 & 0xffffff00;
  }
  if ((param_2 == 0) && ((local_c != local_14 || (local_8 != local_18)))) {
    uVar5 = *(uint *)param_1 & 4;
    puVar3 = (undefined4 *)0x0;
    if (uVar5 == 0) goto LAB_10267305;
  }
  if ((param_1[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
     && (param_2 != 0)) {
    *local_24 = L'\0';
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}

