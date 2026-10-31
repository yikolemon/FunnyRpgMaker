/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00454744 */

void __fastcall FUN_00454744(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *local_20;
  uint local_1c;
  
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    local_20 = (undefined1 *)*param_1;
    iVar9 = param_1[2];
    bVar7 = true;
    uVar8 = 0x80;
    local_1c = 0;
    bVar1 = false;
    uVar4 = 0;
    do {
      if ((!bVar1) && (param_2 < param_3)) {
        iVar2 = (int)param_3 - (int)param_2;
        pbVar5 = param_2;
        do {
          param_2 = pbVar5 + 1;
          uVar4 = (uint)*pbVar5;
          bVar7 = (bool)(bVar7 ^ 1);
          if (uVar4 != 0) goto LAB_004547a4;
          iVar2 = iVar2 + -1;
          pbVar5 = param_2;
        } while (iVar2 != 0);
        uVar4 = 0;
        param_2 = param_3;
      }
LAB_004547a4:
      uVar3 = uVar8;
      if (!bVar7) {
        uVar3 = 0;
      }
      local_1c = local_1c | uVar3;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        *local_20 = (char)local_1c;
        local_20 = (undefined1 *)(*param_1 + param_1[1]);
        iVar9 = param_1[2];
        *param_1 = (int)local_20;
LAB_004547e7:
        local_1c = 0;
        uVar8 = 0x80;
      }
      else {
        uVar8 = uVar8 >> 1;
        if (uVar8 == 0) {
          *local_20 = (char)local_1c;
          local_20 = local_20 + 1;
          goto LAB_004547e7;
        }
      }
      bVar1 = 1 < (int)uVar4;
      iVar6 = iVar6 + -1;
      uVar4 = uVar4 - 1;
    } while (iVar6 != 0);
    if (uVar8 != 0x80) {
      *local_20 = (char)local_1c;
    }
  }
  return;
}

