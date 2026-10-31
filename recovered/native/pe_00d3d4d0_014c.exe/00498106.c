/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00498106 */

/* Library Function - Single Match
    ___acrt_execute_uninitializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___acrt_execute_uninitializers(int param_1,int param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    pcVar1 = *(code **)(param_2 + -4);
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00508898)(0);
      (*pcVar1)();
    }
  }
  return 1;
}

