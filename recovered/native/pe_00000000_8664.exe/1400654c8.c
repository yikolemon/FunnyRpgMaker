/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400654c8 */

undefined8 * FUN_1400654c8(byte *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  bVar1 = *param_1;
  if (0xd < (ulonglong)bVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  switch(bVar1) {
  case 0:
    FUN_14002274d(param_2,*param_3);
    break;
  case 1:
    FUN_140065678(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 2:
    FUN_1400657d3(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 3:
    FUN_1400658b5(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 4:
    FUN_1400659cf(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 5:
    FUN_140065ad0(param_2,*param_3,
                  CONCAT71((int7)((ulonglong)
                                  ((longlong)&switchD_1400654fb::switchdataD_1401d4150 +
                                  (longlong)(int)(&switchD_1400654fb::switchdataD_1401d4150)[bVar1])
                                 >> 8),param_1[8]) & 0xffffffff);
    break;
  case 6:
    FUN_140065b62(param_2,*param_3,*(undefined2 *)(param_1 + 8));
    break;
  case 7:
    FUN_140065baa(param_2,*param_3,*(undefined4 *)(param_1 + 8));
    break;
  case 8:
    FUN_140065c74(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 9:
    FUN_140065c74(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 10:
    FUN_140065d42(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xb:
    FUN_140065aed(param_2,*param_3,*(undefined8 *)(param_1 + 8));
    break;
  case 0xc:
    local_38 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_2c = *(undefined4 *)(param_1 + 0x14);
    FUN_140065e5b(param_2,*param_3,&local_38);
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
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

