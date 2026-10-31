/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140021cfa */

/* WARNING: Removing unreachable block (ram,0x000140021d6b) */

void FUN_140021cfa(int param_1,undefined4 *param_2,uint *param_3,longlong param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (param_1 == 0) goto LAB_140021e9b;
  if (param_1 == 1) {
    FUN_14001a560(param_4 + 8,&local_50,*param_3);
  }
  else {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    FUN_1400223b8(param_4 + 8,&local_50);
  }
  if (local_40 == 0) {
    pcVar2 = "argument not found";
    goto LAB_140021ed2;
  }
  switch(local_40) {
  case 1:
    uVar1 = (ulonglong)(int)local_50;
    if ((longlong)uVar1 < 0) goto LAB_140021e8b;
    goto LAB_140021e99;
  case 2:
    uVar1 = (ulonglong)local_50;
    break;
  case 3:
    uVar1 = 0xffffffffffffffff;
    if (-1 < (int)uStack_4c) {
      uVar1 = CONCAT44(uStack_4c,local_50);
    }
    break;
  case 4:
    uVar1 = CONCAT44(uStack_4c,local_50);
    break;
  default:
    uVar1 = FUN_14002242c(&local_51);
    break;
  case 7:
    uVar1 = FUN_14002242c(&local_51,(undefined1)local_50);
    break;
  case 8:
    uVar1 = FUN_14002242c(&local_51,(undefined1)local_50);
    break;
  case 9:
    uVar1 = FUN_14002242c(&local_51,local_50);
    break;
  case 10:
    uVar1 = FUN_14002242c(&local_51,CONCAT44(uStack_4c,local_50));
    break;
  case 0xb:
    uVar1 = FUN_14002242c(&local_51,CONCAT44(uStack_4c,local_50));
    break;
  case 0xc:
    uVar1 = FUN_14002242c(&local_51,CONCAT44(uStack_4c,local_50));
    break;
  case 0xd:
    local_28 = local_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    uVar1 = FUN_14002242c(&local_51);
    break;
  case 0xe:
    uVar1 = FUN_14002242c(&local_51,CONCAT44(uStack_4c,local_50));
    break;
  case 0xf:
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uVar1 = FUN_14002242c(&local_51);
  }
  if (uVar1 >> 0x1f != 0) {
LAB_140021e8b:
    pcVar2 = "width/precision is out of range";
LAB_140021ed2:
    local_38 = CONCAT31(local_38._1_3_,1);
    FUN_14001b296(&local_28,pcVar2);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(&local_28,&DAT_140ee3c60);
  }
LAB_140021e99:
  *param_2 = (int)uVar1;
LAB_140021e9b:
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_78);
  }
  return;
}

