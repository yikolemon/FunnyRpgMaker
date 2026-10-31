/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067b8d */

longlong * FUN_140067b8d(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  plVar1 = (longlong *)FUN_14001e961(param_1,0x28,&local_34);
  if (local_34 == 0) {
    *plVar1 = param_1;
    plVar1[1] = param_2;
    lVar2 = FUN_14001f231(param_1,8,0,param_3,0,&local_34);
    plVar1[2] = lVar2;
    if (local_34 == 0) {
      *(uint *)(plVar1 + 4) = param_3;
      plVar1[3] = lVar2;
      goto LAB_140067c0b;
    }
    FUN_14001c53d(param_1,(longlong)plVar1);
  }
  plVar1 = (longlong *)0x0;
LAB_140067c0b:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
}

