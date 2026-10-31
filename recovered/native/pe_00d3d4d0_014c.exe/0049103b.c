/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049103b */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_0049103b(byte param_1,FILE *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *local_20;
  void *local_14 [2];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0050ce10;
  uStack_c = 0x491047;
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 7) = 1;
    param_3[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  __lock_file(param_2);
  local_8 = (undefined *)0x0;
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    uVar2 = __fileno(param_2);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      local_20 = &DAT_0051b0e0;
    }
    else {
      local_20 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar2 >> 6]);
    }
    puVar3 = &DAT_0051b0e0;
    if (local_20[0x29] == '\0') {
      if ((uVar2 != 0xffffffff) && (uVar2 != 0xfffffffe)) {
        puVar3 = (undefined *)((uVar2 & 0x3f) * 0x38 + (&DAT_00521cc8)[(int)uVar2 >> 6]);
      }
      if ((puVar3[0x2d] & 1) == 0) goto LAB_004910f7;
    }
    bVar1 = false;
  }
  else {
LAB_004910f7:
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined1 *)(param_3 + 7) = 1;
    param_3[6] = 0x16;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    FUN_00495a50(&DAT_0050e8c0,(int)local_14,0xfffffffe);
    ExceptionList = local_14[0];
    return 0xffffffff;
  }
  uVar2 = FUN_0049100e(param_1,param_2,param_3);
  local_8 = (undefined *)0xfffffffe;
  FUN_00491167();
  ExceptionList = local_14[0];
  return uVar2;
}

