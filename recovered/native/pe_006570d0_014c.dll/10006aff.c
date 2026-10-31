/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006aff */

undefined4 FUN_10006aff(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *local_50;
  undefined1 local_4c;
  undefined1 local_4b [23];
  undefined1 local_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  if ((int)param_3 < 0) {
    puVar5 = local_4b;
    local_4c = 0x2d;
    param_3 = -param_3;
  }
  else {
    puVar5 = &local_4c;
  }
  puVar3 = &local_14;
  if (param_3 < 10) {
    local_16[1] = (byte)param_3 | 0x30;
    puVar3 = (uint *)(local_16 + 1);
  }
  else {
    do {
      puVar2 = puVar3;
      uVar1 = param_3;
      *(undefined2 *)((int)puVar2 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar1 % 100) * 2);
      puVar3 = (uint *)((int)puVar2 + -2);
      param_3 = uVar1 / 100;
    } while (999 < uVar1);
    local_50 = puVar5;
    if (99 < uVar1) {
      *(byte *)((int)puVar2 + -3) = (byte)(uVar1 / 100) | 0x30;
      puVar3 = (uint *)((int)puVar2 + -3);
    }
  }
  puVar6 = local_34;
  iVar4 = (int)&local_14 - (int)puVar3;
  if (iVar4 <= (int)puVar6 - (int)puVar5) {
    thunk_FUN_10006e05(puVar3,iVar4,puVar5);
    puVar6 = puVar5 + iVar4;
  }
  FUN_10006bdf(param_1,&local_4c,puVar6,param_2);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

