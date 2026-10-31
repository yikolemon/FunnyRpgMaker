/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d0e6 */

undefined8 * FUN_14002d0e6(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar6 = (char *)FUN_14002d214(param_2,param_3);
  pcVar10 = pcVar6;
  if (pcVar6 == param_3) {
LAB_14002d1a0:
    *param_1 = pcVar6;
    return param_1;
  }
LAB_14002d10f:
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 0x20;
    if (pcVar10 == param_3) goto LAB_14002d1a0;
    if (*(longlong *)(pcVar11 + 0x30) != 0) {
      lVar7 = FUN_14000e108(pcVar10,0x7b,0);
      if (lVar7 == -1) {
        pcVar8 = *(char **)pcVar10;
LAB_14002d159:
        if (*(ulonglong *)(pcVar11 + 0x38) < 0x10) {
          pcVar8 = pcVar10;
        }
        if (*pcVar8 != '!') goto LAB_14002d10f;
      }
      else {
        pcVar8 = *(char **)pcVar10;
        pcVar9 = pcVar10;
        if (0xf < *(ulonglong *)(pcVar11 + 0x38)) {
          pcVar9 = pcVar8;
        }
        if ((pcVar9 + -1)[*(longlong *)(pcVar11 + 0x30)] != '}') goto LAB_14002d159;
      }
      if (pcVar10 != pcVar6) {
        FUN_1400065bc(pcVar6);
        uVar1 = *(undefined4 *)pcVar10;
        uVar2 = *(undefined4 *)(pcVar11 + 0x24);
        uVar3 = *(undefined4 *)(pcVar11 + 0x28);
        uVar4 = *(undefined4 *)(pcVar11 + 0x2c);
        uVar5 = *(undefined8 *)(pcVar11 + 0x38);
        *(undefined8 *)(pcVar6 + 0x10) = *(undefined8 *)(pcVar11 + 0x30);
        *(undefined8 *)(pcVar6 + 0x18) = uVar5;
        *(undefined4 *)pcVar6 = uVar1;
        *(undefined4 *)(pcVar6 + 4) = uVar2;
        *(undefined4 *)(pcVar6 + 8) = uVar3;
        *(undefined4 *)(pcVar6 + 0xc) = uVar4;
        pcVar11[0x30] = '\0';
        pcVar11[0x31] = '\0';
        pcVar11[0x32] = '\0';
        pcVar11[0x33] = '\0';
        pcVar11[0x34] = '\0';
        pcVar11[0x35] = '\0';
        pcVar11[0x36] = '\0';
        pcVar11[0x37] = '\0';
        pcVar11[0x38] = '\x0f';
        pcVar11[0x39] = '\0';
        pcVar11[0x3a] = '\0';
        pcVar11[0x3b] = '\0';
        pcVar11[0x3c] = '\0';
        pcVar11[0x3d] = '\0';
        pcVar11[0x3e] = '\0';
        pcVar11[0x3f] = '\0';
        *pcVar10 = '\0';
      }
      pcVar6 = pcVar6 + 0x20;
    }
  } while( true );
}

