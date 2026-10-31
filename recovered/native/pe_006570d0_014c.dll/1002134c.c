/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002134c */

void FUN_1002134c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4,char *param_5)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
joined_r0x1002135e:
  while( true ) {
    pcVar7 = param_4;
    if (pcVar7 == param_5) {
      *param_1 = param_3;
      return;
    }
    cVar4 = *pcVar7;
    param_4 = pcVar7 + 1;
    if (cVar4 == '\\') goto LAB_10021397;
    if (cVar4 != '&') break;
    puVar1 = *(undefined4 **)(param_2 + 8);
    if (*(undefined4 **)(param_2 + 0xc) != puVar1) {
      pcVar2 = (char *)puVar1[1];
      for (pcVar7 = (char *)*puVar1; pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
        FUN_10003d9a((int)*pcVar7);
      }
    }
  }
  goto LAB_100213e6;
LAB_10021397:
  if (param_4 != param_5) {
    cVar4 = pcVar7[1];
    param_4 = pcVar7 + 2;
    if ((byte)(cVar4 - 0x30U) < 10) {
      uVar5 = (uint)(byte)(cVar4 - 0x30U);
      iVar3 = *(int *)(param_2 + 8);
      uVar6 = (*(int *)(param_2 + 0xc) - iVar3 >> 2) * -0x55555555;
      if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
        pcVar2 = *(char **)(iVar3 + 4 + uVar5 * 0xc);
        for (pcVar7 = *(char **)(iVar3 + uVar5 * 0xc); pcVar7 != pcVar2; pcVar7 = pcVar7 + 1) {
          FUN_10003d9a((int)*pcVar7);
        }
      }
    }
    else {
LAB_100213e6:
      FUN_10003d9a((int)cVar4);
    }
  }
  goto joined_r0x1002135e;
}

