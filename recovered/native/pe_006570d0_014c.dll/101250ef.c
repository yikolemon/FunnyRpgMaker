/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101250ef */

uint __fastcall FUN_101250ef(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_2 + 0x18) < 1) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    iVar5 = 0;
    uVar7 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x20) + iVar5 * 4);
      iVar3 = *(int *)(iVar1 + 0x74);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x294);
      }
      bVar2 = (**(code **)(iVar3 + 0x14))(param_1,iVar1,param_3);
      uVar4 = 1 << ((byte)iVar5 & 0x1f);
      uVar7 = uVar7 + bVar2;
      if (bVar2 == 0) {
        uVar4 = 0;
      }
      uVar6 = uVar6 | uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x18));
    uVar4 = 0;
    if (1 < uVar7) {
      uVar4 = uVar6;
    }
  }
  return uVar4;
}

