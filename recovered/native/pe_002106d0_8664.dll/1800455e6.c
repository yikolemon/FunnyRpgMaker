/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800455e6 */

undefined8 * FUN_1800455e6(byte *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  bVar1 = *param_1;
  if (0xd < (ulonglong)bVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  switch(bVar1) {
  case 0:
    FUN_18000682b(param_2,*param_3);
    break;
  case 1:
    FUN_180045796(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_1800458f1(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_1800459d3(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 4:
    FUN_180045aed(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 5:
    FUN_180045bee(param_2,*param_3,
                  CONCAT71((int7)((ulonglong)
                                  ((longlong)&switchD_180045619::switchdataD_1802b6868 +
                                  (longlong)(int)(&switchD_180045619::switchdataD_1802b6868)[bVar1])
                                 >> 8),param_1[8]) & 0xffffffff);
    break;
  case 6:
    FUN_180045c80(param_2,*param_3,*(undefined2 *)(param_1 + 8));
    break;
  case 7:
    FUN_180045cc8(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_180045d92(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_180045d92(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_180045e60(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_180045c0b(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_180045f79(param_2,*param_3,&local_38);
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
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

