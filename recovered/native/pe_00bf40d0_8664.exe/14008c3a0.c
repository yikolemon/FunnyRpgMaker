/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008c3a0 */

void FUN_14008c3a0(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined7 extraout_var;
  
  FUN_140096950(1);
  uVar5 = FUN_14008c6f0();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140089990();
  puVar6 = (undefined4 *)FUN_14008ebfc();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_14008b7b0(1);
  if ((char)uVar5 != '\0') {
    FUN_14008c760();
    FUN_14008b5e0(0x14008c7b0);
    uVar5 = FUN_140086dd0();
    iVar4 = FUN_1400956cc((int)uVar5);
    if (iVar4 == 0) {
      FUN_14008c700();
      bVar2 = FUN_14008c730();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_14008ec40(0x140089990);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140089990();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_14008ade0();
      if (cVar3 != '\0') {
        thunk_FUN_1400963bc();
      }
      FUN_140089990();
      uVar5 = thunk_FUN_140089990();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_14008c330(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

