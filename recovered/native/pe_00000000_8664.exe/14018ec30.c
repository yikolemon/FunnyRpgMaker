/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018ec30 */

void FUN_14018ec30(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_1401a010c(2);
  iVar4 = FUN_14018ef80();
  _set_fmode(iVar4);
  uVar5 = FUN_14018e470();
  puVar2 = (undefined4 *)FUN_1401932e8();
  *puVar2 = uVar5;
  cVar3 = FUN_140188d20(1);
  if (cVar3 != '\0') {
    FUN_14018f000();
    FUN_140188b50(FUN_14018f050);
    uVar5 = FUN_14018e380();
    iVar4 = FUN_14019e11c(uVar5);
    if (iVar4 == 0) {
      FUN_14018ef90();
      iVar4 = FUN_14018efd0();
      if (iVar4 != 0) {
        FUN_140193320(FUN_14018e470);
      }
      _guard_check_icall();
      _guard_check_icall();
      iVar4 = FUN_14018e470();
      _configthreadlocale(iVar4);
      cVar3 = FUN_14018efa0();
      if (cVar3 != '\0') {
        thunk_FUN_14019f320();
      }
      FUN_14018e470();
      iVar4 = thunk_FUN_14018e470();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  FUN_14018e4a0(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

