/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074346 */

void __fastcall FUN_10074346(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2a50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  local_18 = param_1[0xd];
  if (local_18 != 0) {
    local_8 = 0;
    piVar2 = &local_18;
    if ((*(int **)(local_18 + 4) != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(**(int **)(local_18 + 4) + 8))(),
       piVar2 = (int *)local_14, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
      piVar2 = (int *)local_14;
    }
    local_14 = (undefined1 *)piVar2;
    local_8 = 0xffffffff;
    FUN_102283a0(local_18,8);
    ExceptionList = local_10;
    pvVar1 = ExceptionList;
  }
  ExceptionList = pvVar1;
  return;
}

