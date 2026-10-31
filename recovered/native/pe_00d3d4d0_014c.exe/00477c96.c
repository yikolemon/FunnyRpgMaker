/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477c96 */

void __fastcall FUN_00477c96(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *local_24;
  
  iVar1 = param_1[2];
  if (1 < iVar1) {
    iVar2 = param_1[1];
    puVar4 = (uint *)(iVar2 * 0x10 + *param_1 + 0x10);
    local_24 = (uint *)(*param_1 + iVar2 * 0x20 + -0x20);
    iVar3 = 1;
    do {
      if (iVar2 < 3) {
        if (1 < iVar2) goto LAB_00477d2f;
      }
      else {
        iVar6 = 2;
        puVar5 = puVar4;
        do {
          FUN_00477e66(puVar5,-1,-1,iVar2);
          FUN_00477e66(puVar5,0,-1,iVar2);
          FUN_00477e66(puVar5,1,-1,iVar2);
          FUN_00477e66(puVar5,-1,0,iVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
        } while (iVar2 != iVar6);
LAB_00477d2f:
        iVar6 = 1;
        puVar5 = local_24;
        do {
          FUN_00477e66(puVar5,1,0,iVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + -4;
        } while (iVar2 != iVar6);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + iVar2 * 4;
      local_24 = local_24 + iVar2 * 4;
    } while (iVar3 != iVar1);
  }
  return;
}

