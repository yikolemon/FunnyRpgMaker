/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9356 */

void __thiscall FUN_100f9356(int param_1,int param_2,char param_3,float param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbad) != '\0')) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (*(char *)(iVar1 + 0x79) == '\x01') {
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
    iVar2 = FUN_100f9526(param_2);
    pcVar3 = (char *)FUN_100f9590(iVar1,param_2);
    pcVar5 = (char *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      pcVar5 = pcVar3;
    }
    if (*pcVar5 == param_3) {
      pfVar6 = (float *)(iVar2 + 0x14);
      if (iVar2 == 0) {
        pfVar6 = (float *)(pcVar3 + 0xc);
      }
      if ((*pfVar6 == param_4) && (!NAN(*pfVar6) && !NAN(param_4))) {
        return;
      }
    }
    iVar4 = *(int *)(iVar1 + 0x1464);
    iVar2 = *(int *)(iVar1 + 0x1480);
    *(int *)(iVar1 + 0x1480) = iVar2 + 1;
    if (iVar4 == *(int *)(iVar1 + 0x1468)) {
      if (iVar4 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar4 / 2 + iVar4;
      }
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar7) {
        iVar8 = iVar7;
      }
      iVar7 = FUN_100fa1fa(iVar8 * 0x1c);
      if (*(int *)(iVar1 + 0x146c) != 0) {
        FUN_1025b2d0(iVar7,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
      }
      *(int *)(iVar1 + 0x146c) = iVar7;
      *(int *)(iVar1 + 0x1468) = iVar8;
      iVar4 = *(int *)(iVar1 + 0x1464);
    }
    else {
      iVar7 = *(int *)(iVar1 + 0x146c);
    }
    iVar4 = iVar4 * 0x1c;
    *(undefined4 *)(iVar7 + iVar4) = 5;
    *(uint *)(iVar7 + 4 + iVar4) = (param_2 - 0x278U < 0x18) + 2;
    *(int *)(iVar7 + 8 + iVar4) = iVar2;
    *(int *)(iVar7 + 0xc + iVar4) = param_2;
    *(char *)(iVar7 + 0x10 + iVar4) = param_3;
    *(undefined2 *)(iVar7 + 0x11 + iVar4) = 0;
    *(undefined1 *)(iVar7 + 0x13 + iVar4) = 0;
    *(float *)(iVar7 + 0x14 + iVar4) = param_4;
    *(undefined4 *)(iVar7 + 0x18 + iVar4) = 0;
    *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
  }
  return;
}

