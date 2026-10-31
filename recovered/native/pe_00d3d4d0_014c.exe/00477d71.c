/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477d71 */

void __fastcall FUN_00477d71(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *local_24;
  
  iVar7 = param_1[2];
  if (1 < iVar7) {
    iVar1 = param_1[1];
    puVar4 = (uint *)(iVar1 * (iVar7 + -2) * 0x10 + *param_1 + 0x10);
    local_24 = (uint *)((iVar7 * 0x10 + -0x10) * iVar1 + *param_1 + -0x20);
    iVar7 = iVar7 + -2;
    do {
      puVar6 = local_24;
      iVar8 = 1;
      if (iVar1 < 3) {
        if (1 < iVar1) goto LAB_00477e2b;
      }
      else {
        iVar3 = 2;
        puVar5 = puVar4;
        do {
          FUN_00477e66(puVar5,-1,1,iVar1);
          FUN_00477e66(puVar5,0,1,iVar1);
          FUN_00477e66(puVar5,1,1,iVar1);
          FUN_00477e66(puVar5,-1,0,iVar1);
          iVar3 = iVar3 + 1;
          puVar5 = puVar5 + 4;
        } while (iVar1 != iVar3);
LAB_00477e2b:
        do {
          FUN_00477e66(puVar6,1,0,iVar1);
          iVar8 = iVar8 + 1;
          puVar6 = puVar6 + -4;
        } while (iVar1 != iVar8);
      }
      puVar4 = puVar4 + iVar1 * -4;
      local_24 = local_24 + iVar1 * -4;
      bVar2 = 0 < iVar7;
      iVar7 = iVar7 + -1;
    } while (bVar2);
  }
  return;
}

