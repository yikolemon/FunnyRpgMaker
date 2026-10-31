/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046fe43 */

int __fastcall FUN_0046fe43(int *param_1,char param_2)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((char)param_1[4] == '\0') {
    return 6;
  }
  puVar2 = (uint *)param_1[2];
  uVar6 = (uint)((ushort *)param_1[3])[1];
  uVar1 = *(ushort *)param_1[3];
  puVar2[1] = uVar6;
  *puVar2 = (uint)uVar1;
  uVar7 = (uint)*(byte *)((int)param_1 + 0x12);
  iVar5 = 3;
  if ((uVar7 ^ uVar7 - 1) <= uVar7 - 1) {
    return 3;
  }
  iVar3 = 0;
  if (uVar7 != 0) {
    for (; (*(byte *)((int)param_1 + 0x12) >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  switch(iVar3) {
  case 0:
    *(undefined1 *)((int)puVar2 + 0x12) = 1;
    uVar6 = uVar6 + 7 >> 3;
    uVar4 = 2;
    break;
  case 1:
    *(undefined1 *)((int)puVar2 + 0x12) = 3;
    uVar6 = uVar6 + 3 >> 2;
    uVar4 = 4;
    break;
  case 2:
    *(undefined1 *)((int)puVar2 + 0x12) = 4;
    uVar6 = uVar6 + 1 >> 1;
    uVar4 = 0x10;
    break;
  case 3:
    *(undefined1 *)((int)puVar2 + 0x12) = 2;
    goto LAB_0046fecd;
  default:
    goto switchD_0046fe85_caseD_4;
  case 5:
    *(undefined1 *)((int)puVar2 + 0x12) = 7;
    uVar6 = uVar6 << 2;
LAB_0046fecd:
    uVar4 = 0x100;
  }
  puVar2[2] = uVar6;
  *(undefined2 *)(puVar2 + 4) = uVar4;
  if (param_2 == '\0') {
    iVar5 = FUN_0041d47e(*(int *)(*param_1 + 0x54));
    if (iVar5 != 0) {
      return iVar5;
    }
    if (puVar2[3] != 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 1;
    }
  }
  iVar5 = 0;
switchD_0046fe85_caseD_4:
  return iVar5;
}

