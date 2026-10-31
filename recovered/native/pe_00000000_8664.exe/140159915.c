/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140159915 */

undefined8
FUN_140159915(ulonglong *param_1,ushort *param_2,uint param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar5;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 < pbVar2 + 1) {
    return 8;
  }
  bVar1 = *pbVar2;
  switch(bVar1 & 3) {
  case 0:
    puVar11 = (ushort *)(pbVar2 + 2);
    if (param_2 < puVar11) {
      return 8;
    }
    bVar3 = (byte)*(ushort *)(pbVar2 + 1);
    uVar10 = (uint)((char)bVar3 >> 4);
    uVar7 = (int)((uint)bVar3 << 0x1c) >> 0x1c;
    bVar3 = bVar1 >> 2 & 3;
    uVar4 = (uint)bVar3;
    uVar6 = (uint)bVar3;
    puVar12 = puVar11;
    switch(bVar3) {
    case 1:
switchD_140159a56_caseD_1:
      puVar11 = (ushort *)((longlong)puVar12 + 1);
      if (param_2 < puVar11) {
        return 8;
      }
      bVar3 = (byte)*puVar12 >> 4;
      uVar5 = (uint)bVar3;
      uVar4 = (uint)bVar3;
      uVar6 = (byte)*puVar12 & 0xf;
      bVar1 = bVar1 >> 4;
      uVar8 = (uint)bVar1;
      uVar9 = (uint)bVar1;
      puVar12 = puVar11;
      switch(bVar1 & 3) {
      case 0:
        goto switchD_140159b3f_caseD_0;
      case 1:
        goto switchD_140159b3f_caseD_1;
      case 3:
        goto switchD_140159b3f_caseD_3;
      }
      goto switchD_140159b3f_caseD_2;
    case 2:
switchD_140159a56_caseD_2:
      puVar11 = puVar12 + 1;
      if (param_2 < puVar11) {
        return 8;
      }
      uVar5 = (uint)(byte)*puVar12;
      uVar4 = (uint)(byte)*puVar12;
      uVar6 = (uint)*(byte *)((longlong)puVar12 + 1);
      bVar1 = bVar1 >> 4;
      uVar8 = (uint)bVar1;
      uVar9 = (uint)bVar1;
      puVar12 = puVar11;
      switch(bVar1 & 3) {
      case 0:
        goto switchD_140159b3f_caseD_0;
      case 2:
        goto switchD_140159b3f_caseD_2;
      case 3:
        goto switchD_140159b3f_caseD_3;
      }
      goto switchD_140159b3f_caseD_1;
    case 3:
switchD_140159a56_caseD_3:
      puVar11 = puVar12 + 2;
      if (param_2 < puVar11) {
        return 8;
      }
      uVar4 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
      uVar6 = (uint)(ushort)(puVar12[1] << 8 | puVar12[1] >> 8);
    }
    break;
  case 1:
    puVar11 = (ushort *)(pbVar2 + 3);
    if (param_2 < puVar11) {
      return 8;
    }
    uVar10 = (uint)(char)pbVar2[1];
    uVar7 = (uint)(char)pbVar2[2];
    bVar3 = bVar1 >> 2 & 3;
    uVar4 = (uint)bVar3;
    uVar6 = (uint)bVar3;
    puVar12 = puVar11;
    switch(bVar3) {
    case 1:
      goto switchD_140159a56_caseD_1;
    case 2:
      goto switchD_140159a56_caseD_2;
    case 3:
      goto switchD_140159a56_caseD_3;
    }
    break;
  case 2:
    puVar11 = (ushort *)(pbVar2 + 5);
    if (param_2 < puVar11) {
      return 8;
    }
    uVar10 = (int)(short)((ushort)pbVar2[1] << 8) | (uint)pbVar2[2];
    uVar7 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
    bVar3 = bVar1 >> 2 & 3;
    uVar4 = (uint)bVar3;
    uVar6 = (uint)bVar3;
    puVar12 = puVar11;
    switch(bVar3) {
    case 1:
      goto switchD_140159a56_caseD_1;
    case 2:
      goto switchD_140159a56_caseD_2;
    case 3:
      goto switchD_140159a56_caseD_3;
    }
    break;
  case 3:
    puVar11 = (ushort *)(pbVar2 + 7);
    if (param_2 < puVar11) {
      return 8;
    }
    uVar10 = (int)((uint)pbVar2[3] << 8 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 0x18) >> 8;
    uVar7 = (int)((uint)pbVar2[6] << 8 | (uint)pbVar2[5] << 0x10 | (uint)pbVar2[4] << 0x18) >> 8;
    bVar3 = bVar1 >> 2 & 3;
    uVar4 = (uint)bVar3;
    uVar6 = (uint)bVar3;
    puVar12 = puVar11;
    switch(bVar3) {
    case 1:
      goto switchD_140159a56_caseD_1;
    case 2:
      goto switchD_140159a56_caseD_2;
    case 3:
      goto switchD_140159a56_caseD_3;
    }
  }
  bVar1 = bVar1 >> 4;
  uVar8 = (uint)bVar1;
  uVar9 = (uint)bVar1;
  puVar12 = puVar11;
  uVar5 = uVar4;
  switch(bVar1 & 3) {
  case 1:
switchD_140159b3f_caseD_1:
    uVar4 = uVar5;
    uVar9 = uVar8;
    puVar12 = (ushort *)((longlong)puVar11 + 1);
    if (param_2 < puVar12) {
      return 8;
    }
    param_3 = (int)(char)(byte)*puVar11 << 8;
    break;
  case 2:
switchD_140159b3f_caseD_2:
    uVar4 = uVar5;
    uVar9 = uVar8;
    puVar12 = puVar11 + 1;
    if (param_2 < puVar12) {
      return 8;
    }
    param_3 = (int)(short)((ushort)(byte)*puVar11 << 8) | (uint)*(byte *)((longlong)puVar11 + 1);
    break;
  case 3:
switchD_140159b3f_caseD_3:
    uVar4 = uVar5;
    uVar9 = uVar8;
    puVar12 = (ushort *)((longlong)puVar11 + 3);
    if (param_2 < puVar12) {
      return 8;
    }
    param_3 = (int)((uint)(byte)puVar11[1] << 8 |
                   (uint)*(byte *)((longlong)puVar11 + 1) << 0x10 | (uint)(byte)*puVar11 << 0x18) >>
              8;
  }
switchD_140159b3f_caseD_0:
  *param_4 = uVar10;
  *param_5 = uVar7;
  *param_6 = uVar4;
  *param_7 = uVar6;
  *param_8 = param_3;
  *param_9 = uVar9 >> 2;
  *param_1 = (ulonglong)puVar12;
  return 0;
}

