/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027b1f4 */

void FUN_18027b1f4(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 8);
  cVar1 = *pcVar4;
  if (cVar1 == 'I') {
    cVar1 = pcVar4[1];
    if ((cVar1 == '3') && (pcVar4[2] == '2')) {
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_18027b2fc;
    }
    if (cVar1 == '6') {
      if (pcVar4[2] != '4') {
        return;
      }
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 10;
      goto LAB_18027b2fc;
    }
    if (0x20 < (byte)(cVar1 + 0xa8U)) {
      return;
    }
    if ((0x120821001U >> ((ulonglong)(byte)(cVar1 + 0xa8U) & 0x3f) & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 10;
  }
  else if (cVar1 == 'L') {
    *(undefined4 *)(param_1 + 0x28) = 8;
  }
  else if (cVar1 == 'T') {
    *(undefined4 *)(param_1 + 0x28) = 0xb;
  }
  else {
    if (cVar1 == 'h') {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == 'h') {
        pcVar3 = pcVar4 + 2;
      }
      *(char **)(param_1 + 8) = pcVar3;
      iVar2 = (cVar1 != 'h') + 1;
LAB_18027b294:
      *(int *)(param_1 + 0x28) = iVar2;
      return;
    }
    if (cVar1 == 'j') {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    else {
      if (cVar1 == 'l') {
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar3;
        if (cVar1 == 'l') {
          pcVar3 = pcVar4 + 2;
        }
        *(char **)(param_1 + 8) = pcVar3;
        iVar2 = 4 - (uint)(cVar1 != 'l');
        goto LAB_18027b294;
      }
      if (cVar1 == 't') {
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
      else {
        if (cVar1 != 'z') {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 6;
      }
    }
  }
  pcVar4 = pcVar4 + 1;
LAB_18027b2fc:
  *(char **)(param_1 + 8) = pcVar4;
  return;
}

