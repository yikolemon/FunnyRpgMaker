/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187bf7 */

undefined8 FUN_140187bf7(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar11 = *(ulonglong *)(param_1 + 0x80);
  uVar9 = 0;
  if (uVar11 <= *(uint *)(param_1 + 0x78)) {
    uVar12 = (uVar11 >> 1) + uVar11 + 4;
    puVar10 = *(undefined4 **)(param_1 + 0x70);
    if (puVar10 == (undefined4 *)(param_1 + 0x88)) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (0xffff < uVar12) {
        uVar12 = 0x10000;
      }
      puVar10 = (undefined4 *)0x0;
      uVar11 = 0;
    }
    else if (0xfffc < (uVar11 >> 1) + uVar11) {
      uVar12 = 0x10000;
      uVar9 = 0xffffffff;
      if (uVar11 == 0x10000) goto LAB_140187ce7;
    }
    local_40 = &local_34;
    local_48 = puVar10;
    puVar10 = (undefined4 *)
              FUN_14012b8aa(*(undefined8 *)(param_1 + 0xd0),1,uVar11 & 0xffffffff,
                            uVar12 & 0xffffffff);
    *(undefined4 **)(param_1 + 0x70) = puVar10;
    uVar9 = 0xffffffff;
    if (local_34 == 0) {
      if (uVar11 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x88);
        uVar2 = *(undefined4 *)(param_1 + 0x8c);
        uVar3 = *(undefined4 *)(param_1 + 0x90);
        uVar4 = *(undefined4 *)(param_1 + 0x94);
        uVar9 = *(undefined8 *)(param_1 + 0x98);
        uVar5 = *(undefined8 *)(param_1 + 0xa0);
        uVar6 = *(undefined8 *)(param_1 + 0xa8);
        uVar7 = *(undefined8 *)(param_1 + 0xb0);
        uVar8 = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(param_1 + 0xb8);
        *(undefined8 *)(puVar10 + 0xe) = uVar8;
        *(undefined8 *)(puVar10 + 8) = uVar6;
        *(undefined8 *)(puVar10 + 10) = uVar7;
        *(undefined8 *)(puVar10 + 4) = uVar9;
        *(undefined8 *)(puVar10 + 6) = uVar5;
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      *(ulonglong *)(param_1 + 0x80) = uVar12;
      uVar9 = 0;
    }
  }
LAB_140187ce7:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar9;
}

