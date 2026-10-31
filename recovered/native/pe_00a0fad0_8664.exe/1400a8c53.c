/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a8c53 */

longlong * FUN_1400a8c53(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1400d39b0(local_2c,0);
  plVar1 = DAT_1401cc950;
  local_38 = DAT_1401cc950;
  uVar2 = FUN_14000795c(&DAT_1401cc838);
  plVar3 = (longlong *)FUN_14000b510(param_1,uVar2);
  if ((plVar3 == (longlong *)0x0) && (plVar3 = plVar1, plVar1 == (longlong *)0x0)) {
    lVar4 = FUN_1400a8d64(&local_38,param_1);
    plVar1 = local_38;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b671();
    }
    FUN_1400d3ca0(local_38);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_1401cc950 = local_38;
    plVar3 = local_38;
  }
  FUN_1400d3a00(local_2c);
  return plVar3;
}

