/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476211 */

undefined4 __fastcall FUN_00476211(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  puVar7 = puVar2 + 7;
  iVar4 = (int)*(undefined4 **)(param_1 + 0x20) - (int)puVar7;
  iVar5 = iVar4 >> 2;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x24) = 99;
    uVar6 = CONCAT31((int3)(iVar4 >> 10),1);
  }
  else {
    if (*(undefined4 **)(param_1 + 0x20) != puVar7) {
      puVar2[3] = iVar5;
      uVar1 = *(ushort *)(puVar2 + 5);
      iVar4 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x30);
      if ((uVar1 & 8) == 0) {
        if (*(int *)(param_1 + 8) <= (int)((-iVar4 & (iVar4 + uVar3) - 1) - uVar3)) {
          *(ushort *)(puVar2 + 5) = uVar1 | 0x20;
        }
        iVar8 = puVar2[4] + 1;
        iVar4 = iVar8 - iVar5;
        puVar2[4] = iVar4;
        puVar2[2] = iVar5 + -1;
        puVar7 = puVar7 + iVar5 + -1;
      }
      else {
        if (*(int *)(param_1 + 8) <= (int)(iVar4 - 1U & uVar3)) {
          *(ushort *)(puVar2 + 5) = uVar1 | 0x10;
        }
        iVar4 = puVar2[4];
        iVar8 = iVar5 + iVar4;
        puVar2[2] = 0;
      }
      puVar2[6] = *puVar7;
      uVar6 = FUN_00476b86(param_1,iVar4,iVar8);
      if ((char)uVar6 != '\0') {
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      puVar7 = *(undefined4 **)(param_1 + 0x4c);
      if (*(undefined4 **)(param_1 + 0x4c) == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 0x4c) = puVar2;
        puVar7 = puVar2;
      }
      puVar2[1] = puVar7;
      *puVar2 = *(undefined4 *)(param_1 + 0x20);
      *(short *)(param_1 + 0x3c) = *(short *)(param_1 + 0x3c) + 1;
    }
    uVar6 = 0;
  }
  return uVar6;
}

