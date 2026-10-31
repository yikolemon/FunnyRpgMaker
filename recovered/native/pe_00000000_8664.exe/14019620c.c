/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019620c */

ulonglong FUN_14019620c(byte *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  ulonglong uVar5;
  char *pcVar6;
  
  bVar4 = param_1[0x39];
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,bVar4);
  if (bVar4 == 0x46) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 7;
      uVar5 = FUN_140196394();
      return uVar5;
    }
  }
  else if (bVar4 == 0x4e) {
    if ((*param_1 & 8) == 0) {
      param_1[0x24] = 8;
LAB_14019623e:
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined4 *)(lVar2 + 0x2c) = 0x16;
      uVar5 = FUN_1401ae820(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) goto LAB_14019623e;
    if (bVar4 == 0x49) {
      pcVar3 = *(char **)(param_1 + 0x10);
      cVar1 = *pcVar3;
      pcVar6 = (char *)CONCAT71(uVar7,cVar1);
      if ((cVar1 == '3') && (pcVar3[1] == '2')) {
        pcVar6 = pcVar3 + 2;
        param_1[0x34] = 10;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        *(char **)(param_1 + 0x10) = pcVar6;
      }
      else if (cVar1 == '6') {
        if (pcVar3[1] == '4') {
          pcVar6 = pcVar3 + 2;
          param_1[0x34] = 0xb;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          *(char **)(param_1 + 0x10) = pcVar6;
        }
      }
      else {
        bVar4 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar4);
        if ((bVar4 < 0x21) && ((0x120821001U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
          param_1[0x34] = 9;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
        }
      }
    }
    else if (bVar4 == 0x4c) {
      param_1[0x34] = 8;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else if (bVar4 == 0x54) {
      param_1[0x34] = 0xd;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
    }
    else {
      if (bVar4 == 0x68) {
        if (**(char **)(param_1 + 0x10) == 'h') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (bVar4 == 0x6a) {
          param_1[0x34] = 5;
          param_1[0x35] = 0;
          param_1[0x36] = 0;
          param_1[0x37] = 0;
          goto LAB_14019638c;
        }
        if (bVar4 != 0x6c) {
          if (bVar4 == 0x74) {
            param_1[0x34] = 7;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x77) {
            param_1[0x34] = 0xc;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          else if (bVar4 == 0x7a) {
            param_1[0x34] = 6;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
          }
          goto LAB_14019638c;
        }
        if (**(char **)(param_1 + 0x10) == 'l') {
          *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
          pcVar6 = (char *)0x4;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)(param_1 + 0x34) = (int)pcVar6;
    }
  }
LAB_14019638c:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}

