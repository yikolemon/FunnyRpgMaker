/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258120 */

undefined4 FUN_10258120(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382810;
  ExceptionList = &local_14;
  cVar3 = FUN_1022c530(0,DAT_10388d00 ^ (uint)&stack0xfffffffc);
  if (cVar3 != '\0') {
    FUN_1022c4d0();
    bVar2 = true;
    local_8 = 0;
    if (DAT_1039cdfc != 0) {
      FUN_10234d00(7);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    DAT_1039cdfc = 1;
    cVar3 = FUN_1022c5e0();
    if (cVar3 != '\0') {
      FUN_10258680();
      FUN_10258630();
      FUN_10258650();
      iVar4 = __initterm_e(&DAT_1035d8d8,&DAT_1035d8f0);
      if (iVar4 == 0) {
        cVar3 = FUN_1022c660();
        if (cVar3 != '\0') {
          FUN_10269cc9(&DAT_1035d818,&DAT_1035d8d4);
          DAT_1039cdfc = 2;
          bVar2 = false;
        }
      }
    }
    local_8 = 0xfffffffe;
    FUN_10258242();
    if (!bVar2) {
      piVar5 = (int *)FUN_10258670();
      if (*piVar5 != 0) {
        cVar3 = FUN_1022c3f0(piVar5);
        if (cVar3 != '\0') {
          pcVar1 = (code *)*piVar5;
          (*(code *)PTR_guard_check_icall_1035d810)(param_1,2,param_2);
          (*pcVar1)();
        }
      }
      DAT_103a4d34 = DAT_103a4d34 + 1;
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

