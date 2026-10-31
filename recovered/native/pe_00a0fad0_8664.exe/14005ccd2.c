/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005ccd2 */

undefined8 FUN_14005ccd2(byte *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  bVar1 = *param_1;
  if ((ulonglong)bVar1 < 0xe) {
    switch(bVar1) {
    case 0:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_140045aa5(param_2,*(undefined8 *)*param_3,param_3,param_3[1]);
      break;
    case 1:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14005cf3f(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
      break;
    case 2:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14005f033(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
      break;
    case 3:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14005f561(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 4:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14005fdcd(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 5:
      puVar2 = (undefined4 *)param_3[1];
      local_38 = ((undefined8 *)*param_3)[3];
      local_18 = puVar2[4];
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      FUN_1400602f9(param_2,*(undefined8 *)*param_3,
                    CONCAT71((int7)((ulonglong)
                                    ((longlong)&switchD_14005cd04::switchdataD_1401421ec +
                                    (longlong)
                                    (int)(&switchD_14005cd04::switchdataD_1401421ec)[bVar1]) >> 8),
                             param_1[8]) & 0xffffffff);
      break;
    case 6:
      puVar2 = (undefined4 *)param_3[1];
      local_38 = ((undefined8 *)*param_3)[3];
      local_18 = puVar2[4];
      local_28 = *puVar2;
      uStack_24 = puVar2[1];
      uStack_20 = puVar2[2];
      uStack_1c = puVar2[3];
      FUN_14005d49b(param_2,*(undefined8 *)*param_3,*(undefined2 *)(param_1 + 8));
      break;
    case 7:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_140060af3(param_2,*(undefined8 *)*param_3,*(undefined4 *)(param_1 + 8),param_3[1]);
      break;
    case 8:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14006178f(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 9:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14006178f(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 10:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_140062020(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 0xb:
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_140060a6d(param_2,*(undefined8 *)*param_3,*(undefined8 *)(param_1 + 8),param_3[1]);
      break;
    case 0xc:
      local_28 = *(undefined4 *)(param_1 + 8);
      uStack_24 = *(undefined4 *)(param_1 + 0xc);
      uStack_20 = *(undefined4 *)(param_1 + 0x10);
      uStack_1c = *(undefined4 *)(param_1 + 0x14);
      local_38 = ((undefined8 *)*param_3)[3];
      FUN_14005de0a(param_2,*(undefined8 *)*param_3,&local_28,param_3[1]);
      break;
    case 0xd:
      goto switchD_14005cd04_caseD_d;
    }
    if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_58)) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_10 ^ (ulonglong)auStack_58);
  }
switchD_14005cd04_caseD_d:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

