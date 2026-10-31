/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100765e8 */

int FUN_100765e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined1 local_1e [2];
  undefined4 ***local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_20;
  iVar3 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    while (iVar1 = FUN_100760c0(param_2,iVar3,param_4,&local_18,local_1e,&local_1c,&local_1c),
          iVar1 == 0) {
      param_5 = param_5 - ((undefined4 ****)local_1c == &local_1c);
      iVar3 = local_18;
      if ((param_5 == 0) || (local_18 == param_4)) goto LAB_10076660;
    }
    if (iVar1 == 3) {
      uVar2 = param_4 - iVar3;
      if (param_5 < (uint)(param_4 - iVar3)) {
        uVar2 = param_5;
      }
      iVar3 = iVar3 + uVar2;
    }
  }
LAB_10076660:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3 - param_3;
}

