/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d316 */

ulonglong FUN_18001d316(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x38;
  uVar5 = 0;
LAB_18001d338:
  uVar4 = uVar5;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 < 0x5b) {
    switch(iVar2) {
    case 0x24:
      FUN_18001da4e(lVar1);
      goto LAB_18001d4d0;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x2d:
      break;
    case 0x28:
      goto switchD_18001d39f_caseD_28;
    case 0x29:
      if (*(int *)(param_1 + 0x14) != 0) {
LAB_18001d521:
        return uVar4 & 0xffffff01;
      }
      if ((*(byte *)(param_1 + 99) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18001d772(param_1,5);
      }
      break;
    case 0x2a:
      if ((byte)(~(byte)uVar4 & (*(byte *)(param_1 + 99) & 2) >> 1) == 0)
      goto switchD_18001d39f_caseD_2b;
      break;
    case 0x2b:
      goto switchD_18001d39f_caseD_2b;
    case 0x2e:
      FUN_18001d77e(lVar1);
      goto LAB_18001d500;
    default:
      if (iVar2 == -1) goto LAB_18001d521;
      if (iVar2 == 0x3f) goto switchD_18001d39f_caseD_2b;
    }
  }
  else if (iVar2 < 0x7b) {
    switch(iVar2) {
    case 0x5b:
      *(undefined1 *)(param_1 + 0x74) = 1;
      FUN_18001d674(param_1);
      FUN_18001d8aa(param_1);
      *(undefined1 *)(param_1 + 0x74) = 0;
      FUN_18001d8e4(param_1,0x5d,4);
      goto LAB_18001d508;
    case 0x5c:
      FUN_18001d674(param_1);
      if ((*(char *)(param_1 + 0x75) == 'b' & (byte)*(ulonglong *)(param_1 + 0x60) >> 6) == 1) {
        FUN_18001d788(lVar1);
      }
      else {
        if ((*(char *)(param_1 + 0x75) == 'B' & (byte)(*(ulonglong *)(param_1 + 0x60) >> 6) & 3) !=
            1) {
          FUN_18001d79c(param_1);
          goto LAB_18001d508;
        }
        FUN_18001d788(lVar1);
        FUN_18001d792(lVar1);
      }
LAB_18001d4d0:
      uVar6 = FUN_18001d674(param_1);
      uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      goto LAB_18001d338;
    case 0x5d:
      if ((*(byte *)(param_1 + 99) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18001d772(param_1,4);
      }
      break;
    case 0x5e:
      if ((*(byte *)(param_1 + 99) & (byte)uVar4) == 0) {
        FUN_18001d9dc(lVar1);
        uVar6 = FUN_18001d674(param_1);
        uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        if (((*(byte *)(param_1 + 99) & 2) == 0) ||
           ((uVar4 & 1) != 0 || *(int *)(param_1 + 0x70) != 0x2a)) goto LAB_18001d338;
      }
    }
  }
  else {
    if (iVar2 != 0x7d) {
      if (iVar2 == 0x7c) goto LAB_18001d521;
      if (iVar2 != 0x7b) goto switchD_18001d35a_default;
switchD_18001d39f_caseD_2b:
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,10);
    }
    if ((*(byte *)(param_1 + 99) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,6);
    }
  }
switchD_18001d35a_default:
  FUN_18001d9e6(lVar1,*(undefined1 *)(param_1 + 0x75));
LAB_18001d500:
  FUN_18001d674(param_1);
  goto LAB_18001d508;
switchD_18001d39f_caseD_28:
  FUN_18001d674(param_1);
  cVar3 = FUN_18001d900(param_1);
  uVar6 = FUN_18001d8e4(param_1,0x29,5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  if (cVar3 != '\0') {
LAB_18001d508:
    uVar6 = FUN_18001da58(param_1);
    uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  goto LAB_18001d338;
}

