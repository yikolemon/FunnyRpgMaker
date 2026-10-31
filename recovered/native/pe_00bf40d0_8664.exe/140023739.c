/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023739 */

ulonglong * FUN_140023739(longlong param_1,undefined1 (*param_2) [16],ulonglong *param_3)

{
  size_t sVar1;
  size_t sVar2;
  ulonglong *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  sVar1 = strlen((char *)param_2);
  sVar2 = strlen((char *)param_3);
  puVar3 = (ulonglong *)FUN_14001e961(param_1,(int)sVar2 + (int)sVar1 + 1,&local_34);
  if (local_34 == 0) {
    pauVar4 = FUN_14008dce0(param_2,0x2f);
    if (pauVar4 == (undefined1 (*) [16])0x0) {
      *(undefined1 *)puVar3 = 0;
    }
    else {
      strncpy((char *)puVar3,(char *)param_2,(longlong)pauVar4 + (1 - (longlong)param_2));
      *(undefined1 *)((longlong)pauVar4 + (longlong)puVar3 + (1 - (longlong)param_2)) = 0;
      param_2 = (undefined1 (*) [16])(*pauVar4 + 1);
    }
    FUN_1400b3fa0(puVar3,param_3);
    if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
      puVar3 = FUN_1400b3fa0(puVar3,(ulonglong *)param_2);
      return puVar3;
    }
  }
  else if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return (ulonglong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

