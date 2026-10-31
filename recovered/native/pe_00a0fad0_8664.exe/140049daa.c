/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140049daa */

undefined8 FUN_140049daa(byte *param_1,undefined8 param_2,longlong *param_3)

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
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140049ddc::switchdataD_140140c1c +
           (longlong)(int)(&switchD_140049ddc::switchdataD_140140c1c)[*param_1]) >> 8);
  switch(*param_1) {
  case 0:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_140045aa5(param_2,*(undefined8 *)*param_3,param_3,param_3[1]);
    break;
  case 1:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004a016(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 2:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004bd16(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 3:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004c244(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 4:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004caaa(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 5:
    puVar1 = (undefined4 *)param_3[1];
    local_38 = ((undefined8 *)*param_3)[3];
    local_18 = puVar1[4];
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_14004cfd6(param_2,*(undefined8 *)*param_3,CONCAT71(uVar3,param_1[8]) & 0xffffffff);
    break;
  case 6:
    puVar1 = (undefined4 *)param_3[1];
    local_38 = ((undefined8 *)*param_3)[3];
    local_18 = puVar1[4];
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_14004a572(param_2,*(undefined8 *)*param_3,CONCAT71(uVar3,param_1[8]) & 0xffffffff);
    break;
  case 7:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004d329(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
    break;
  case 8:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004f494(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 9:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004f494(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 10:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14005075e(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 0xb:
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004d2a3(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
    break;
  case 0xc:
    local_28 = *(undefined4 *)(param_1 + 8);
    uStack_24 = *(undefined4 *)(param_1 + 0xc);
    uStack_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    local_38 = ((undefined8 *)*param_3)[3];
    FUN_14004ade0(param_2,*(undefined8 *)*param_3,&local_28,param_3[1]);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_58);
}

