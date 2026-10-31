/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043d14 */

void __fastcall FUN_10043d14(undefined4 *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  
  DVar1 = param_1[1];
  if (DVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(1);
  }
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    iVar3 = FUN_1022d090(*param_1,param_1[1],0);
    if (iVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(5);
}

