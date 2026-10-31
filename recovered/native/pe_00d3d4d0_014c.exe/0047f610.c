/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f610 */

/* Library Function - Single Match
    public: __thiscall std::locale::~locale(void)
   
   Library: Visual Studio 2019 Release */

void __thiscall std::locale::~locale(locale *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (*(int **)(this + 4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 4) + 8);
    (*(code *)PTR_guard_check_icall_00508898)();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      (*(code *)PTR_guard_check_icall_00508898)(1);
      (*pcVar1)();
    }
  }
  return;
}

