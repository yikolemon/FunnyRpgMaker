/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc1a0 */

undefined4 __thiscall FUN_100cc1a0(undefined4 param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_100bee20(&local_20);
  do {
    if ((SBORROW4(local_1c,param_4) != SBORROW4(local_1c - param_4,(uint)(local_20 < param_3))) ==
        (int)((local_1c - param_4) - (uint)(local_20 < param_3)) < 0) {
      uVar1 = 1;
LAB_100cc225:
      if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    local_28 = param_3 - local_20;
    local_24 = (param_4 - local_1c) - (uint)(param_3 < local_20);
    uVar1 = FUN_100bef0f(&local_28);
    iVar2 = FUN_10233760(param_1,*param_2,uVar1);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_100cc225;
    }
    FUN_100bee20(&local_20);
  } while( true );
}

