/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007655e */

int __thiscall FUN_1007655e(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_18 [2];
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_18;
  iVar2 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    do {
      param_5 = param_5 + -1;
      iVar1 = FUN_1022d8f0(local_16,iVar2,param_4 - iVar2,param_2,param_1 + 8);
      if ((iVar1 < 0) || (iVar2 = iVar2 + iVar1 + (uint)(iVar1 == 0), param_5 == 0)) break;
    } while (iVar2 != param_4);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_18)) {
    return iVar2 - param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

