/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a9a19 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a9a19(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar7;
  
  uVar6 = (int)&stack0xffffffffffffffe0 - 0x10;
  uVar7 = (ulonglong)uVar6;
  puVar9 = (undefined4 *)(ulonglong)param_1;
  iVar2 = param_2[5];
  piVar1 = (int *)(uVar7 + 8);
  *piVar1 = 0;
  uVar4 = (ulonglong)(uint)(param_2[4] + iVar2);
  uVar5 = iVar2 + *(int *)(uVar7 + 0x24);
  uVar3 = *param_2;
  puVar10 = (undefined8 *)(ulonglong)uVar6;
  *(undefined8 *)(uVar7 - 8) = 6;
  *(int **)(uVar7 - 0x10) = piVar1;
  *(ulonglong *)(uVar7 - 0x18) = uVar4;
  *(ulonglong *)(uVar7 - 0x20) = uVar4;
  *(ulonglong *)(uVar7 - 0x28) = (ulonglong)uVar5;
  *(undefined8 *)(uVar7 - 0x30) = 0x1407a9a53;
  FUN_1407aa0e1(puVar10,uVar3);
  uVar6 = (int)(uVar7 - 0x28) + 0x14;
  uVar8 = (ulonglong)uVar6;
  *puVar9 = 0;
  uVar3 = *(undefined4 *)((longlong)puVar10 + 4);
  *(undefined8 *)(puVar9 + 1) = *puVar10;
  puVar9[3] = 0;
  puVar9[4] = uVar3;
  puVar9[5] = *piVar1 - uVar5;
  if (_DAT_150b32784 == (*(uint *)(uVar8 + 0xc) ^ uVar6)) {
    return;
  }
  uVar5 = *(uint *)(uVar8 + 0xc);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar8 - 8) = FUN_1407a9a9b;
  FUN_1408802b0(uVar5 ^ uVar6);
}

