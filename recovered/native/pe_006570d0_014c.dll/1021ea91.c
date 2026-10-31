/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ea91 */

undefined4 __fastcall FUN_1021ea91(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  puVar6 = puVar2 + 7;
  iVar5 = (int)*(undefined4 **)(param_1 + 0x20) - (int)puVar6 >> 2;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x24) = 99;
    uVar7 = 1;
  }
  else {
    if (*(undefined4 **)(param_1 + 0x20) != puVar6) {
      puVar2[3] = iVar5;
      uVar1 = *(ushort *)(puVar2 + 5);
      iVar8 = *(int *)(param_1 + 4);
      uVar3 = *(uint *)(param_1 + 0x30);
      if ((uVar1 & 8) == 0) {
        if (*(int *)(param_1 + 8) <= (int)((-iVar8 & (iVar8 + uVar3) - 1) - uVar3)) {
          *(ushort *)(puVar2 + 5) = uVar1 | 0x20;
        }
        iVar8 = puVar2[4] + 1;
        puVar2[4] = iVar8 - iVar5;
        puVar2[2] = iVar5 + -1;
        puVar6 = puVar6 + iVar5 + -1;
      }
      else {
        if (*(int *)(param_1 + 8) <= (int)(iVar8 - 1U & uVar3)) {
          *(ushort *)(puVar2 + 5) = uVar1 | 0x10;
        }
        iVar8 = iVar5 + puVar2[4];
        puVar2[2] = 0;
      }
      puVar2[6] = *puVar6;
      cVar4 = FUN_1021f406(iVar8);
      if (cVar4 != '\0') {
        return 1;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x4c);
      if (*(undefined4 **)(param_1 + 0x4c) == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 0x4c) = puVar2;
        puVar6 = puVar2;
      }
      puVar2[1] = puVar6;
      *puVar2 = *(undefined4 *)(param_1 + 0x20);
      *(short *)(param_1 + 0x3c) = *(short *)(param_1 + 0x3c) + 1;
    }
    uVar7 = 0;
  }
  return uVar7;
}

