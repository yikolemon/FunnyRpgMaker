/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093908 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140093908(undefined8 *param_1)

{
  DWORD dwExitCode;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  INT_PTR IVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
    ExitThread(dwExitCode);
  }
  lVar3 = FUN_1400a1528();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_1400a5e24();
  if (iVar1 == 2) {
    IVar4 = FUN_1400a2160(1);
    *(bool *)(param_1 + 4) = (int)IVar4 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_140093898(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_1400939e0(uVar2);
}

