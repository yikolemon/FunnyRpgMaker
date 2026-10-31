/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004776f8 */

undefined4 __fastcall FUN_004776f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_2c;
  
  iVar1 = param_2[1];
  uVar3 = 6;
  if ((iVar1 == param_1[1]) && (iVar2 = *param_2, iVar2 == param_1[2])) {
    if (0 < iVar2) {
      iVar5 = param_2[3];
      uVar9 = param_1[0xf] * 0x10000;
      local_2c = 0;
      iVar10 = 0;
      do {
        if (0 < iVar1) {
          iVar7 = 0;
          iVar8 = local_2c;
          do {
            uVar6 = *(uint *)(*param_1 + iVar8);
            uVar4 = uVar9;
            if ((int)uVar6 < (int)uVar9) {
              uVar4 = uVar6;
            }
            if ((int)uVar6 < 0) {
              uVar4 = uVar9;
            }
            uVar6 = -uVar4;
            if (((char)param_1[0x10] == '\0') != *(byte *)(*param_1 + 0xc + iVar8) < 0x7f) {
              uVar6 = uVar4;
            }
            uVar3 = FUN_00477ef6(uVar6,uVar9);
            *(char *)(iVar5 + iVar7) = (char)uVar3;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0x10;
          } while (iVar1 != iVar7);
        }
        iVar10 = iVar10 + 1;
        local_2c = local_2c + iVar1 * 0x10;
        iVar5 = iVar5 + iVar1;
      } while (iVar10 != iVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

