/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266cd2 */

/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::write_character(wchar_t * const,unsigned
   int,wchar_t * &,unsigned int &,char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
write_character(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
               wchar_t *param_1,uint param_2,wchar_t **param_3,uint *param_4,char param_5)

{
  ushort *puVar1;
  int iVar2;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)this >> 0x10);
  local_8 = (ushort)(byte)param_5;
  local_c = this;
  puVar1 = ___pctype_func();
  if ((short)puVar1[(byte)param_5] < 0) {
    iVar2 = string_input_adapter<char>::get((string_input_adapter<char> *)(this + 8));
    local_8 = CONCAT11((char)iVar2,(undefined1)local_8);
  }
  local_c = (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *)
            CONCAT22(local_c._2_2_,0x3f);
  FUN_1027810f(&local_c,&local_8,*(undefined4 *)(**(int **)(this + 0x68) + 4),*(int **)(this + 0x68)
              );
  **param_3 = (short)param_5;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}

