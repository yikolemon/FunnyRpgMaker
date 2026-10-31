/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f0760 */

void FUN_1400f0760(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 * 2 + 2;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_1400ddcd0(*plVar1,param_3 * 2 + 0x29);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_1400ddcd0(param_2,uVar3);
  return;
}

