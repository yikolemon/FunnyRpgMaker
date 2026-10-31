/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100247f8 */

void FUN_100247f8(short *param_1,short *param_2,int param_3,uint param_4,int param_5,uint *param_6,
                 undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  code *pcVar2;
  short *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  short *local_58;
  uint local_50;
  int local_4c;
  uint *local_48;
  undefined4 local_44;
  undefined4 local_40;
  short *local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((param_3 != 2) || (*param_2 != 0x7d7b)) {
    local_68 = param_2;
    local_64 = param_3;
    local_60 = 0;
    local_58 = param_1;
    local_50 = param_4;
    local_4c = param_5;
    local_48 = param_6;
    local_44 = param_7;
    local_40 = param_8;
    FUN_10024a98(param_2,param_3,&local_68);
    goto LAB_10024871;
  }
  if (param_5 < 0) {
    if (0 < (int)param_4) {
      param_4 = param_6[2];
      goto LAB_100248a5;
    }
    goto switchD_100248b4_default;
  }
  param_4 = param_4 & 0xf;
  if (param_4 == 0) goto switchD_100248b4_default;
LAB_100248a5:
  uVar1 = *param_6;
  pcVar2 = (code *)param_6[1];
  local_34 = param_1;
  switch(param_4) {
  case 1:
    FUN_1002522f(&local_68,param_1,uVar1);
    break;
  case 2:
    FUN_100253cd(&local_68,param_1,uVar1);
    break;
  case 3:
    FUN_10025448(&local_68,param_1,uVar1,pcVar2);
    break;
  case 4:
    FUN_10025681(&local_68,param_1,uVar1,pcVar2);
    break;
  case 5:
    local_30 = local_28;
  default:
switchD_100248b4_default:
    local_34 = param_1;
    FUN_10025108(local_30);
    break;
  case 6:
    local_30 = local_2c;
    goto switchD_100248b4_default;
  case 7:
    FUN_10025162(uVar1 & 1);
    break;
  case 8:
    FUN_1002821c(&local_68,param_1,(int)(char)uVar1);
    break;
  case 9:
    FUN_10028267(&local_68,param_1,uVar1);
    break;
  case 10:
    FUN_1002947c(&local_68,param_1,uVar1,pcVar2);
    break;
  case 0xb:
    FUN_1002947c(&local_68,param_1,uVar1,pcVar2);
    break;
  case 0xc:
    FUN_1002aa1d(&local_68,param_1,uVar1);
    break;
  case 0xd:
    FUN_100253ad(&local_68,uVar1,pcVar2 + uVar1,param_1);
    break;
  case 0xe:
    FUN_100251ca(uVar1);
    break;
  case 0xf:
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_68 = param_1;
    local_5c = 0;
    local_60 = 0;
    local_58 = (short *)0x0;
    local_50 = 0;
    (*pcVar2)(uVar1,&local_24,&local_68);
  }
LAB_10024871:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

