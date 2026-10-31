/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d2089 */

byte * FUN_100d2089(undefined2 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  uint local_18;
  
  local_18 = param_2;
  if (param_3 != 0) {
    do {
      puVar5 = param_1;
      uVar8 = __aulldiv(local_18,param_3,100000000,0);
      uVar1 = (uint)uVar8;
      iVar2 = 0;
      uVar4 = uVar1 * -100000000 + local_18;
      do {
        uVar3 = uVar4 / 100;
        *(undefined2 *)((int)puVar5 + iVar2 + -2) =
             *(undefined2 *)(&DAT_1028b5ac + (uVar4 % 100) * 2);
        iVar2 = iVar2 + -2;
        uVar4 = uVar3;
      } while (iVar2 != -6);
      puVar5[-4] = *(undefined2 *)(&DAT_1028b5ac + uVar3 * 2);
      uVar4 = param_3 >> 8;
      param_3 = (uint)((ulonglong)uVar8 >> 0x20);
      param_1 = puVar5 + -4;
      local_18 = uVar1;
    } while (0x5f5e0 < uVar4);
    param_1 = puVar5 + -4;
  }
  if (local_18 < 10) {
    *(byte *)((int)param_1 + -1) = (byte)local_18 | 0x30;
    pbVar6 = (byte *)((int)param_1 + -1);
  }
  else {
    pbVar6 = (byte *)((int)param_1 + -1);
    do {
      pbVar7 = pbVar6;
      uVar4 = local_18;
      *(undefined2 *)(pbVar7 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar4 % 100) * 2);
      pbVar6 = pbVar7 + -2;
      local_18 = uVar4 / 100;
    } while (999 < uVar4);
    if (uVar4 < 100) {
      pbVar6 = pbVar7 + -1;
    }
    else {
      *pbVar6 = (byte)(uVar4 / 100) | 0x30;
    }
  }
  return pbVar6;
}

