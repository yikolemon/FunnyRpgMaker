/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239010 */

undefined2 * __thiscall
FUN_10239010(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  char cVar2;
  
  if (param_3 == param_4) {
    return param_3;
  }
  do {
    pcVar1 = *(code **)(*param_1 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)(param_2,*param_3);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return param_3;
    }
    param_3 = param_3 + 1;
  } while (param_3 != param_4);
  return param_3;
}

