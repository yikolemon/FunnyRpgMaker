/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008891 */

longlong * FUN_140008891(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  FUN_140086460(local_2c,0);
  plVar1 = DAT_14013c928;
  local_38 = DAT_14013c928;
  uVar2 = FUN_1400050f0((longlong *)&DAT_14013c900);
  plVar3 = (longlong *)FUN_14000516a(param_1,uVar2);
  if ((plVar3 == (longlong *)0x0) && (plVar3 = plVar1, plVar1 == (longlong *)0x0)) {
    lVar4 = FUN_1400089a2((longlong *)&local_38,param_1);
    plVar1 = local_38;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1400052c5();
    }
    FUN_140086590(local_38);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_14013c928 = local_38;
    plVar3 = local_38;
  }
  FUN_1400864b0(local_2c);
  return plVar3;
}

