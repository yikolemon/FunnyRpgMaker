/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243960 */

void FUN_10243960(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined8 uVar5;
  undefined1 local_2c [24];
  uint local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102894cd;
  local_10 = *unaff_FS_OFFSET;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  bVar2 = false;
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_10228350(0x10,local_14);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_1001c4a2(local_2c);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < (uint)puVar4[5]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_1000daa4(puVar4);
      bVar2 = true;
      bVar1 = true;
      puVar3[1] = 0;
      *puVar3 = std::collate<unsigned_short>::vftable;
      uVar5 = FUN_1022ca50();
      *(undefined8 *)(puVar3 + 2) = uVar5;
    }
    *param_1 = (int)puVar3;
    if (bVar1) {
      FUN_1000dcbe();
    }
    if (bVar2) {
      FUN_10001fee();
    }
  }
  *unaff_FS_OFFSET = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

