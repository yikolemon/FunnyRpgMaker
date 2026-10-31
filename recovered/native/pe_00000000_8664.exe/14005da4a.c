/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005da4a */

ulonglong FUN_14005da4a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x38;
  uVar5 = 0;
LAB_14005da6c:
  uVar4 = uVar5;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 < 0x5b) {
    switch(iVar2) {
    case 0x24:
      FUN_14005e192(lVar1);
      goto LAB_14005dc07;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x2c:
    case 0x2d:
      break;
    case 0x28:
      goto switchD_14005dad3_caseD_28;
    case 0x29:
      if (*(int *)(param_1 + 0x14) != 0) {
LAB_14005dc59:
        return uVar4 & 0xffffff01;
      }
      if ((*(byte *)(param_1 + 99) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14005deae(param_1,5);
      }
      break;
    case 0x2a:
      if ((byte)(~(byte)uVar4 & (*(byte *)(param_1 + 99) & 2) >> 1) == 0)
      goto switchD_14005dad3_caseD_2b;
      break;
    case 0x2b:
      goto switchD_14005dad3_caseD_2b;
    case 0x2e:
      FUN_14005deba(lVar1);
      goto LAB_14005dc38;
    default:
      if (iVar2 == -1) goto LAB_14005dc59;
      if (iVar2 == 0x3f) goto switchD_14005dad3_caseD_2b;
    }
  }
  else if (iVar2 < 0x7b) {
    switch(iVar2) {
    case 0x5b:
      *(undefined1 *)(param_1 + 0x74) = 1;
      FUN_14005ddac(param_1);
      FUN_14005dfec(param_1);
      *(undefined1 *)(param_1 + 0x74) = 0;
      FUN_14005e026(param_1,0x5d,4);
      goto LAB_14005dc40;
    case 0x5c:
      FUN_14005ddac(param_1);
      if ((*(short *)(param_1 + 0x76) == 0x62 & (byte)*(ulonglong *)(param_1 + 0x60) >> 6) == 1) {
        FUN_14005dec4(lVar1);
      }
      else {
        if ((*(short *)(param_1 + 0x76) == 0x42 & (byte)(*(ulonglong *)(param_1 + 0x60) >> 6) & 3)
            != 1) {
          FUN_14005ded8(param_1);
          goto LAB_14005dc40;
        }
        FUN_14005dec4(lVar1);
        FUN_14005dece(lVar1);
      }
LAB_14005dc07:
      uVar6 = FUN_14005ddac(param_1);
      uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      goto LAB_14005da6c;
    case 0x5d:
      if ((*(byte *)(param_1 + 99) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14005deae(param_1,4);
      }
      break;
    case 0x5e:
      if ((*(byte *)(param_1 + 99) & (byte)uVar4) == 0) {
        FUN_14005e11e(lVar1);
        uVar6 = FUN_14005ddac(param_1);
        uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        if (((*(byte *)(param_1 + 99) & 2) == 0) ||
           ((uVar4 & 1) != 0 || *(int *)(param_1 + 0x70) != 0x2a)) goto LAB_14005da6c;
      }
    }
  }
  else {
    if (iVar2 != 0x7d) {
      if (iVar2 == 0x7c) goto LAB_14005dc59;
      if (iVar2 != 0x7b) goto switchD_14005da8e_default;
switchD_14005dad3_caseD_2b:
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,10);
    }
    if ((*(byte *)(param_1 + 99) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14005deae(param_1,6);
    }
  }
switchD_14005da8e_default:
  FUN_14005e128(lVar1,*(undefined2 *)(param_1 + 0x76));
LAB_14005dc38:
  FUN_14005ddac(param_1);
  goto LAB_14005dc40;
switchD_14005dad3_caseD_28:
  FUN_14005ddac(param_1);
  cVar3 = FUN_14005e042(param_1);
  uVar6 = FUN_14005e026(param_1,0x29,5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  if (cVar3 != '\0') {
LAB_14005dc40:
    uVar6 = FUN_14005e19c(param_1);
    uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  goto LAB_14005da6c;
}

