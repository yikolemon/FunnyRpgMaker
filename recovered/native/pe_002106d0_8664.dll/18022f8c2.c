/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022f8c2 */

undefined8 FUN_18022f8c2(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  puVar6 = (undefined4 *)((longlong)puVar3 + 0x24);
  iVar10 = (int)((ulonglong)(*(longlong *)(param_1 + 0x30) - (longlong)puVar6) >> 2);
  if (iVar10 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 99;
    uVar5 = 1;
  }
  else {
    if (iVar10 != 0) {
      *(int *)((longlong)puVar3 + 0x14) = iVar10;
      uVar1 = *(ushort *)((longlong)puVar3 + 0x1c);
      iVar9 = *(int *)(param_1 + 4);
      uVar2 = *(uint *)(param_1 + 0x44);
      if ((uVar1 & 8) == 0) {
        if (*(int *)(param_1 + 8) <= (int)((-iVar9 & (uVar2 + iVar9) - 1) - uVar2)) {
          *(ushort *)((longlong)puVar3 + 0x1c) = uVar1 | 0x20;
        }
        iVar8 = *(int *)(puVar3 + 3) + 1;
        iVar9 = iVar8 - iVar10;
        *(int *)(puVar3 + 3) = iVar9;
        *(uint *)(puVar3 + 2) = iVar10 - 1U;
        puVar6 = puVar6 + (iVar10 - 1U);
      }
      else {
        if (*(int *)(param_1 + 8) <= (int)(iVar9 - 1U & uVar2)) {
          *(ushort *)((longlong)puVar3 + 0x1c) = uVar1 | 0x10;
        }
        iVar9 = *(int *)(puVar3 + 3);
        iVar8 = iVar10 + iVar9;
        *(undefined4 *)(puVar3 + 2) = 0;
      }
      *(undefined4 *)(puVar3 + 4) = *puVar6;
      cVar4 = FUN_1802301e6(param_1,iVar9,iVar8);
      if (cVar4 != '\0') {
        return 1;
      }
      puVar7 = *(undefined8 **)(param_1 + 0x68);
      if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x68) = puVar3;
        puVar7 = puVar3;
      }
      puVar3[1] = puVar7;
      *puVar3 = *(undefined8 *)(param_1 + 0x30);
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
    }
    uVar5 = 0;
  }
  return uVar5;
}

