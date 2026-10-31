/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494b00 */

undefined4 __cdecl FUN_00494b00(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  int local_14;
  undefined1 local_5;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004903c8();
  }
  iVar1 = *param_2;
  uVar7 = 0;
  local_5 = 0;
  local_14 = 0;
  if (0 < iVar1) {
    puVar2 = *(uint **)(param_1 + 0x1c);
    piVar3 = (int *)puVar2[3];
    iVar4 = *piVar3;
    do {
      if (0 < iVar4) {
        iVar5 = param_2[1];
        iVar8 = iVar4;
        piVar9 = piVar3;
        do {
          piVar9 = piVar9 + 1;
          iVar6 = FUN_00494d10((uint *)(local_14 * 0x10 + iVar5),(byte *)*piVar9,puVar2);
          if (iVar6 != 0) {
            local_5 = 1;
            uVar7 = local_5;
            break;
          }
          iVar8 = iVar8 + -1;
          uVar7 = local_5;
        } while (0 < iVar8);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar7);
}

