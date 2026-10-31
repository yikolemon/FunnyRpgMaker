/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027da48 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18027da48(undefined8 *param_1)

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
  lVar3 = FUN_1802910d8();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_1802969b4();
  if (iVar1 == 2) {
    iVar1 = FUN_180291f2c(1);
    *(bool *)(param_1 + 4) = iVar1 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_18027d9d8(uVar2);
  FUN_18027dc24(uVar2);
  return;
}

