/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00490b0a */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_00490b0a(FILE *param_1)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  uint uVar3;
  undefined *puVar4;
  undefined *local_20;
  void *local_14 [2];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0050cdd0;
  uStack_c = 0x490b16;
  if (param_1 == (FILE *)0x0) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_00495c88();
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  bVar1 = false;
  __lock_file(param_1);
  local_8 = (undefined *)0x0;
  if (((uint)param_1->_flag >> 0xc & 1) == 0) {
    uVar3 = __fileno(param_1);
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      local_20 = &DAT_0051b0e0;
    }
    else {
      local_20 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar3 >> 6]);
    }
    puVar4 = &DAT_0051b0e0;
    if (local_20[0x29] != '\0') goto LAB_00490bbf;
    if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
      puVar4 = (undefined *)((uVar3 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar3 >> 6]);
    }
    if ((puVar4[0x2d] & 1) != 0) goto LAB_00490bbf;
  }
  bVar1 = true;
LAB_00490bbf:
  if (!bVar1) {
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_00495c88();
    FUN_00495a50(&DAT_0050e8c0,(int)local_14,0xfffffffe);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  uVar3 = __fgetc_nolock(param_1);
  local_8 = (undefined *)0xfffffffe;
  FUN_00490c1b();
  ExceptionList = local_14[0];
  return uVar3;
}

