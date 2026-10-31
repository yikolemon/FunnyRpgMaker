/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233800 */

undefined4 FUN_10233800(int *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  undefined1 local_44 [44];
  undefined4 *local_18;
  uint local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288ea4;
  local_10 = *unaff_FS_OFFSET;
  uVar11 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar12 = (undefined4 *)FUN_10228350(0x34,uVar11);
    local_8 = 0;
    local_18 = puVar12;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0) {
        puVar13 = &DAT_10356101;
      }
      else {
        puVar13 = *(undefined1 **)(iVar2 + 0x18);
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = (undefined1 *)(iVar2 + 0x1c);
        }
      }
      FUN_1000daa4(puVar13);
      local_14 = 1;
      puVar12[1] = 0;
      *puVar12 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
      puVar14 = (undefined4 *)FUN_1022bf80(local_44);
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      uVar7 = puVar14[4];
      uVar8 = puVar14[5];
      uVar9 = puVar14[6];
      uVar10 = puVar14[7];
      uVar1 = *(undefined8 *)(puVar14 + 8);
      uVar3 = puVar14[10];
      puVar12[2] = *puVar14;
      puVar12[3] = uVar4;
      puVar12[4] = uVar5;
      puVar12[5] = uVar6;
      puVar12[6] = uVar7;
      puVar12[7] = uVar8;
      puVar12[8] = uVar9;
      puVar12[9] = uVar10;
      *(undefined8 *)(puVar12 + 10) = uVar1;
      puVar12[0xc] = uVar3;
    }
    *param_1 = (int)puVar12;
    if ((local_14 & 1) != 0) {
      FUN_1000dcbe();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return 2;
}

