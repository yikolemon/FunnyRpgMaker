/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180228cc9 */

undefined8 FUN_180228cc9(longlong *param_1,char param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((char)param_1[4] == '\0') {
    return 6;
  }
  puVar4 = (uint *)param_1[2];
  uVar2 = ((ushort *)param_1[3])[1];
  uVar9 = (uint)uVar2;
  uVar3 = *(ushort *)param_1[3];
  puVar4[1] = (uint)uVar2;
  *puVar4 = (uint)uVar3;
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  uVar7 = 3;
  if (((uint)bVar1 ^ bVar1 - 1) <= bVar1 - 1) {
    return 3;
  }
  uVar5 = 0;
  if (bVar1 != 0) {
    for (; (bVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  if (5 < uVar5) {
    return 3;
  }
  uVar8 = (uint)uVar2;
  switch(uVar5) {
  case 0:
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 1;
    uVar9 = uVar8 + 7 >> 3;
    uVar6 = 2;
    break;
  case 1:
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 3;
    uVar9 = uVar8 + 3 >> 2;
    uVar6 = 4;
    break;
  case 2:
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 4;
    uVar9 = uVar8 + 1 >> 1;
    uVar6 = 0x10;
    break;
  case 3:
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 2;
    goto LAB_180228d66;
  case 4:
    goto switchD_180228d21_caseD_4;
  case 5:
    *(undefined1 *)((longlong)puVar4 + 0x1a) = 7;
    uVar9 = (uint)uVar2 << 2;
LAB_180228d66:
    uVar6 = 0x100;
  }
  puVar4[2] = uVar9;
  *(undefined2 *)(puVar4 + 6) = uVar6;
  if (param_2 == '\0') {
    uVar7 = FUN_1801cab28(*(undefined8 *)(*param_1 + 0x78));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(longlong *)(puVar4 + 4) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
    }
  }
  uVar7 = 0;
switchD_180228d21_caseD_4:
  return uVar7;
}

