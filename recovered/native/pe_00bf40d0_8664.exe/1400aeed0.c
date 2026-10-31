/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aeed0 */

undefined8 FUN_1400aeed0(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  
  puVar2 = (uint *)param_4[7];
  uVar1 = *puVar2;
  FUN_14008ba00((ulonglong)param_2,(longlong)param_4,(int *)(puVar2 + (ulonglong)uVar1 * 4 + 1));
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    uVar3 = FUN_14008c8b0(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 1;
}

