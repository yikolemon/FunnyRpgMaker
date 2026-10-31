/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000ad97 */

undefined4 FUN_1000ad97(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_4c [24];
  undefined1 local_34 [31];
  undefined1 uStack_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_4c;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    (&uStack_15)[iVar3] = (&DAT_1028b674)[param_3 & 0xf];
    param_3 = param_3 >> 4;
    iVar4 = iVar3 + -1;
  } while (param_3 != 0);
  if (iVar4 == -0x18 || -iVar4 < 0x18) {
    thunk_FUN_10006e05(&uStack_15 + iVar3,-iVar4,auStack_4c);
    puVar2 = auStack_4c + -iVar4;
  }
  else {
    puVar2 = local_34;
  }
  iVar4 = param_2[2];
  uVar1 = iVar4 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar4 = param_2[2];
    uVar1 = iVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined1 *)(param_2[1] + iVar4) = 0x30;
  iVar4 = param_2[2];
  uVar1 = iVar4 + 1;
  if ((uint)param_2[3] < uVar1) {
    (**(code **)*param_2)(uVar1);
    iVar4 = param_2[2];
    uVar1 = iVar4 + 1;
  }
  param_2[2] = uVar1;
  *(undefined1 *)(param_2[1] + iVar4) = 0x78;
  FUN_10006bdf(param_1,auStack_4c,puVar2,param_2);
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_4c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

