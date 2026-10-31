/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006e3b */

undefined4 FUN_10006e3b(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 auStack_4c [24];
  undefined1 local_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  puStack_50 = auStack_4c;
  local_14 = DAT_10388d00 ^ (uint)auStack_4c;
  puStack_58 = &local_14;
  if (param_3 < 10) {
    local_16[1] = (byte)param_3 | 0x30;
    puStack_58 = (uint *)(local_16 + 1);
  }
  else {
    do {
      puVar2 = puStack_58;
      uVar1 = param_3;
      *(undefined2 *)((int)puVar2 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar1 % 100) * 2);
      puStack_58 = (uint *)((int)puVar2 + -2);
      param_3 = uVar1 / 100;
    } while (999 < uVar1);
    if (99 < uVar1) {
      *(byte *)((int)puVar2 + -3) = (byte)(uVar1 / 100) | 0x30;
      puStack_58 = (uint *)((int)puVar2 + -3);
    }
  }
  iVar3 = (int)&local_14 - (int)puStack_58;
  if (iVar3 < 0x19) {
    uStack_5c = 0x10006ebe;
    puStack_54 = (undefined1 *)iVar3;
    thunk_FUN_10006e05();
    puStack_54 = auStack_4c + iVar3;
  }
  else {
    puStack_54 = local_34;
  }
  puStack_58 = (uint *)auStack_4c;
  puStack_50 = (undefined1 *)param_2;
  uStack_5c = param_1;
  uStack_60 = 0x10006ecf;
  FUN_10006bdf();
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_4c)) {
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_10006ef7;
    FUN_102283e0();
  }
  return param_1;
}

