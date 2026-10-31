/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005b6e0 */

undefined8 * FUN_14005b6e0(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  bVar1 = *param_1;
  if (0xd < (ulonglong)bVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  switch(bVar1) {
  case 0:
    FUN_140045aa5(param_2,*param_3);
    break;
  case 1:
    FUN_14005b890(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_14005b9eb(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_14005bacd(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 4:
    FUN_14005bbe7(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 5:
    FUN_14005bce8(param_2,*param_3,
                  CONCAT71((int7)((ulonglong)
                                  ((longlong)&switchD_14005b713::switchdataD_140142124 +
                                  (longlong)(int)(&switchD_14005b713::switchdataD_140142124)[bVar1])
                                 >> 8),param_1[8]) & 0xffffffff);
    break;
  case 6:
    FUN_14005bd7a(param_2,*param_3,*(undefined2 *)(param_1 + 8));
    break;
  case 7:
    FUN_14005bdc2(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_14005be8c(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_14005be8c(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_14005bf5a(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_14005bd05(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_14005c073(param_2,*param_3,&local_38);
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
  }
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

