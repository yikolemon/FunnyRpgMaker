/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026803d */

/* Library Function - Multiple Matches With Different Base Names
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(struct
   __crt_strtox::floating_point_string const &,double &)
   
   Library: Visual Studio 2019 Release */

void __thiscall
FID_conflict_convert_hexadecimal_string_to_floating_type<double>
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_3;
  _local_8 = CONCAT31((int3)((uint)param_1 >> 8),1);
  FUN_1026613b(param_2,&local_c);
  return;
}

