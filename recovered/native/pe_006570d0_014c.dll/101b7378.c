/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7378 */

void __thiscall FUN_101b7378(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (0 < *(int *)(param_1 + param_2 * 0xc)) {
    piVar1 = (int *)(param_1 + param_2 * 0xc);
    piVar2 = (int *)(param_1 + param_3 * 0xc);
    uVar8 = 0;
    do {
      uVar3 = *(undefined4 *)(piVar1[2] + uVar8 * 4);
      cVar4 = FUN_1014b156(uVar3);
      if (cVar4 == '\0') {
        uVar8 = uVar8 + 1;
      }
      else {
        FUN_1025b2d0(piVar1[2] + uVar8 * 4,piVar1[2] + uVar8 * 4 + 4,(~uVar8 + *piVar1) * 4);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar2;
        if (iVar7 == piVar2[1]) {
          if (iVar7 == 0) {
            iVar5 = 8;
          }
          else {
            iVar5 = iVar7 / 2 + iVar7;
          }
          iVar6 = iVar7 + 1;
          if (iVar7 + 1 < iVar5) {
            iVar6 = iVar5;
          }
          iVar5 = FUN_100fa1fa(iVar6 * 4);
          if (piVar2[2] != 0) {
            FUN_1025b2d0(iVar5,piVar2[2],*piVar2 << 2);
            FUN_100fa2cb(piVar2[2]);
          }
          piVar2[2] = iVar5;
          piVar2[1] = iVar6;
          iVar7 = *piVar2;
        }
        else {
          iVar5 = piVar2[2];
        }
        *(undefined4 *)(iVar5 + iVar7 * 4) = uVar3;
        *piVar2 = *piVar2 + 1;
      }
    } while ((int)uVar8 < *piVar1);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_1026fb00(*(undefined4 *)(param_1 + 8 + param_3 * 0xc),
                 *(undefined4 *)(param_1 + param_3 * 0xc),4,&LAB_101b74ec);
  }
  FUN_1014b10a(param_3 * 0x20 + param_1 + 0x18);
  FUN_1014b0b0();
  return;
}

