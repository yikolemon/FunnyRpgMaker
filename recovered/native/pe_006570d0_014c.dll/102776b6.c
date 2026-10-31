/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102776b6 */

undefined4
FUN_102776b6(char *param_1,uint param_2,int param_3,char param_4,int param_5,int *param_6,
            byte param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  if (iVar1 + 9U < param_2) {
    if (param_7 != 0) {
      shift_bytes(param_1,param_2,param_1 + (*param_6 == 0x2d),(uint)(0 < param_3));
    }
    pcVar4 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = '-';
      pcVar4 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar4 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      if (*(char *)(param_8 + 0x14) == '\0') {
        FUN_1025ec50();
      }
      *pcVar4 = *(char *)**(undefined4 **)(*(int *)(param_8 + 0xc) + 0x88);
    }
    pcVar4 = pcVar4 + (param_7 ^ 1) + param_3;
    param_1 = param_1 + (param_2 - (int)pcVar4);
    if (param_2 == 0xffffffff) {
      param_1 = (char *)0xffffffff;
    }
    iVar1 = FUN_102733f0(pcVar4,param_1,&DAT_10357f2c);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar4 = 'E';
    }
    if (*(char *)param_6[2] != '0') {
      iVar1 = param_6[1] + -1;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
        pcVar4[1] = '-';
      }
      if (99 < iVar1) {
        iVar2 = iVar1 / 100;
        iVar1 = iVar1 % 100;
        pcVar4[2] = pcVar4[2] + (char)iVar2;
      }
      if (9 < iVar1) {
        iVar2 = iVar1 / 10;
        iVar1 = iVar1 % 10;
        pcVar4[3] = pcVar4[3] + (char)iVar2;
      }
      pcVar4[4] = pcVar4[4] + (char)iVar1;
    }
    if ((param_5 == 2) && (pcVar4[2] == '0')) {
      FUN_1025b2d0(pcVar4 + 2,pcVar4 + 3,3);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0x22;
    *(undefined1 *)(param_8 + 0x1c) = 1;
    *(undefined4 *)(param_8 + 0x18) = 0x22;
    FUN_10274034(0,0,0,0,0,param_8);
  }
  return uVar3;
}

