/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105df0 */

void FUN_140105df0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_140115484(1);
  iVar4 = FUN_140106140();
  _set_fmode(iVar4);
  uVar5 = FUN_1400de040();
  puVar2 = (undefined4 *)FUN_14010b4f8();
  *puVar2 = uVar5;
  cVar3 = FUN_1400d3910(1);
  if (cVar3 != '\0') {
    FUN_1401061d0();
    FUN_1400d3740(FUN_140106220);
    uVar5 = FUN_1400ddfb0();
    iVar4 = FUN_1401132ec(uVar5);
    if (iVar4 == 0) {
      FUN_140106150();
      iVar4 = FUN_1401061a0();
      if (iVar4 != 0) {
        FUN_14010b530(FUN_1400de040);
      }
      _guard_check_icall();
      _guard_check_icall();
      iVar4 = FUN_1400de040();
      _configthreadlocale(iVar4);
      cVar3 = FUN_140106160();
      if (cVar3 != '\0') {
        thunk_FUN_140114c88();
      }
      FUN_1400de040();
      iVar4 = thunk_FUN_1400de040();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  FUN_1400de070(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

