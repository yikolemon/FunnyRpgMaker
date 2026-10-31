/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004823f0 */

undefined4 * __thiscall FUN_004823f0(void *this,byte param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  pvVar1 = *(LPVOID *)((int)this + 0x34);
  *(undefined ***)this = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    if (*(int **)((int)pvVar1 + 4) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)((int)pvVar1 + 4) + 8);
      (*(code *)PTR_guard_check_icall_00508898)();
      puVar3 = (undefined4 *)(*pcVar2)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        (*(code *)PTR_guard_check_icall_00508898)(1);
        (*pcVar2)();
      }
    }
    FUN_0047f280(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    FUN_0047f280(this);
  }
  return this;
}

