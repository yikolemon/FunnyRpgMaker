/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400139c4 */

longlong * FUN_1400139c4(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140188dc0(local_2c,0);
  plVar1 = DAT_140f2a3f8;
  local_38 = DAT_140f2a3f8;
  uVar2 = FUN_140013ad4(&DAT_140f2abc8);
  plVar3 = (longlong *)FUN_140013b4e(param_1,uVar2);
  if ((plVar3 == (longlong *)0x0) && (plVar3 = plVar1, plVar1 == (longlong *)0x0)) {
    lVar4 = FUN_140013b90(&local_38,param_1);
    plVar1 = local_38;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_140013caf();
    }
    FUN_140189070(local_38);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_140f2a3f8 = local_38;
    plVar3 = local_38;
  }
  FUN_140188e10(local_2c);
  return plVar3;
}

