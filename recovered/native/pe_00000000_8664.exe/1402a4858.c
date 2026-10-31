/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402a4858 */

longlong * FUN_1402a4858(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14044e710(local_2c,0);
  plVar1 = DAT_1406292a0;
  local_38 = DAT_1406292a0;
  uVar2 = FUN_14021e0a0(&DAT_140629380);
  plVar3 = (longlong *)FUN_14021e11a(param_1,uVar2);
  if ((plVar3 == (longlong *)0x0) && (plVar3 = plVar1, plVar1 == (longlong *)0x0)) {
    lVar4 = FUN_1402a4d16(&local_38,param_1);
    plVar1 = local_38;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_14021e289();
    }
    FUN_14044e180(local_38);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_1406292a0 = local_38;
    plVar3 = local_38;
  }
  FUN_14044e760(local_2c);
  return plVar3;
}

