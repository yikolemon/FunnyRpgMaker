/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007cf02 */

undefined8 FUN_14007cf02(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  puVar4 = (undefined4 *)((longlong)puVar3 + 0x24);
  iVar9 = (int)((ulonglong)(*(longlong *)(param_1 + 0x30) - (longlong)puVar4) >> 2);
  if (iVar9 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 99;
    uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  else {
    if (iVar9 != 0) {
      *(int *)((longlong)puVar3 + 0x14) = iVar9;
      uVar1 = *(ushort *)((longlong)puVar3 + 0x1c);
      iVar8 = *(int *)(param_1 + 4);
      uVar2 = *(uint *)(param_1 + 0x44);
      if ((uVar1 & 8) == 0) {
        if (*(int *)(param_1 + 8) <= (int)((-iVar8 & (uVar2 + iVar8) - 1) - uVar2)) {
          *(ushort *)((longlong)puVar3 + 0x1c) = uVar1 | 0x20;
        }
        iVar7 = *(int *)(puVar3 + 3) + 1;
        iVar8 = iVar7 - iVar9;
        *(int *)(puVar3 + 3) = iVar8;
        *(uint *)(puVar3 + 2) = iVar9 - 1U;
        puVar4 = puVar4 + (iVar9 - 1U);
      }
      else {
        if (*(int *)(param_1 + 8) <= (int)(iVar8 - 1U & uVar2)) {
          *(ushort *)((longlong)puVar3 + 0x1c) = uVar1 | 0x10;
        }
        iVar8 = *(int *)(puVar3 + 3);
        iVar7 = iVar9 + iVar8;
        *(undefined4 *)(puVar3 + 2) = 0;
      }
      *(undefined4 *)(puVar3 + 4) = *puVar4;
      uVar5 = FUN_14007d826(param_1,iVar8,iVar7);
      if ((char)uVar5 != '\0') {
        return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      puVar6 = *(undefined8 **)(param_1 + 0x68);
      if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x68) = puVar3;
        puVar6 = puVar3;
      }
      puVar3[1] = puVar6;
      *puVar3 = *(undefined8 *)(param_1 + 0x30);
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
    }
    uVar5 = 0;
  }
  return uVar5;
}

