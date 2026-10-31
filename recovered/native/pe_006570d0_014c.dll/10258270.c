/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258270 */

uint FUN_10258270(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382830;
  if (DAT_103a4d34 < 1) {
    return 0;
  }
  DAT_103a4d34 = DAT_103a4d34 + -1;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_1022c4d0(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  if (DAT_1039cdfc == 2) {
    FUN_1022c690();
    FUN_10258640();
    FUN_102586b0();
    DAT_1039cdfc = 0;
    local_8 = 0;
    FUN_10258345();
    cVar2 = FUN_1022c570(param_1,0);
    local_8 = 0xfffffffe;
    FUN_10258354();
    ExceptionList = local_14;
    return (uint)(cVar2 != '\0');
  }
  FUN_10234d00(7);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

