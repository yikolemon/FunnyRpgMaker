/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001017c */

longlong * FUN_14001017c(byte *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 auStackY_58 [32];
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  bVar1 = *param_1;
  if ((ulonglong)bVar1 < 0xe) {
    switch(bVar1) {
    case 0:
      FUN_14000bdb2(param_2,*(undefined8 *)*param_3);
      break;
    case 1:
      FUN_1400103e9(param_2,*(undefined8 **)*param_3,*(uint *)(param_1 + 8),(undefined8 *)param_3[1]
                    ,((undefined8 *)*param_3)[3]);
      break;
    case 2:
      FUN_14001211e(param_2,*(undefined8 **)*param_3,*(uint *)(param_1 + 8),(undefined8 *)param_3[1]
                    ,((undefined8 *)*param_3)[3]);
      break;
    case 3:
      FUN_14001264c(param_2,*(undefined8 **)*param_3,*(ulonglong *)(param_1 + 8),
                    (undefined8 *)param_3[1],((undefined8 *)*param_3)[3]);
      break;
    case 4:
      FUN_140012eb7(param_2,*(undefined8 **)*param_3,*(ulonglong *)(param_1 + 8),
                    (undefined8 *)param_3[1],((undefined8 *)*param_3)[3]);
      break;
    case 5:
      plVar2 = (longlong *)param_3[1];
      local_18 = (undefined4)plVar2[2];
      local_28 = *plVar2;
      lStack_20 = plVar2[1];
      FUN_1400133e3(param_2,*(undefined8 **)*param_3,
                    (uint)CONCAT71((int7)((ulonglong)
                                          ((longlong)&switchD_1400101ae::switchdataD_1400bb1d8 +
                                          (longlong)
                                          (int)(&switchD_1400101ae::switchdataD_1400bb1d8)[bVar1])
                                         >> 8),param_1[8]),(int *)&local_28,
                    ((undefined8 *)*param_3)[3]);
      break;
    case 6:
      plVar2 = (longlong *)param_3[1];
      local_18 = (undefined4)plVar2[2];
      local_28 = *plVar2;
      lStack_20 = plVar2[1];
      FUN_140010945(param_2,*(undefined8 **)*param_3,(uint)*(ushort *)(param_1 + 8),(int *)&local_28
                    ,((undefined8 *)*param_3)[3]);
      break;
    case 7:
      FUN_140013dbc(param_2,*(undefined8 **)*param_3,*(float *)(param_1 + 8),(int *)param_3[1],
                    ((undefined8 *)*param_3)[3]);
      break;
    case 8:
      FUN_140015f59(param_2,*(undefined8 **)*param_3,*(undefined **)(param_1 + 8),(int *)param_3[1],
                    ((undefined8 *)*param_3)[3]);
      break;
    case 9:
      FUN_140015f59(param_2,*(undefined8 **)*param_3,*(undefined **)(param_1 + 8),(int *)param_3[1],
                    ((undefined8 *)*param_3)[3]);
      break;
    case 10:
      FUN_140017223(param_2,*(undefined8 **)*param_3,*(ulonglong *)(param_1 + 8),(int *)param_3[1]);
      break;
    case 0xb:
      FUN_140013b57(param_2,*(undefined8 **)*param_3,*(undefined1 (**) [32])(param_1 + 8),
                    (int *)param_3[1],((undefined8 *)*param_3)[3]);
      break;
    case 0xc:
      local_28 = *(longlong *)(param_1 + 8);
      lStack_20 = *(longlong *)(param_1 + 0x10);
      FUN_1400111a4(param_2,*(undefined8 **)*param_3,&local_28,(int *)param_3[1]);
      break;
    case 0xd:
      goto switchD_1400101ae_caseD_d;
    }
    if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStackY_58)) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_10 ^ (ulonglong)auStackY_58);
  }
switchD_1400101ae_caseD_d:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

