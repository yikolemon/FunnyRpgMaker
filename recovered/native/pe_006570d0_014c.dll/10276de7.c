/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276de7 */

/* Library Function - Single Match
    ___acrt_execute_initializers
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 ___acrt_execute_initializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*(code *)PTR_guard_check_icall_1035d810)();
        cVar3 = (*pcVar2)();
        if (cVar3 == '\0') break;
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != param_2);
    if (puVar4 != param_2) {
      if (puVar4 != param_1) {
        puVar4 = puVar4 + -1;
        do {
          if ((puVar4[-1] != 0) && (pcVar2 = (code *)*puVar4, pcVar2 != (code *)0x0)) {
            (*(code *)PTR_guard_check_icall_1035d810)(0);
            (*pcVar2)();
          }
          puVar1 = puVar4 + -1;
          puVar4 = puVar4 + -2;
        } while (puVar1 != param_1);
      }
      return 0;
    }
  }
  return 1;
}

