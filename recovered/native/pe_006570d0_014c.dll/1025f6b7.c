/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f6b7 */

uint __fastcall FUN_1025f6b7(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  char *pcVar3;
  uint uVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x2d);
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  pcVar3 = (char *)CONCAT31(uVar5,cVar1);
  if (cVar1 == 'F') {
    pcVar3 = (char *)(*param_1 & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(param_1 + 6) = 7;
      uVar4 = FUN_1025f810();
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    pcVar3 = (char *)(*param_1 & 8);
    if (pcVar3 == (char *)0x0) {
      *(undefined1 *)(param_1 + 6) = 8;
      goto LAB_1025f6ec;
    }
  }
  else {
    if (param_1[10] != 0) {
LAB_1025f6ec:
      uVar4 = param_1[2];
      *(undefined1 *)(uVar4 + 0x1c) = 1;
      *(undefined4 *)(uVar4 + 0x18) = 0x16;
      uVar4 = FUN_10274034(0,0,0,0,0,param_1[2]);
      return uVar4 & 0xffffff00;
    }
    if (cVar1 < 'k') {
      if (cVar1 == 'j') {
        param_1[10] = 5;
        goto LAB_1025f80d;
      }
      if (cVar1 == 'I') {
        pcVar2 = (char *)param_1[3];
        cVar1 = *pcVar2;
        pcVar3 = (char *)CONCAT31(uVar5,cVar1);
        if ((cVar1 == '3') && (pcVar2[1] == '2')) {
          pcVar3 = pcVar2 + 2;
          param_1[10] = 10;
          param_1[3] = (uint)pcVar3;
        }
        else if (cVar1 == '6') {
          if (pcVar2[1] == '4') {
            pcVar3 = pcVar2 + 2;
            param_1[10] = 0xb;
            param_1[3] = (uint)pcVar3;
          }
        }
        else if ((((cVar1 == 'd') || (cVar1 == 'i')) || (cVar1 == 'o')) ||
                (((cVar1 == 'u' || (cVar1 == 'x')) || (cVar1 == 'X')))) {
          param_1[10] = 9;
        }
        goto LAB_1025f80d;
      }
      if (cVar1 == 'L') {
        param_1[10] = 8;
        goto LAB_1025f80d;
      }
      if (cVar1 == 'T') {
        param_1[10] = 0xd;
        goto LAB_1025f80d;
      }
      if (cVar1 != 'h') goto LAB_1025f80d;
      if (*(char *)param_1[3] == 'h') {
        param_1[3] = (uint)((char *)param_1[3] + 1);
        pcVar3 = (char *)0x1;
      }
      else {
        pcVar3 = (char *)0x2;
      }
    }
    else {
      if (cVar1 != 'l') {
        if (cVar1 == 't') {
          param_1[10] = 7;
        }
        else if (cVar1 == 'w') {
          param_1[10] = 0xc;
        }
        else if (cVar1 == 'z') {
          param_1[10] = 6;
        }
        goto LAB_1025f80d;
      }
      if (*(char *)param_1[3] == 'l') {
        param_1[3] = (uint)((char *)param_1[3] + 1);
        pcVar3 = (char *)0x4;
      }
      else {
        pcVar3 = (char *)0x3;
      }
    }
    param_1[10] = (uint)pcVar3;
  }
LAB_1025f80d:
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}

