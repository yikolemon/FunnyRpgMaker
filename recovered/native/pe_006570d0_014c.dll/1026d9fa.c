/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d9fa */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1026d9fa(FILE *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *local_20;
  void *local_14 [2];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10382b98;
  uStack_c = 0x1026da06;
  if (param_1 == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  bVar1 = false;
  __lock_file(param_1);
  local_8 = (undefined *)0x0;
  if (((uint)param_1->_flag >> 0xc & 1) == 0) {
    uVar3 = __fileno(param_1);
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      local_20 = &DAT_1039b678;
    }
    else {
      local_20 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar3 >> 6]);
    }
    puVar5 = &DAT_1039b678;
    if (local_20[0x29] != '\0') goto LAB_1026daaf;
    if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
      puVar5 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_103a5230)[(int)uVar3 >> 6]);
    }
    if ((puVar5[0x2d] & 1) != 0) goto LAB_1026daaf;
  }
  bVar1 = true;
LAB_1026daaf:
  if (!bVar1) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    FUN_10273c70(&DAT_10388d00,local_14,0xfffffffe);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  uVar4 = __fgetc_nolock(param_1);
  local_8 = (undefined *)0xfffffffe;
  FUN_1026db0b();
  ExceptionList = local_14[0];
  return uVar4;
}

