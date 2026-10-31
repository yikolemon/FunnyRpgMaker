/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100650fb */

uint * FUN_100650fb(uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  
  if ((param_1 != param_2) && (param_1 + 3 != param_2)) {
    iVar8 = 0xc;
    puVar7 = param_1;
    puVar10 = param_1 + 3;
    do {
      uVar3 = puVar7[3];
      uVar4 = puVar7[4];
      uVar2 = *(undefined8 *)(puVar7 + 4);
      iVar11 = iVar8;
      do {
        uVar5 = *(uint *)((int)param_1 + iVar11 + -0xc);
        uVar9 = *(int *)((int)param_1 + iVar11 + -8) - uVar5;
        bVar6 = uVar9 < uVar4 - uVar3;
        if (uVar4 - uVar3 == uVar9) {
          bVar6 = uVar3 < uVar5;
        }
        puVar7 = (uint *)((int)param_1 + iVar11);
        if (!bVar6) break;
        puVar7[2] = *(uint *)((int)param_1 + iVar11 + -4);
        *(undefined8 *)puVar7 = *(undefined8 *)((int)param_1 + iVar11 + -0xc);
        iVar11 = iVar11 + -0xc;
        puVar7 = param_1;
      } while (iVar11 != 0);
      *puVar7 = uVar3;
      *(undefined8 *)(puVar7 + 1) = uVar2;
      puVar1 = puVar10 + 3;
      iVar8 = iVar8 + 0xc;
      puVar7 = puVar10;
      puVar10 = puVar1;
    } while (puVar1 != param_2);
  }
  return param_2;
}

