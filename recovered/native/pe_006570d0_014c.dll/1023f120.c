/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023f120 */

undefined4 __thiscall
FUN_1023f120(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x20);
  (*(code *)PTR_guard_check_icall_1035d810)
            (param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  (*pcVar1)();
  return param_2;
}

