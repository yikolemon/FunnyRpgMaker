/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019141a */

void FUN_1019141a(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x284) != 0) {
    piVar7 = *(int **)(param_1 + 0x28c);
    piVar1 = piVar7 + *(int *)(param_1 + 0x284);
    do {
      iVar4 = *piVar7;
      if (((*(int *)(iVar4 + 0x54) == 0) || (*(char *)(*(int *)(iVar4 + 0x54) + 1) == '\x01')) &&
         (*(int *)(iVar4 + 0x48) != 0)) {
        piVar8 = *(int **)(iVar4 + 0x50);
        piVar2 = piVar8 + *(int *)(iVar4 + 0x48);
        do {
          piVar5 = (int *)*piVar8;
          if (((0 < *piVar5) && (piVar5[0x19] == param_5 && piVar5[0x18] == param_4)) &&
             (piVar5[0x16] == param_2)) {
            FUN_101884b4(param_6,param_7,param_8,param_9);
          }
          iVar4 = piVar5[0x24];
          if (iVar4 != 0) {
            iVar6 = piVar5[0x26];
            iVar9 = 0;
            do {
              if ((*(int *)(iVar6 + 0xc + iVar9) == param_5 &&
                   *(int *)(iVar6 + 8 + iVar9) == param_4) && (*(int *)(iVar6 + iVar9) == param_2))
              {
                puVar3 = (undefined4 *)(iVar6 + iVar9);
                *puVar3 = param_6;
                puVar3[1] = param_7;
                puVar3[2] = param_8;
                puVar3[3] = param_9;
              }
              iVar9 = iVar9 + 0x10;
            } while (iVar4 << 4 != iVar9);
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar2);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != piVar1);
  }
  return;
}

