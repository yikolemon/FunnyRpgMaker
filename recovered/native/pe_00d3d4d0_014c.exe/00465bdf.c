/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00465bdf */

void __fastcall FUN_00465bdf(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint local_20;
  
  iVar4 = *param_2;
  if (iVar4 != 0) {
    iVar2 = param_2[2];
    do {
      if ((((*(byte *)(iVar2 + 0x14) & 0xc) != 0) || ((*(byte *)(iVar2 + 0x18) & 0xc) != 0)) &&
         (local_20 = *(uint *)(iVar2 + 0x10), (local_20 & 0x10) == 0)) {
        iVar1 = *(int *)(iVar2 + 0x20);
        piVar5 = param_1 + 7;
        for (iVar3 = *param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (iVar1 - piVar5[-3] < -param_1[0x207]) break;
          if ((iVar1 <= param_1[0x207] + piVar5[-4]) &&
             (((char)param_1[0x208] != '\0' || (iVar1 - piVar5[-3] <= param_1[0x206])))) {
            *(int *)(iVar2 + 0x28) = *piVar5;
            local_20 = local_20 | 0x30;
            *(uint *)(iVar2 + 0x10) = local_20;
          }
          piVar5 = piVar5 + 8;
        }
        iVar3 = param_1[0x81];
        if (iVar3 != 0) {
          piVar5 = param_1 + iVar3 * 8 + 0x7c;
          do {
            if (*piVar5 - iVar1 < -param_1[0x207]) break;
            if ((piVar5[1] - param_1[0x207] <= iVar1) &&
               (((char)param_1[0x208] != '\0' || (*piVar5 - iVar1 < param_1[0x206])))) {
              *(int *)(iVar2 + 0x28) = piVar5[5];
              local_20 = local_20 | 0x30;
              *(uint *)(iVar2 + 0x10) = local_20;
            }
            piVar5 = piVar5 + -8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar2 = iVar2 + 0x2c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

