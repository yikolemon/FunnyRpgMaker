/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5e70 */

void FUN_1400a5e70(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_14008c8b0(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    pvVar2 = FUN_14009d690();
    *(PEXCEPTION_RECORD *)((longlong)pvVar2 + 0x20) = param_1;
    pvVar2 = FUN_14009d690();
    *(longlong *)((longlong)pvVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_14009ca6c();
  }
  return;
}

