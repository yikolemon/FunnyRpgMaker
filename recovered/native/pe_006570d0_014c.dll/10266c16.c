/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266c16 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  conversion_mode cVar4;
  undefined4 uVar5;
  
  switch(*(undefined4 *)(this + 0x40)) {
  case 0:
    cVar4 = 0;
    goto LAB_10266c27;
  case 1:
    cVar4 = 1;
    goto LAB_10266c27;
  case 2:
    uVar5 = 1;
    uVar3 = 0;
    break;
  case 3:
    uVar5 = 1;
    goto LAB_10266c41;
  case 4:
    uVar5 = 0;
    uVar3 = 8;
    break;
  case 5:
    uVar5 = 0;
LAB_10266c41:
    uVar3 = 10;
    break;
  case 6:
    uVar5 = 0;
    uVar3 = 0x10;
    break;
  case 7:
    bVar2 = process_floating_point_specifier(this);
    return bVar2;
  case 8:
    cVar4 = 8;
LAB_10266c27:
    bVar2 = process_string_specifier(this,cVar4);
    return bVar2;
  case 9:
    bVar2 = process_character_count_specifier(this);
    return bVar2;
  default:
    return false;
  }
  uVar1 = FUN_10266d8f(uVar3,uVar5);
  return (bool)uVar1;
}

