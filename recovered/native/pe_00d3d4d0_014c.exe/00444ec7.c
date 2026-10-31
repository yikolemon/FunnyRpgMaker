/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444ec7 */

int __fastcall FUN_00444ec7(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(code **)(param_1 + 0x204) != (code *)0x0) {
    iVar6 = (param_2 & 0xffff) * 0x10;
    iVar2 = (**(code **)(param_1 + 0x204))
                      (param_1,*(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar6),
                       *(undefined4 *)(param_1 + 0x68),0);
    if (iVar2 == 0) {
      piVar1 = *(int **)(param_1 + 0x68);
      uVar7 = *(uint *)(*(int *)(param_1 + 0x9c) + 0xc + iVar6);
      iVar2 = FUN_00420be1(piVar1,uVar7);
      iVar6 = 0;
      if (iVar2 == 0) {
        puVar3 = (uint *)piVar1[8];
        iVar6 = 0;
        if (3 < uVar7) {
          iVar6 = 0;
          do {
            uVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            iVar6 = iVar6 + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18);
            uVar7 = uVar7 - 4;
          } while (3 < uVar7);
        }
        if (uVar7 != 0) {
          bVar4 = 0x18;
          uVar5 = 0;
          do {
            iVar6 = iVar6 + ((uint)*(byte *)((int)puVar3 + uVar5) << (bVar4 & 0x1f));
            bVar4 = bVar4 - 8;
            uVar5 = uVar5 + 1;
          } while (uVar7 != uVar5);
        }
        FUN_00420cde(piVar1);
      }
      return iVar6;
    }
  }
  return 0;
}

