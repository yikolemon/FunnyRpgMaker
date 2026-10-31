/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233760 */

int FUN_10233760(int param_1,int param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -1;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 4),(PSRWLOCK)(param_2 + 8),param_3,0);
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  *(DWORD *)(param_2 + 0x28) = DVar2;
  return (-(uint)(BVar1 != 0) & 0xfffffffe) + 2;
}

