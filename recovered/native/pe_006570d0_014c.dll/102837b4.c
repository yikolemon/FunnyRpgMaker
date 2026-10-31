/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102837b4 */

undefined4
FUN_102837b4(char *param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)(param_7 + 0x1c) = 1;
    *(undefined4 *)(param_7 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_7);
    return 0x16;
  }
  if (param_2 != 0) {
    *param_1 = '\0';
    iVar2 = 0;
    if (0 < param_3) {
      iVar2 = param_3;
    }
    if (param_2 <= iVar2 + 1U) {
      uVar6 = 0x22;
      goto LAB_1028380c;
    }
    if (param_4 != (undefined4 *)0x0) {
      pcVar4 = (char *)param_4[2];
      *param_1 = '0';
      pcVar3 = pcVar4;
      pcVar5 = param_1;
      for (; pcVar5 = pcVar5 + 1, 0 < param_3; param_3 = param_3 + -1) {
        cVar1 = *pcVar3;
        if (cVar1 == '\0') {
          cVar1 = '0';
        }
        else {
          pcVar3 = pcVar3 + 1;
        }
        *pcVar5 = cVar1;
      }
      *pcVar5 = '\0';
      if ((-1 < param_3) &&
         (cVar1 = FUN_102838d0(pcVar4,pcVar3,*param_4,param_5,param_6), cVar1 != '\0')) {
        while( true ) {
          pcVar5 = pcVar5 + -1;
          if (*pcVar5 != '9') break;
          *pcVar5 = '0';
        }
        *pcVar5 = *pcVar5 + '\x01';
      }
      if (*param_1 == '1') {
        param_4[1] = param_4[1] + 1;
      }
      else {
        pcVar4 = param_1 + 1;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_1025b2d0(param_1,param_1 + 1,pcVar4 + (1 - (int)(param_1 + 2)));
      }
      return 0;
    }
  }
  uVar6 = 0x16;
LAB_1028380c:
  *(undefined4 *)(param_7 + 0x18) = uVar6;
  *(undefined1 *)(param_7 + 0x1c) = 1;
  FUN_10274034(0,0,0,0,0,param_7);
  return uVar6;
}

