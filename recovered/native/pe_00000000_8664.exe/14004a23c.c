/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004a23c */

undefined8 * FUN_14004a23c(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined7 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_14004a26f::switchdataD_1401d2820 +
           (longlong)(int)(&switchD_14004a26f::switchdataD_1401d2820)[*param_1]) >> 8);
  switch(*param_1) {
  case 0:
    FUN_14002274d(param_2,*param_3);
    break;
  case 1:
    FUN_14004a3eb(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_14004a76c(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_14004aa38(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 4:
    FUN_14004ad7a(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 5:
    FUN_14004b07d(param_2,*param_3,CONCAT71(uVar2,param_1[8]) & 0xffffffff);
    break;
  case 6:
    FUN_14004b10c(param_2,*param_3,CONCAT71(uVar2,param_1[8]) & 0xffffffff);
    break;
  case 7:
    FUN_14004b153(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_14004c11b(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_14004c11b(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_14004d86f(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_14004b09a(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_14004d984(param_2,*param_3,&local_38);
    break;
  case 0xd:
    uStack_30 = *(undefined4 *)(param_3 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_28 = *(undefined4 *)(param_3 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_38 = *param_3;
    local_20 = param_3[3];
    (**(code **)(param_1 + 0x10))(param_3[4],&local_38,*(undefined8 *)(param_1 + 8));
    *param_2 = local_38;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

