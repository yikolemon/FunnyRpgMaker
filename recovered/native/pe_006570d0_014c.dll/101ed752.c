/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ed752 */

int __fastcall FUN_101ed752(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar6;
  uint uVar7;
  
  if (*(code **)(param_1 + 0x204) != (code *)0x0) {
    iVar6 = (param_2 & 0xffff) * 0x10;
    iVar1 = (**(code **)(param_1 + 0x204))
                      (param_1,*(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar6),
                       *(undefined4 *)(param_1 + 0x68),0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      uVar7 = *(uint *)(*(int *)(param_1 + 0x9c) + 0xc + iVar6);
      iVar6 = FUN_101c4b69(iVar1,uVar7,unaff_ESI,unaff_EDI);
      iVar5 = 0;
      if (iVar6 == 0) {
        puVar2 = *(uint **)(iVar1 + 0x20);
        iVar5 = 0;
        if (3 < uVar7) {
          iVar5 = 0;
          do {
            uVar4 = *puVar2;
            puVar2 = puVar2 + 1;
            iVar5 = iVar5 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                            uVar4 << 0x18);
            uVar7 = uVar7 - 4;
          } while (3 < uVar7);
        }
        if (uVar7 != 0) {
          bVar3 = 0x18;
          uVar4 = 0;
          do {
            iVar5 = iVar5 + ((uint)*(byte *)((int)puVar2 + uVar4) << (bVar3 & 0x1f));
            bVar3 = bVar3 - 8;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
        }
        FUN_101c4c66(iVar1);
      }
      return iVar5;
    }
  }
  return 0;
}

