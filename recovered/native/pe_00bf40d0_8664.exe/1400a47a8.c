/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a47a8 */

undefined8
FUN_1400a47a8(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,
             int *param_6,byte param_7,longlong *param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    if ((param_7 != 0) && (puVar2 = (undefined8 *)(param_1 + (*param_6 == 0x2d)), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (*(char *)((longlong)puVar2 + lVar6) != '\0');
      FUN_1400b3550((undefined8 *)((longlong)puVar2 + 1),puVar2,lVar7 + 2);
    }
    puVar3 = param_1;
    if (*param_6 == 0x2d) {
      *param_1 = 0x2d;
      puVar3 = param_1 + 1;
    }
    if (0 < param_3) {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      if ((char)param_8[5] == '\0') {
        FUN_14008f0b0(param_8);
      }
      *puVar3 = *(undefined1 *)**(undefined8 **)(param_8[3] + 0xf8);
    }
    pcVar4 = puVar3 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    puVar3 = param_1 + (param_2 - (longlong)pcVar4);
    if (param_2 == 0xffffffffffffffff) {
      puVar3 = (undefined1 *)0xffffffffffffffff;
    }
    uVar1 = FUN_1400a0d40(pcVar4,(longlong)puVar3,0x14011c710);
    if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
      *pcVar4 = 'E';
    }
    if (**(char **)(param_6 + 2) != '0') {
      iVar5 = param_6[1] + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        pcVar4[1] = '-';
      }
      if (99 < iVar5) {
        pcVar4[2] = pcVar4[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        pcVar4[3] = pcVar4[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      pcVar4[4] = pcVar4[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (pcVar4[2] == '0')) {
      FUN_1400b3550((undefined8 *)(pcVar4 + 2),(undefined8 *)(pcVar4 + 3),3);
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_8 + 6) = 1;
    *(undefined4 *)((longlong)param_8 + 0x2c) = 0x22;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_8);
    uVar1 = 0x22;
  }
  return uVar1;
}

