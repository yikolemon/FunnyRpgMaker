/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10251c40 */

undefined4 FUN_10251c40(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288a14;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  bVar5 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined4 *)FUN_10228350(8,uVar2);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar4 = &DAT_10356101;
      }
      else {
        puVar4 = *(undefined1 **)(iVar1 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = (undefined1 *)(iVar1 + 0x1c);
        }
      }
      FUN_1000daa4(puVar4);
      bVar5 = true;
      puVar3[1] = 0;
      *puVar3 = std::messages<char>::vftable;
    }
    *param_1 = (int)puVar3;
    if (bVar5) {
      FUN_1000dcbe();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return 6;
}

