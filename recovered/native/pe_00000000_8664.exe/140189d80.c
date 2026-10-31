/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189d80 */

undefined8 FUN_140189d80(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),0xffffffff,0);
  if (BVar1 != 0) {
    DVar2 = GetCurrentThreadId();
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
    *(DWORD *)(param_2 + 0x48) = DVar2;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

