/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fcaa8 */

undefined4 __fastcall
FUN_101fcaa8(uint *param_1,ushort *param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint local_14;
  
  pbVar2 = (byte *)*param_1;
  if (param_2 < pbVar2 + 1) {
    return 8;
  }
  local_18 = param_3;
  bVar1 = *pbVar2;
  switch(bVar1 & 3) {
  case 0:
    puVar4 = (ushort *)(pbVar2 + 2);
    if (param_2 < puVar4) {
      return 8;
    }
    bVar3 = (byte)*(ushort *)(pbVar2 + 1);
    local_20 = (uint)((char)bVar3 >> 4);
    local_24 = (int)((uint)bVar3 << 0x1c) >> 0x1c;
    bVar3 = bVar1 >> 2 & 3;
    local_14 = (uint)bVar3;
    puVar5 = puVar4;
    uVar6 = local_14;
    switch(bVar3) {
    case 1:
switchD_101fcbd9_caseD_1:
      puVar5 = (ushort *)((int)puVar4 + 1);
      if (param_2 < puVar5) {
        return 8;
      }
      uVar6 = (uint)(byte)((byte)*puVar4 >> 4);
      local_14 = (byte)*puVar4 & 0xf;
      local_28 = (uint)(bVar1 >> 4);
      puVar4 = puVar5;
      switch(local_28 & 3) {
      case 0:
        goto switchD_101fccaa_caseD_0;
      case 1:
        goto switchD_101fccaa_caseD_1;
      case 3:
        goto switchD_101fccaa_caseD_3;
      }
      goto switchD_101fccaa_caseD_2;
    case 2:
switchD_101fcbd9_caseD_2:
      puVar5 = puVar4 + 1;
      if (param_2 < puVar5) {
        return 8;
      }
      uVar6 = (uint)(byte)*puVar4;
      local_14 = (uint)*(byte *)((int)puVar4 + 1);
      local_28 = (uint)(bVar1 >> 4);
      puVar4 = puVar5;
      switch(local_28 & 3) {
      case 0:
        goto switchD_101fccaa_caseD_0;
      case 2:
        goto switchD_101fccaa_caseD_2;
      case 3:
        goto switchD_101fccaa_caseD_3;
      }
      goto switchD_101fccaa_caseD_1;
    case 3:
switchD_101fcbd9_caseD_3:
      puVar5 = puVar4 + 2;
      if (param_2 < puVar5) {
        return 8;
      }
      uVar6 = (uint)(ushort)(*puVar4 << 8 | *puVar4 >> 8);
      local_14 = (uint)(ushort)(puVar4[1] << 8 | puVar4[1] >> 8);
    }
    break;
  case 1:
    puVar4 = (ushort *)(pbVar2 + 3);
    if (param_2 < puVar4) {
      return 8;
    }
    local_20 = (uint)(char)pbVar2[1];
    local_24 = (uint)(char)pbVar2[2];
    bVar3 = bVar1 >> 2 & 3;
    local_14 = (uint)bVar3;
    puVar5 = puVar4;
    uVar6 = local_14;
    switch(bVar3) {
    case 1:
      goto switchD_101fcbd9_caseD_1;
    case 2:
      goto switchD_101fcbd9_caseD_2;
    case 3:
      goto switchD_101fcbd9_caseD_3;
    }
    break;
  case 2:
    puVar4 = (ushort *)(pbVar2 + 5);
    if (param_2 < puVar4) {
      return 8;
    }
    local_20 = (int)(short)((ushort)pbVar2[1] << 8) | (uint)pbVar2[2];
    local_24 = (int)(short)((ushort)pbVar2[3] << 8) | (uint)pbVar2[4];
    bVar3 = bVar1 >> 2 & 3;
    local_14 = (uint)bVar3;
    puVar5 = puVar4;
    uVar6 = local_14;
    switch(bVar3) {
    case 1:
      goto switchD_101fcbd9_caseD_1;
    case 2:
      goto switchD_101fcbd9_caseD_2;
    case 3:
      goto switchD_101fcbd9_caseD_3;
    }
    break;
  case 3:
    puVar4 = (ushort *)(pbVar2 + 7);
    if (param_2 < puVar4) {
      return 8;
    }
    local_20 = (int)((uint)pbVar2[3] << 8 | (uint)pbVar2[2] << 0x10 | (uint)pbVar2[1] << 0x18) >> 8;
    local_24 = (int)((uint)pbVar2[6] << 8 | (uint)pbVar2[5] << 0x10 | (uint)pbVar2[4] << 0x18) >> 8;
    bVar3 = bVar1 >> 2 & 3;
    local_14 = (uint)bVar3;
    puVar5 = puVar4;
    uVar6 = local_14;
    switch(bVar3) {
    case 1:
      goto switchD_101fcbd9_caseD_1;
    case 2:
      goto switchD_101fcbd9_caseD_2;
    case 3:
      goto switchD_101fcbd9_caseD_3;
    }
  }
  local_28 = (uint)(bVar1 >> 4);
  puVar4 = puVar5;
  switch(local_28 & 3) {
  case 1:
switchD_101fccaa_caseD_1:
    puVar5 = (ushort *)((int)puVar4 + 1);
    if (param_2 < puVar5) {
      return 8;
    }
    local_18 = (int)(char)(byte)*puVar4 << 8;
    break;
  case 2:
switchD_101fccaa_caseD_2:
    puVar5 = puVar4 + 1;
    if (param_2 < puVar5) {
      return 8;
    }
    local_18 = (int)(short)((ushort)(byte)*puVar4 << 8) | (uint)*(byte *)((int)puVar4 + 1);
    break;
  case 3:
switchD_101fccaa_caseD_3:
    puVar5 = (ushort *)((int)puVar4 + 3);
    if (param_2 < puVar5) {
      return 8;
    }
    local_18 = (int)((uint)(byte)puVar4[1] << 8 |
                    (uint)*(byte *)((int)puVar4 + 1) << 0x10 | (uint)(byte)*puVar4 << 0x18) >> 8;
  }
switchD_101fccaa_caseD_0:
  *param_4 = local_20;
  *param_5 = local_24;
  *param_6 = uVar6;
  *param_7 = local_14;
  *param_8 = local_18;
  *param_9 = local_28 >> 2;
  *param_1 = (uint)puVar5;
  return 0;
}

