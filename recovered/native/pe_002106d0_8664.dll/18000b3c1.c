/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000b3c1 */

longlong * FUN_18000b3c1(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_18023d240(local_2c,0);
  plVar1 = DAT_1804174c0;
  local_38 = DAT_1804174c0;
  uVar2 = FUN_18000cbd0(&DAT_1804174b0);
  plVar3 = (longlong *)FUN_18000cc4a(param_1,uVar2);
  if ((plVar3 == (longlong *)0x0) && (plVar3 = plVar1, plVar1 == (longlong *)0x0)) {
    lVar4 = FUN_18000cc8c(&local_38,param_1);
    plVar1 = local_38;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000cdb9();
    }
    FUN_18023ccb0(local_38);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_1804174c0 = local_38;
    plVar3 = local_38;
  }
  FUN_18023d290(local_2c);
  return plVar3;
}

