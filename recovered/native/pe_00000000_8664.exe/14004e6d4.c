/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e6d4 */

undefined8 FUN_14004e6d4(byte *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined7 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_14004e706::switchdataD_1401d2a48 +
           (longlong)(int)(&switchD_14004e706::switchdataD_1401d2a48)[*param_1]) >> 8);
  switch(*param_1) {
  case 0:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14002274d(param_2,*(undefined8 *)*param_3,param_3,param_3[1]);
    break;
  case 1:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004e940(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 2:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140050640(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 3:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140050b6e(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 4:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_1400513d4(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 5:
    puVar1 = (undefined4 *)param_3[1];
    local_38 = ((undefined8 *)*param_3)[3];
    local_18 = puVar1[4];
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_140051900(param_2,*(undefined8 *)*param_3,CONCAT71(uVar3,param_1[8]) & 0xffffffff);
    break;
  case 6:
    puVar1 = (undefined4 *)param_3[1];
    local_38 = ((undefined8 *)*param_3)[3];
    local_18 = puVar1[4];
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_14004ee9c(param_2,*(undefined8 *)*param_3,CONCAT71(uVar3,param_1[8]) & 0xffffffff);
    break;
  case 7:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140051c53(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 8:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140053dbe(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 9:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140053dbe(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 10:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140055088(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 0xb:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140051bcd(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 0xc:
    local_28 = *(undefined4 *)(param_1 + 8);
    uStack_24 = *(undefined4 *)(param_1 + 0xc);
    uStack_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004f70a(param_2,*(undefined8 *)*param_3,&local_28,param_3[1]);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
}

