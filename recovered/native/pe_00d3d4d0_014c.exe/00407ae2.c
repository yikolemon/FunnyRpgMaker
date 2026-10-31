/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407ae2 */

void __fastcall FUN_00407ae2(undefined4 *param_1)

{
  void *pvVar1;
  LPVOID *ppvVar2;
  undefined4 *puVar3;
  LPVOID local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00418000;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  local_18 = (LPVOID)param_1[0xd];
  if (local_18 != (LPVOID)0x0) {
    local_8 = 0;
    ppvVar2 = &local_18;
    if ((*(int **)((int)local_18 + 4) != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(**(int **)((int)local_18 + 4) + 8))(),
       ppvVar2 = (LPVOID *)local_14, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
      ppvVar2 = (LPVOID *)local_14;
    }
    local_14 = (undefined1 *)ppvVar2;
    local_8 = 0xffffffff;
    FUN_0047f280(local_18);
    ExceptionList = local_10;
    pvVar1 = ExceptionList;
  }
  ExceptionList = pvVar1;
  return;
}

