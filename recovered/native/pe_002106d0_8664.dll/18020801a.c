/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020801a */

int FUN_18020801a(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
LAB_18020809c:
    iVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *param_2;
    do {
      uVar6 = uVar6 + 1;
      uVar7 = 0;
      uVar5 = uVar1;
      uVar2 = uVar1 >> 1;
      while (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 0x10),
            uVar6 != uVar3) {
        uVar4 = uVar2 + 1;
        if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
          uVar5 = uVar2;
          uVar4 = uVar7;
        }
        uVar7 = uVar4;
        uVar3 = (uVar6 - uVar3) + uVar2;
        uVar4 = (uVar5 - uVar7 >> 1) + uVar7;
        uVar2 = uVar3;
        if (uVar3 < uVar7) {
          uVar2 = uVar4;
        }
        if (uVar5 <= uVar3) {
          uVar2 = uVar4;
        }
        if (uVar5 <= uVar7) {
          if (uVar7 == 0 || uVar1 <= uVar7) goto LAB_18020809c;
          iVar8 = uVar7 + 1;
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar7 * 0x10);
          goto LAB_1802080b8;
        }
      }
    } while (uVar2 == 0);
    iVar8 = uVar2 + 1;
  }
LAB_1802080b8:
  *param_2 = uVar6;
  return iVar8;
}

