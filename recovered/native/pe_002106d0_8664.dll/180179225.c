/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179225 */

undefined8 FUN_180179225(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = *(char **)(param_1 + 0x30);
  if (pcVar6 < *(char **)(param_1 + 0x32)) {
LAB_18017925e:
    pcVar5 = pcVar6 + 1;
    *(char **)(param_1 + 0x30) = pcVar5;
    if (*pcVar6 == 'B') {
      if (*(char **)(param_1 + 0x32) <= pcVar5) {
        if (param_1[0xc] == 0) goto LAB_18017935f;
        FUN_180176673(param_1);
        pcVar5 = *(char **)(param_1 + 0x30);
      }
      *(char **)(param_1 + 0x30) = pcVar5 + 1;
      if (*pcVar5 == 'M') {
        FUN_180179168(param_1);
        FUN_18017918c(param_1);
        FUN_18017918c(param_1);
        iVar1 = FUN_180179168(param_1);
        param_2[1] = iVar1;
        iVar1 = FUN_180179168(param_1);
        param_2[2] = iVar1;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[8] = 0xe;
        if (-1 < param_2[1]) {
          if (iVar1 < 0x38) {
            if (iVar1 != 0xc) {
              if (iVar1 != 0x28) goto LAB_180179385;
              goto LAB_180179308;
            }
            uVar2 = FUN_18017918c(param_1);
            *param_1 = uVar2;
            uVar2 = FUN_18017918c(param_1);
          }
          else {
            if (((iVar1 != 0x38) && (iVar1 != 0x6c)) && (iVar1 != 0x7c)) {
LAB_180179385:
              pcVar6 = "unknown BMP";
              goto LAB_180179366;
            }
LAB_180179308:
            uVar2 = FUN_180179168(param_1);
            *param_1 = uVar2;
            uVar2 = FUN_180179168(param_1);
          }
          param_1[1] = uVar2;
          iVar3 = FUN_18017918c(param_1);
          if (iVar3 == 1) {
            iVar3 = FUN_18017918c(param_1);
            *param_2 = iVar3;
            if (iVar1 == 0xc) {
              return 1;
            }
            iVar3 = FUN_180179168(param_1);
            if (iVar3 - 1U < 2) {
              pcVar6 = "BMP RLE";
              goto LAB_180179366;
            }
            if (3 < iVar3) {
              pcVar6 = "BMP JPEG/PNG";
              goto LAB_180179366;
            }
            if (((iVar3 != 3) || (*param_2 == 0x10)) || (*param_2 == 0x20)) {
              FUN_180179168(param_1);
              FUN_180179168(param_1);
              FUN_180179168(param_1);
              FUN_180179168(param_1);
              FUN_180179168(param_1);
              if (iVar1 < 0x6c) {
                if (iVar1 != 0x28) {
                  if (iVar1 != 0x38) goto LAB_180179523;
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                }
                if ((*param_2 != 0x20) && (*param_2 != 0x10)) {
                  return 1;
                }
                if (iVar3 == 0) {
                  FUN_180179619(param_2,0);
                  return 1;
                }
                if (iVar3 == 3) {
                  iVar1 = FUN_180179168(param_1);
                  param_2[3] = iVar1;
                  iVar1 = FUN_180179168(param_1);
                  param_2[4] = iVar1;
                  iVar1 = FUN_180179168(param_1);
                  param_2[5] = iVar1;
                  param_2[8] = param_2[8] + 0xc;
                  if (param_2[4] != iVar1 || param_2[3] != param_2[4]) {
                    return 1;
                  }
                }
              }
              else if ((iVar1 == 0x6c) || (iVar1 == 0x7c)) {
                iVar4 = FUN_180179168(param_1);
                param_2[3] = iVar4;
                iVar4 = FUN_180179168(param_1);
                param_2[4] = iVar4;
                iVar4 = FUN_180179168(param_1);
                param_2[5] = iVar4;
                iVar4 = FUN_180179168(param_1);
                param_2[6] = iVar4;
                if (iVar3 != 3) {
                  FUN_180179619(param_2,iVar3);
                }
                FUN_180179168(param_1);
                iVar3 = 0xc;
                do {
                  FUN_180179168(param_1);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                if (iVar1 != 0x6c) {
                  if (iVar1 != 0x7c) {
                    return 0;
                  }
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                  FUN_180179168(param_1);
                  return 1;
                }
                return 1;
              }
            }
          }
        }
LAB_180179523:
        pcVar6 = "bad BMP";
        goto LAB_180179366;
      }
    }
  }
  else if (param_1[0xc] != 0) {
    FUN_180176673(param_1);
    pcVar6 = *(char **)(param_1 + 0x30);
    goto LAB_18017925e;
  }
LAB_18017935f:
  pcVar6 = "not BMP";
LAB_180179366:
  FUN_1801765d0(pcVar6);
  return 0;
}

