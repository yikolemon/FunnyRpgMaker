/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266d8f */

undefined4 __thiscall
FUN_10266d8f(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1,
            undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_3c [28];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_8;
  
  uStack_1c._4_4_ = 0x10266d9f;
  uStack_8 = param_1;
  __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
  process_whitespace(param_1);
  uStack_1c._4_4_ = param_3;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uStack_1c._0_4_ = param_2;
  uStack_8 = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
             ((uint)uStack_8 & 0xffffff);
  FUN_10266fae(auStack_3c,param_1 + 8,*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),(int)&uStack_8 + 3);
  uStack_1c = FUN_10267108(uVar1);
  if (uStack_8._3_1_ == '\0') {
    uVar1 = 0;
  }
  else if (param_1[0x2e] ==
           (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
    uStack_20 = 0x10266dee;
    uVar1 = FUN_10266e3c();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

