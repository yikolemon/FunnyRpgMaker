/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003f88 */

void __thiscall
FUN_10003f88(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4,char param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  uVar1 = param_1[5];
  if (uVar1 < param_2) {
    FUN_10004404(param_2 - param_1[4],local_18[0]);
    uVar1 = param_1[5];
  }
  else {
    param_1[4] = param_2;
  }
  puVar3 = param_1;
  if (7 < uVar1) {
    puVar3 = (undefined4 *)*param_1;
  }
  FUN_1025b2d0(puVar3,param_3,param_4 * 2);
  puVar2 = (undefined2 *)(param_4 * 2 + (int)puVar3);
  if (param_5 == '\x01') {
    *puVar2 = 0x5c;
    puVar2 = puVar2 + 1;
  }
  FUN_1025b2d0(puVar2,param_6,param_7 * 2);
  param_1[4] = param_2;
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined2 *)((int)param_1 + param_2 * 2) = 0;
  if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

