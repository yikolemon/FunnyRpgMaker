/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007500 */

undefined4 FUN_10007500(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  uint local_74;
  undefined4 local_70;
  undefined1 local_6c [24];
  undefined1 local_54 [39];
  byte abStack_2d [17];
  undefined2 local_1c [4];
  uint local_14;
  
  uVar1 = CONCAT44(param_4,param_3);
  uVar9 = CONCAT44(local_74,local_70);
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  puVar7 = &local_14;
  if (param_4 != 0) {
    do {
      puVar2 = puVar7;
      uVar6 = (uint)((ulonglong)uVar1 >> 0x20);
      local_74 = (uint)((ulonglong)uVar9 >> 0x20);
      local_70 = (undefined4)uVar9;
      puStack_78 = (undefined1 *)0x0;
      puStack_7c = (undefined1 *)0x5f5e100;
      pbStack_80 = (byte *)uVar6;
      uVar9 = __aulldiv((int)uVar1);
      param_3 = (uint)uVar9;
      iVar3 = 0;
      uVar4 = param_3 * -100000000 + (int)uVar1;
      do {
        uVar5 = uVar4 / 100;
        *(undefined2 *)((int)puVar2 + iVar3 + -2) =
             *(undefined2 *)(&DAT_1028b5ac + (uVar4 % 100) * 2);
        iVar3 = iVar3 + -2;
        uVar4 = uVar5;
      } while (iVar3 != -6);
      *(undefined2 *)(puVar2 + -2) = *(undefined2 *)(&DAT_1028b5ac + uVar5 * 2);
      puVar7 = puVar2 + -2;
      uVar1 = uVar9;
    } while (0x5f5e0 < uVar6 >> 8);
    puVar7 = puVar2 + -2;
  }
  local_74 = (uint)((ulonglong)uVar9 >> 0x20);
  local_70 = (undefined4)uVar9;
  if (param_3 < 10) {
    *(byte *)((int)puVar7 + -1) = (byte)param_3 | 0x30;
    pbStack_80 = (byte *)((int)puVar7 + -1);
  }
  else {
    pbStack_80 = (byte *)((int)puVar7 + -1);
    do {
      pbVar8 = pbStack_80;
      uVar4 = param_3;
      *(undefined2 *)(pbVar8 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar4 % 100) * 2);
      pbStack_80 = pbVar8 + -2;
      param_3 = uVar4 / 100;
    } while (999 < uVar4);
    if (uVar4 < 100) {
      pbStack_80 = pbVar8 + -1;
    }
    else {
      *pbStack_80 = (byte)(uVar4 / 100) | 0x30;
    }
  }
  iVar3 = (int)&local_14 - (int)pbStack_80;
  if (iVar3 < 0x19) {
    puStack_78 = local_6c;
    puStack_7c = (undefined1 *)iVar3;
    thunk_FUN_10006e05();
    uVar9 = CONCAT44(local_74,local_70);
    puStack_7c = local_6c + iVar3;
  }
  else {
    puStack_7c = local_54;
  }
  local_74 = (uint)((ulonglong)uVar9 >> 0x20);
  local_70 = (undefined4)uVar9;
  pbStack_80 = local_6c;
  puStack_78 = (undefined1 *)param_2;
  FUN_10006bdf(param_1);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    puStack_78 = &UNK_10007653;
    FUN_102283e0();
  }
  return param_1;
}

