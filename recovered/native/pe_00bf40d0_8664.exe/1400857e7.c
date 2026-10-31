/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400857e7 */

undefined8 FUN_1400857e7(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  uVar9 = *(ulonglong *)(param_1 + 0x80);
  uVar7 = 0;
  if (uVar9 <= *(uint *)(param_1 + 0x78)) {
    uVar10 = (uVar9 >> 1) + uVar9 + 4;
    puVar8 = *(undefined8 **)(param_1 + 0x70);
    if (puVar8 == (undefined8 *)(param_1 + 0x88)) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (0xffff < uVar10) {
        uVar10 = 0x10000;
      }
      puVar8 = (undefined8 *)0x0;
      uVar9 = 0;
    }
    else if (0xfffc < (uVar9 >> 1) + uVar9) {
      uVar10 = 0x10000;
      uVar7 = 0xffffffff;
      if (uVar9 == 0x10000) goto LAB_1400858d7;
    }
    puVar8 = (undefined8 *)
             FUN_14001f231(*(longlong *)(param_1 + 0xd0),1,(uint)uVar9,(uint)uVar10,(longlong)puVar8
                           ,&local_34);
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    uVar7 = 0xffffffff;
    if (local_34 == 0) {
      if (uVar9 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        uVar1 = *(undefined8 *)(param_1 + 0x90);
        uVar2 = *(undefined8 *)(param_1 + 0x98);
        uVar3 = *(undefined8 *)(param_1 + 0xa0);
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        uVar6 = *(undefined8 *)(param_1 + 0xc0);
        puVar8[6] = *(undefined8 *)(param_1 + 0xb8);
        puVar8[7] = uVar6;
        puVar8[4] = uVar4;
        puVar8[5] = uVar5;
        puVar8[2] = uVar2;
        puVar8[3] = uVar3;
        *puVar8 = uVar7;
        puVar8[1] = uVar1;
      }
      *(ulonglong *)(param_1 + 0x80) = uVar10;
      uVar7 = 0;
    }
  }
LAB_1400858d7:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
  }
  return uVar7;
}

