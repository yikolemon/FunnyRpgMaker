/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c358 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14019c358(undefined8 *param_1)

{
  DWORD dwExitCode;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
    ExitThread(dwExitCode);
  }
  lVar3 = FUN_1401aecc8();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_1401b44f4();
  if (iVar1 == 2) {
    iVar1 = FUN_1401afacc(1);
    *(bool *)(param_1 + 4) = iVar1 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_14019c2e8(uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_14019c430(uVar2);
}

