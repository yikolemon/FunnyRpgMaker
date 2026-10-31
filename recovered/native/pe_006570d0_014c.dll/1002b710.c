/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002b710 */

/* WARNING: Removing unreachable block (ram,0x1002baf5) */

byte * FUN_1002b710(byte *param_1,byte *param_2,uint *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_40 [3];
  undefined1 local_3d;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 *local_30;
  uint *local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [12];
  uint local_14;
  
  puVar2 = param_3;
  local_14 = DAT_10388d00 ^ (uint)auStack_40;
  if ((int)param_2 - (int)param_1 < 2) {
    pbVar5 = param_1;
    if (param_1 == param_2) goto switchD_1002b796_caseD_7d;
  }
  else {
    bVar1 = param_1[1];
    bVar6 = 0;
    if (((bVar1 == 0x3c) || (bVar1 == 0x3e)) || (bVar1 == 0x5e)) goto LAB_1002b755;
  }
  bVar6 = *param_1;
LAB_1002b755:
  local_24 = 0;
  local_30 = &param_1;
  local_2c = param_3;
  local_28 = param_5;
  local_38 = param_5 - 1;
  local_34 = 1 << ((byte)param_5 & 0x1f);
  do {
    pbVar8 = param_2;
    pbVar5 = param_1;
    switch(bVar6) {
    case 0x20:
    case 0x2b:
      *puVar2 = (uint)(bVar6 == 0x20) * 0x400 + (*puVar2 & 0xfffff3ff) + 0x800;
    case 0x2d:
      FUN_1002bf5c(2,(local_34 & 0xe2a) != 0);
      goto LAB_1002b8f8;
    default:
      bVar1 = *param_1;
      if (bVar1 == 0x7d) goto switchD_1002b796_caseD_7d;
      bVar6 = bVar1 >> 2 & 0x1e;
      uVar3 = 0x3a550000 >> bVar6;
      if ((bVar1 >> 2 & 0x20) == 0) {
        uVar3 = 0U >> bVar6 | 0x3a550000 << 0x20 - bVar6;
      }
      pbVar7 = param_1 + (uVar3 & 3) + 1;
      if ((param_2 == pbVar7 || (int)param_2 - (int)pbVar7 < 0) || (bVar1 == 0x7b)) {
LAB_1002bb11:
        local_3d = 1;
        FUN_10025774();
                    /* WARNING: Subroutine does not return */
        FUN_102586e0(local_20,&DAT_103607ac);
      }
      bVar1 = *pbVar7;
      uVar4 = 1;
      if (bVar1 == 0x3c) {
        local_3c = 8;
      }
      else if (bVar1 == 0x5e) {
        local_3c = 0x18;
      }
      else if (bVar1 == 0x3e) {
        local_3c = 0x10;
      }
      else {
        uVar4 = 0;
        local_3c = 0;
      }
      FUN_1002bf5c(1,uVar4);
      FUN_1002c0d6(param_1,(int)pbVar7 - (int)param_1);
      *puVar2 = *puVar2 & 0xffffffc7 | local_3c;
      param_1 = pbVar5 + (uVar3 & 3) + 2;
      break;
    case 0x23:
      FUN_1002bf5c(3,local_38 < 0xb);
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x20;
      goto LAB_1002b8f8;
    case 0x2e:
      FUN_1002bf5c(6,(local_34 & 0x3e00) != 0);
      pbVar8 = param_2;
      param_1 = (byte *)FUN_1002bfc9(param_1,param_2,puVar2,puVar2 + 6,param_4);
      break;
    case 0x30:
      FUN_1002bf5c(4,1);
      if (10 < local_38) goto LAB_1002bb11;
      if ((*puVar2 & 0x38) == 0) {
        *(undefined1 *)(puVar2 + 1) = 0x30;
        *puVar2 = *puVar2 & 0xfffc7fc7 | 0x8020;
      }
      goto LAB_1002b8f8;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      FUN_1002bf5c(5,1);
      pbVar8 = param_2;
      uVar9 = FUN_1002c120(param_1,param_2,puVar2 + 2,puVar2 + 4,param_4);
      param_1 = (byte *)uVar9;
      *puVar2 = (int)((ulonglong)uVar9 >> 0x20) << 6 | *puVar2 & 0xffffff3f;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      FUN_1002bf5c(1,1);
      if (bVar6 == 0x3c) {
        uVar3 = 8;
      }
      else if (bVar6 == 0x5e) {
        uVar3 = 0x18;
      }
      else if (bVar6 == 0x3e) {
        uVar3 = 0x10;
      }
      else {
        uVar3 = 0;
      }
      *puVar2 = *puVar2 & 0xffffffc7 | uVar3;
      param_1 = param_1 + 1;
      pbVar8 = param_2;
      break;
    case 0x3f:
      goto switchD_1002b796_caseD_3f;
    case 0x41:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x61:
      uVar4 = 0xe00;
LAB_1002ba15:
      uVar10 = 4;
      goto LAB_1002baad;
    case 0x42:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x62:
      uVar4 = 0x1fe;
      uVar10 = 6;
      goto LAB_1002baad;
    case 0x45:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x65:
      uVar4 = 0xe00;
      goto LAB_1002baab;
    case 0x46:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x66:
      uVar4 = 0xe00;
LAB_1002ba8f:
      uVar10 = 2;
      goto LAB_1002baad;
    case 0x47:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x67:
      uVar4 = 0xe00;
      goto LAB_1002ba43;
    case 0x4c:
      FUN_1002bf5c(7,local_38 < 0xb);
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x40;
LAB_1002b8f8:
      param_1 = param_1 + 1;
      pbVar8 = param_2;
      break;
    case 0x58:
      *(byte *)((int)puVar2 + 1) = *(byte *)((int)puVar2 + 1) | 0x10;
    case 0x78:
      uVar4 = 0x1fe;
      goto LAB_1002ba15;
    case 99:
      if (param_5 == 7) {
        FUN_1002571d("invalid format specifier");
      }
      uVar4 = 0x1fe;
      uVar10 = 7;
      goto LAB_1002baad;
    case 100:
      uVar4 = 0x1fe;
      goto LAB_1002ba43;
    case 0x6f:
      uVar4 = 0x1fe;
      uVar10 = 5;
      goto LAB_1002baad;
    case 0x70:
      uVar4 = 0x5000;
LAB_1002ba43:
      uVar10 = 3;
      goto LAB_1002baad;
    case 0x73:
      uVar4 = 0x3080;
      goto LAB_1002ba8f;
    case 0x7d:
      goto switchD_1002b796_caseD_7d;
    }
    pbVar5 = param_1;
    if (param_1 == pbVar8) goto switchD_1002b796_caseD_7d;
    bVar6 = *param_1;
  } while( true );
switchD_1002b796_caseD_3f:
  uVar4 = 0x3100;
LAB_1002baab:
  uVar10 = 1;
LAB_1002baad:
  pbVar5 = (byte *)FUN_1002c05a(uVar10,uVar4);
switchD_1002b796_caseD_7d:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return pbVar5;
}

