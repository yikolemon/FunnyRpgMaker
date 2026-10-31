/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea406 */

int * __thiscall
FUN_100ea406(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_24;
  int *local_20;
  undefined1 local_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  puVar2 = (undefined4 *)*param_1;
  if (param_8 == param_5) {
    param_2[1] = 0;
    *param_2 = (int)puVar2;
    param_2[2] = param_5;
  }
  else {
    iVar3 = param_1[3];
    local_24 = param_5 - iVar3;
    local_20 = param_2;
    if (puVar2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar2;
    }
    if (local_24 < (uint)((param_1[4] + iVar3) - param_8)) {
      FUN_100ea505(local_1c,param_1,iVar3,uVar4,param_5,uVar4,param_8);
      uVar5 = param_1[3];
      param_5 = param_5 - param_8;
      do {
        FUN_100e1468(*(undefined4 *)(param_1[1] + (param_1[2] - 1U & uVar5) * 4));
        uVar5 = param_1[3] + 1;
        piVar1 = param_1 + 4;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar5 = 0;
        }
        param_1[3] = uVar5;
        param_5 = param_5 + 1;
      } while (param_5 != 0);
    }
    else {
      FUN_100ea5d2(local_1c,uVar4,param_8,param_1,param_1[4] + iVar3,uVar4,param_5);
      param_5 = param_5 - param_8;
      do {
        FUN_100e13c8();
        param_5 = param_5 + 1;
      } while (param_5 != 0);
      uVar5 = param_1[3];
    }
    iVar3 = *param_1;
    local_20[1] = 0;
    *local_20 = iVar3;
    local_20[2] = uVar5 + local_24;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

