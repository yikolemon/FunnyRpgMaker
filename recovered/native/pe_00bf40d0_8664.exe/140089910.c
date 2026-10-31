/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089910 */

void FUN_140089910(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (param_1[0xc] != 0) {
    if (*(longlong *)(param_1[0xc] + 8) != 0) {
      lVar1 = (*(code *)PTR__guard_dispatch_icall_1401200f0)();
      if (lVar1 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar1,1);
      }
    }
    FUN_1400863f0();
    return;
  }
  return;
}

