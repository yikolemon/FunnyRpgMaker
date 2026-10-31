/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418c3a */

void __fastcall FUN_00418c3a(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = param_1[1];
  if (DVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00483bb0(1);
  }
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    iVar3 = FUN_00483cb0((HANDLE)*param_1,param_1[1],(DWORD *)0x0);
    if (iVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00483bb0(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00483bb0(5);
}

