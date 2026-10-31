/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002bd2a */

/* WARNING: Removing unreachable block (ram,0x00018002c181) */

byte * FUN_18002bd2a(byte *param_1,byte *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  uint *local_b0;
  undefined1 local_9d;
  uint local_9c;
  byte *local_98;
  longlong local_90;
  byte **local_88;
  uint *local_80;
  int local_78;
  undefined4 local_6c;
  byte *local_68;
  byte *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  if ((longlong)param_2 - (longlong)param_1 < 2) {
    local_68 = param_1;
    if (param_1 == param_2) goto switchD_18002bdee_caseD_7d;
  }
  else if ((param_1[1] - 0x3c < 0x23) &&
          ((0x400000005U >> ((ulonglong)(param_1[1] - 0x3c) & 0x3f) & 1) != 0)) {
    bVar7 = 0;
    goto LAB_18002bd9a;
  }
  bVar7 = *param_1;
LAB_18002bd9a:
  local_6c = 0;
  local_88 = &local_68;
  uVar6 = 1 << ((byte)param_5 & 0x1f);
  local_78 = param_5;
  local_9c = param_5 - 1;
  local_80 = param_3;
  do {
    local_68 = param_1;
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      *param_3 = (uint)(bVar7 == 0x20) * 0x400 + (*param_3 & 0xfffff3ff) + 0x800;
    case 0x2d:
      FUN_18002c3ba(&local_6c,2,(uVar6 & 0xe2a) != 0);
      break;
    default:
      bVar7 = *param_1;
      if (bVar7 != 0x7d) {
        uVar2 = (ulonglong)((uint)(0x3a55000000000000 >> (bVar7 >> 2 & 0x3e)) & 3);
        pbVar8 = param_1 + uVar2 + 1;
        if (param_2 == pbVar8 || (longlong)param_2 - (longlong)pbVar8 < 0) {
          pcVar4 = "invalid format specifier";
LAB_18002c19f:
          local_9d = 1;
          FUN_180025c48(&local_60,pcVar4);
                    /* WARNING: Subroutine does not return */
          FUN_18026d5b0(&local_60,&DAT_180391580);
        }
        if (bVar7 == 0x7b) {
          pcVar4 = "invalid fill character \'{\'";
          goto LAB_18002c19f;
        }
        bVar7 = *pbVar8;
        uVar3 = 1;
        if (bVar7 == 0x3c) {
          uVar1 = 8;
        }
        else if (bVar7 == 0x5e) {
          uVar1 = 0x18;
        }
        else if (bVar7 == 0x3e) {
          uVar1 = 0x10;
        }
        else {
          uVar3 = 0;
          uVar1 = 0;
        }
        FUN_18002c3ba(&local_6c,1,uVar3);
        local_90 = (longlong)pbVar8 - (longlong)local_68;
        local_98 = local_68;
        FUN_18002c582(param_3,&local_98);
        *param_3 = *param_3 & 0xffffffc7 | uVar1;
        param_1 = param_1 + uVar2 + 2;
        goto LAB_18002bfff;
      }
      goto switchD_18002bdee_caseD_7d;
    case 0x23:
      FUN_18002c3ba(&local_6c,3,local_9c < 0xb);
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x20;
      break;
    case 0x2e:
      FUN_18002c3ba(&local_6c,6,(uVar6 & 0x3e00) != 0);
      local_b8 = param_4;
      param_1 = (byte *)FUN_18002c431(local_68,param_2,param_3,param_3 + 8);
      goto LAB_18002bfff;
    case 0x30:
      FUN_18002c3ba(&local_6c,4,1);
      if (10 < local_9c) {
        pcVar4 = "format specifier requires numeric argument";
        goto LAB_18002c19f;
      }
      if ((*param_3 & 0x38) == 0) {
        *(undefined1 *)(param_3 + 1) = 0x30;
        *param_3 = *param_3 & 0xfffc7fc7 | 0x8020;
      }
      break;
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
      FUN_18002c3ba(&local_6c,5,1);
      local_b8 = param_3 + 4;
      local_b0 = param_4;
      FUN_18002c5d5(&local_60,local_68,param_2,param_3 + 2);
      *param_3 = local_58 << 6 | *param_3 & 0xffffff3f;
      param_1 = local_60;
      goto LAB_18002bfff;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      FUN_18002c3ba(&local_6c,1,1);
      if (bVar7 == 0x3c) {
        uVar1 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar1 = 0x18;
      }
      else if (bVar7 == 0x3e) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 0;
      }
      *param_3 = *param_3 & 0xffffffc7 | uVar1;
      break;
    case 0x3f:
      goto switchD_18002bdee_caseD_3f;
    case 0x41:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x61:
      uVar3 = 4;
LAB_18002c113:
      uVar5 = 0xe00;
      goto LAB_18002c119;
    case 0x42:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x62:
      uVar3 = 6;
      goto LAB_18002c0f1;
    case 0x45:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x65:
      uVar3 = 1;
      goto LAB_18002c113;
    case 0x46:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x66:
      uVar3 = 2;
      goto LAB_18002c113;
    case 0x47:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x67:
      uVar3 = 3;
      goto LAB_18002c113;
    case 0x4c:
      FUN_18002c3ba(&local_6c,7,local_9c < 0xb);
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x40;
      break;
    case 0x58:
      *(byte *)((longlong)param_3 + 1) = *(byte *)((longlong)param_3 + 1) | 0x10;
    case 0x78:
      uVar3 = 4;
LAB_18002c0f1:
      uVar5 = 0x1fe;
      goto LAB_18002c119;
    case 99:
      if (param_5 == 7) {
        FUN_180025be0("invalid format specifier");
      }
      uVar3 = 7;
      goto LAB_18002c0f1;
    case 100:
      uVar3 = 3;
      goto LAB_18002c0f1;
    case 0x6f:
      uVar3 = 5;
      goto LAB_18002c0f1;
    case 0x70:
      uVar3 = 3;
      uVar5 = 0x5000;
      goto LAB_18002c119;
    case 0x73:
      uVar3 = 2;
      uVar5 = 0x3080;
      goto LAB_18002c119;
    case 0x7d:
      goto switchD_18002bdee_caseD_7d;
    }
    param_1 = local_68 + 1;
LAB_18002bfff:
    local_68 = param_1;
    if (param_1 == param_2) goto switchD_18002bdee_caseD_7d;
    bVar7 = *param_1;
  } while( true );
switchD_18002bdee_caseD_3f:
  uVar3 = 1;
  uVar5 = 0x3100;
LAB_18002c119:
  param_1 = (byte *)FUN_18002c4f0(&local_88,uVar3,uVar5);
switchD_18002bdee_caseD_7d:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
  }
  return param_1;
}

