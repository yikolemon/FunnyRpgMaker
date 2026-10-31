/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea4ee */

void FUN_1407ea4ee(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong unaff_RBP;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(ulonglong)param_1;
  iVar4 = (int)(unaff_RBP >> 0x20);
  iVar1 = 0;
  if (1 < iVar4) {
    iVar1 = iVar4 + -1;
    uVar2 = (int)unaff_RBP + 0xc;
    do {
      *(uint *)((ulonglong)uVar2 - 4) = uVar2;
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != 0);
  }
  *(undefined4 *)((unaff_RBP & 0xffffffff) + 8 + (ulonglong)(uint)(iVar1 * 3) * 4) = 0;
  puVar3[3] = 1;
  puVar3[4] = 0;
  puVar3[7] = (int)unaff_RBP;
  puVar3[6] = param_1 + 0x20;
  *puVar3 = param_2;
  puVar3[1] = (int)((ulonglong)unaff_RBX >> 0x20);
  puVar3[5] = iVar4;
  FUN_1407ed2d1(puVar3);
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = param_1 + 0x2c;
  puVar3[0xb] = param_2;
  puVar3[0xc] = 0x40000000;
  puVar3[0xd] = 0;
  return;
}

