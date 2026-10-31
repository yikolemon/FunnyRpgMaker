/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400458f6 */

undefined8 * FUN_1400458f6(byte *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  uVar2 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140045929::switchdataD_1401409f4 +
           (longlong)(int)(&switchD_140045929::switchdataD_1401409f4)[*param_1]) >> 8);
  switch(*param_1) {
  case 0:
    FUN_140045aa5(param_2,*param_3);
    break;
  case 1:
    FUN_140045aac(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_140045e2d(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_1400460f9(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 4:
    FUN_14004643b(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 5:
    FUN_14004673e(param_2,*param_3,CONCAT71(uVar2,param_1[8]) & 0xffffffff);
    break;
  case 6:
    FUN_1400467cd(param_2,*param_3,CONCAT71(uVar2,param_1[8]) & 0xffffffff);
    break;
  case 7:
    FUN_140046814(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_1400477dc(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_1400477dc(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_140048f30(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_14004675b(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_140049045(param_2,*param_3,&local_38);
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
  if (DAT_1401c9640 != (local_18 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

