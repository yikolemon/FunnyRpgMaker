/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273380 */

void FUN_10273380(int param_1)

{
  code *pcVar1;
  
  if ((code *)PTR_guard_check_icall_1035d810 != guard_check_icall) {
    if ((*(uint *)(param_1 + 0xc4) < *(uint *)((int)Self + 8)) ||
       (*(uint *)((int)Self + 4) < *(uint *)(param_1 + 0xc4))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}

