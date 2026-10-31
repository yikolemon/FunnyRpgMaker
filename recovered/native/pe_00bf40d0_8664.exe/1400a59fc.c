/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a59fc */

byte * FUN_1400a59fc(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                    longlong param_5)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  pbVar5 = (byte *)*param_2;
  pbVar4 = (byte *)0x0;
  puVar3 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      lVar1 = FUN_1400a5750(0,pbVar5,uVar6,param_4,param_5);
      if (lVar1 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (lVar1 == 0) break;
      pbVar5 = pbVar5 + lVar1;
      pbVar2 = pbVar4 + 1;
      if (lVar1 != 4) {
        pbVar2 = pbVar4;
      }
      pbVar4 = pbVar2 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      local_res8[0] = 0;
      lVar1 = FUN_1400a5750((ulonglong)local_res8,pbVar5,uVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pbVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return (byte *)0xffffffffffffffff;
      }
      if (lVar1 == 0) {
        *puVar3 = 0;
        pbVar5 = pbVar4;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar3 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar3 = puVar3 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar3 = (ushort)local_res8[0];
      pbVar5 = pbVar5 + lVar1;
      puVar3 = puVar3 + 1;
    }
    *param_2 = pbVar5;
    pbVar4 = (byte *)((longlong)puVar3 - (longlong)param_1 >> 1);
  }
  return pbVar4;
}

