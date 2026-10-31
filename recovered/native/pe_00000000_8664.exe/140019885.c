/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019885 */

char Unwind_140019885(undefined8 param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  return in_AL + (char)((ulonglong)param_1 >> 8);
}

