/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026df2b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1026df2b(undefined4 param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *local_20;
  void *local_14 [2];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10382bd8;
  uStack_c = 0x1026df37;
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 0x1c) = 1;
    *(undefined4 *)(param_3 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_3);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  __lock_file(param_2);
  local_8 = (undefined *)0x0;
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(param_2);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      local_20 = &DAT_1039b678;
    }
    else {
      local_20 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar2 >> 6]);
    }
    puVar4 = &DAT_1039b678;
    if (local_20[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar4 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar2 >> 6]);
      }
      if ((puVar4[0x2d] & 1) == 0) goto LAB_1026dfe7;
    }
    bVar1 = false;
  }
  else {
LAB_1026dfe7:
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined1 *)(param_3 + 0x1c) = 1;
    *(undefined4 *)(param_3 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_3);
    FUN_10273c70(&DAT_10388d00,local_14,0xfffffffe);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  uVar3 = FUN_1026defe(param_1,param_2,param_3);
  local_8 = (undefined *)0xfffffffe;
  FUN_1026e057();
  ExceptionList = local_14[0];
  return uVar3;
}

