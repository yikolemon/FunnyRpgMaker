/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fd924 */

void FUN_1800fd924(longlong param_1,int param_2,char param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  float *pfVar9;
  int iVar10;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbe5) != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (*(char *)(lVar2 + 0x8d) == '\x01') {
      switch(param_2) {
      case 0x20f:
        param_2 = 0x212;
        break;
      case 0x210:
      case 0x211:
      case 0x214:
      case 0x215:
        break;
      case 0x212:
        param_2 = 0x20f;
        break;
      case 0x213:
        param_2 = 0x216;
        break;
      case 0x216:
        param_2 = 0x213;
        break;
      default:
        if (param_2 == 0x8000) {
          param_2 = 0x1000;
        }
        else if (param_2 == 0x1000) {
          param_2 = 0x8000;
        }
      }
    }
    lVar5 = FUN_1800fdb15(lVar2,5,param_2);
    pcVar6 = (char *)FUN_1800fdb8a(lVar2,param_2);
    pcVar8 = (char *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      pcVar8 = pcVar6;
    }
    if (*pcVar8 == param_3) {
      pfVar9 = (float *)(lVar5 + 0x14);
      if (lVar5 == 0) {
        pfVar9 = (float *)(pcVar6 + 0xc);
      }
      if ((*pfVar9 == param_4) && (!NAN(*pfVar9) && !NAN(param_4))) {
        return;
      }
    }
    iVar4 = *(int *)(lVar2 + 0x1580);
    iVar1 = *(int *)(lVar2 + 0x15a4);
    *(int *)(lVar2 + 0x15a4) = iVar1 + 1;
    if (iVar4 == *(int *)(lVar2 + 0x1584)) {
      if (iVar4 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar4 / 2 + iVar4;
      }
      iVar10 = iVar4 + 1;
      if (iVar4 + 1 < iVar7) {
        iVar10 = iVar7;
      }
      lVar5 = FUN_1800fe7f8((longlong)iVar10 * 0x1c);
      if (*(longlong *)(lVar2 + 0x1588) != 0) {
        FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x1588),(longlong)*(int *)(lVar2 + 0x1580) * 0x1c)
        ;
        FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x1588));
      }
      *(longlong *)(lVar2 + 0x1588) = lVar5;
      *(int *)(lVar2 + 0x1584) = iVar10;
      iVar4 = *(int *)(lVar2 + 0x1580);
    }
    else {
      lVar5 = *(longlong *)(lVar2 + 0x1588);
    }
    lVar3 = (longlong)iVar4 * 0x1c;
    *(undefined4 *)(lVar5 + lVar3) = 5;
    *(uint *)(lVar5 + 4 + lVar3) = (param_2 - 0x278U < 0x18) + 2;
    *(int *)(lVar5 + 8 + lVar3) = iVar1;
    *(int *)(lVar5 + 0xc + lVar3) = param_2;
    *(char *)(lVar5 + 0x10 + lVar3) = param_3;
    *(undefined2 *)(lVar5 + 0x11 + lVar3) = 0;
    *(undefined1 *)(lVar5 + 0x13 + lVar3) = 0;
    *(float *)(lVar5 + 0x14 + lVar3) = param_4;
    *(undefined4 *)(lVar5 + 0x18 + lVar3) = 0;
    *(int *)(lVar2 + 0x1580) = *(int *)(lVar2 + 0x1580) + 1;
  }
  return;
}

