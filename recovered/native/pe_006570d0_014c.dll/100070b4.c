/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100070b4 */

undefined4 FUN_100070b4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint local_78;
  undefined1 *local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b [23];
  undefined1 local_54 [39];
  byte abStack_2d [17];
  undefined2 local_1c [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_78;
  if (param_4 < 0) {
    local_74 = local_6b;
    local_6c = 0x2d;
    local_78 = -param_3;
    param_4 = -(uint)(param_3 != 0) - param_4;
  }
  else {
    local_78 = param_3;
    local_74 = &local_6c;
  }
  uVar1 = CONCAT44(param_4,local_78);
  puVar9 = &local_14;
  if (param_4 != 0) {
    do {
      puVar4 = puVar9;
      local_78 = (uint)uVar1;
      uVar6 = local_78;
      uVar12 = __aulldiv(uVar1,100000000,0);
      local_70 = (undefined4)((ulonglong)uVar12 >> 0x20);
      local_78 = (uint)uVar12;
      iVar5 = 0;
      uVar6 = local_78 * -100000000 + uVar6;
      do {
        uVar7 = uVar6 / 100;
        *(undefined2 *)((int)puVar4 + iVar5 + -2) =
             *(undefined2 *)(&DAT_1028b5ac + (uVar6 % 100) * 2);
        iVar5 = iVar5 + -2;
        uVar6 = uVar7;
      } while (iVar5 != -6);
      *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(&DAT_1028b5ac + uVar7 * 2);
      uVar2 = (ulonglong)uVar1 >> 0x28;
      puVar9 = puVar4 + -2;
      uVar1 = uVar12;
    } while (0x5f5e0 < (uint)uVar2);
    puVar9 = puVar4 + -2;
  }
  puVar3 = local_74;
  puVar8 = local_54;
  if (local_78 < 10) {
    *(byte *)((int)puVar9 + -1) = (byte)local_78 | 0x30;
    pbVar10 = (byte *)((int)puVar9 + -1);
  }
  else {
    uVar6 = local_78;
    pbVar10 = (byte *)((int)puVar9 + -1);
    do {
      pbVar11 = pbVar10;
      uVar7 = uVar6;
      *(undefined2 *)(pbVar11 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar7 % 100) * 2);
      pbVar10 = pbVar11 + -2;
      uVar6 = uVar7 / 100;
    } while (999 < uVar7);
    if (uVar7 < 100) {
      pbVar10 = pbVar11 + -1;
    }
    else {
      *pbVar10 = (byte)(uVar7 / 100) | 0x30;
    }
  }
  iVar5 = (int)&local_14 - (int)pbVar10;
  if (iVar5 <= (int)puVar8 - (int)local_74) {
    thunk_FUN_10006e05(pbVar10,iVar5,local_74);
    puVar8 = puVar3 + iVar5;
  }
  FUN_10006bdf(param_1,&local_6c,puVar8,param_2);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

