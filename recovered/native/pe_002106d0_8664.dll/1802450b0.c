/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802450b0 */

undefined4 FUN_1802450b0(longlong param_1,longlong param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),param_3,0);
  uVar3 = 2;
  if (BVar1 != 0) {
    uVar3 = 0;
  }
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return uVar3;
}

